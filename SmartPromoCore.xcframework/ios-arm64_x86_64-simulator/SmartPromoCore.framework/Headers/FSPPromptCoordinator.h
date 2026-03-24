//
//  FSPPromptCoordinator.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 06/07/21.
//

#import <UIKit/UIKit.h>
#import "SmartPromoSharedAliases.h"
#import "FSPThemed.h"
#import "FSPBaseViewController.h"

typedef void (^FSPAction)(NSString* action);

@interface FSPPromptItem : NSObject

@property FSPPrompt* prompt;
@property NSArray* customViews;
@property BOOL customViewsNoPadding;
@property UIView* frontView;
@property FSPAction onTap;

+ (FSPPromptItem*) instanceWithPrompt: (FSPPrompt*) prompt;
+ (FSPPromptItem*) errorWithOnTap:(FSPAction)onTap;

@end

@interface FSPPromptCoordinator : FSPBaseViewController <UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *contentView;

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;

@property UIStackView *stackView;
@property UIButton *closeButton;

@property (nonatomic, strong) FSPPromptItem* currentItem;

@property CGFloat keyboardMarginBottom;
@property BOOL swipeToClose;

@property FSPBlock inputDidUpdate;

+ (FSPPromptCoordinator*) instance;

- (FSPPromptCoordinator*) setClosable: (BOOL) internalClosable;
- (FSPPromptCoordinator*) setWillDismiss: (FSPBlock) willDismiss;
- (FSPPromptCoordinator*) setOnDismiss: (FSPBlock) onDismiss;
- (FSPPromptCoordinator*) setOnRetry: (FSPBlock) onRetry;

- (FSPPromptCoordinator*) presentItem: (FSPPromptItem*) item above: (UIViewController*) above;
- (FSPPromptCoordinator*) showLoading;

- (void) dismiss;
- (void) dismissWithCompletion: (FSPBlock) completion;
- (void) setButtonEnabled: (NSString*) action enabled:(BOOL) enabled;

+ (UILabel*) makeTitle: (FSPPromptContent*) content;
+ (UITextView*) makeBody: (FSPPromptContent*) content themed: (id<FSPThemed>) themed;
+ (UIView*) makeSpace;
+ (UIView*) makeSpace: (CGFloat) height;
+ (UIButton*) makeButton: (NSString*) title textStyle: (BOOL) textStyle themed: (id<FSPThemed>) themed ;
- (void) updateSize;
@end

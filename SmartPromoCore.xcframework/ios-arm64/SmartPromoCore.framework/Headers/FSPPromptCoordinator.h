//
//  FSPPromptCoordinator.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 06/07/21.
//

#import <UIKit/UIKit.h>
#import <SmartPromoCore/SmartPromoSharedAliases.h>
#import <SmartPromoCore/FSPThemed.h>
#import <SmartPromoCore/FSPBaseViewController.h>

typedef void (^FSPAction)(NSString* action);

@interface FSPPromptItem : NSObject

@property FSPPrompt* prompt;
@property NSArray* customViews;
@property BOOL customViewsNoPadding;
@property UIView* frontView;
@property FSPAction onTap;

+ (nonnull FSPPromptItem*) instanceWithPrompt: (nonnull FSPPrompt*) prompt;
+ (nonnull FSPPromptItem*) errorWithOnTap:(nullable FSPAction)onTap NS_SWIFT_NAME(error(onTap:));

/// A failed call's prompt when the API sent one, the generic error when it did not. Either way
/// [onTap] receives the action of the button tapped, so a retry sent by the API still runs.
+ (nonnull FSPPromptItem*) errorWithPrompt:(nullable FSPPrompt*)prompt onTap:(nullable FSPAction)onTap NS_SWIFT_NAME(error(_:onTap:));

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

+ (nonnull FSPPromptCoordinator*) instance;

- (FSPPromptCoordinator*) setClosable: (BOOL) internalClosable;
- (FSPPromptCoordinator*) setWillDismiss: (FSPBlock) willDismiss;
- (FSPPromptCoordinator*) setOnDismiss: (FSPBlock) onDismiss;
- (FSPPromptCoordinator*) setOnRetry: (FSPBlock) onRetry;

- (FSPPromptCoordinator*) presentItem: (FSPPromptItem*) item above: (UIViewController*) above;
- (FSPPromptCoordinator*) showLoading;

- (void) dismiss;
- (void) dismissWithCompletion: (FSPBlock) completion;
- (void) setButtonEnabled: (NSString*) action enabled:(BOOL) enabled;
- (BOOL) validateAndShowInputErrors;

+ (UILabel*) makeTitle: (FSPPromptContent*) content;
+ (UITextView*) makeBody: (FSPPromptContent*) content themed: (id<FSPThemed>) themed;
+ (UIView*) makeSpace;
+ (UIView*) makeSpace: (CGFloat) height;
+ (UIButton*) makeButton: (NSString*) title textStyle: (BOOL) textStyle themed: (id<FSPThemed>) themed ;
- (void) updateSize;
@end

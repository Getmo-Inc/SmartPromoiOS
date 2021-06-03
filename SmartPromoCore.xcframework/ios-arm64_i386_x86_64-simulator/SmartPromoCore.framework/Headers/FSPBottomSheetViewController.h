//
//  FSPBottomSheetViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/02/21.
//

#import <UIKit/UIKit.h>
#import "FSPFormViewController.h"
#import "FSPDispatchQueue+SmartPromo.h"

@interface FSPBottomSheetViewController : FSPFormViewController <UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIView *contentView;
@property (weak, nonatomic) IBOutlet UIView *bottomSheetView;
@property (weak, nonatomic) IBOutlet UIStackView *stackView;

@property (strong, nonatomic) FSPBlock actionAfterDismissing;

- (UILabel*) addTitle: (NSString*) title;
- (UILabel*) makeTitle: (NSString*) title;
- (UILabel*) addMessage: (NSString*) title;
- (UILabel*) makeMessage: (NSString*) message;

- (void) dismiss;
- (void) changeViews: (FSPBlock) block completion: (FSPBlock) completion;

@end


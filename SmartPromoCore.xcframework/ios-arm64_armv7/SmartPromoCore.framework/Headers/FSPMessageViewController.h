//
//  FSPMessageViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/17/21.
//

#import <UIKit/UIKit.h>
#import "FSPBottomSheetViewController.h"
#import "FSPButton.h"

typedef BOOL (^FSPAction)(void);

@interface FSPMessageViewController : FSPBottomSheetViewController

@property (nonatomic, strong) UILabel* titleLabel;
@property (nonatomic, strong) FSPButton* primaryButton;
@property (nonatomic, strong) UIButton* secondaryButton;

+ (FSPMessageViewController*) instance;

- (FSPMessageViewController*) setTitle: (NSString*) title;
- (FSPMessageViewController*) setMessage: (NSString*) message;
- (FSPMessageViewController*) setPrimaryButtonTitle: (NSString*) title;
- (FSPMessageViewController*) setPrimaryButtonAction: (FSPAction) action;
- (FSPMessageViewController*) setSecondaryButtonTitle: (NSString*) title;
- (FSPMessageViewController*) setSecondaryButtonAction: (FSPAction) action;

@end

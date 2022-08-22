//
//  FSPFormViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>

#import "FSPBaseViewController.h"
#import "FSPTextField.h"

@interface FSPFormViewController : FSPBaseViewController <UITextFieldDelegate, UIScrollViewDelegate>

@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *marginBottom;

- (FSPTextField*) currentTextField;
- (void) keyboardChangeIsVisible: (BOOL) isVisible withHeight: (CGFloat) height;
- (void) scrollToTextField: (UITextField*) textField;
- (void) scrollToBottom;

@end


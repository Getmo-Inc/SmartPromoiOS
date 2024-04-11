//
//  FSPTextField.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/29/20.
//

#import <UIKit/UIKit.h>
#import "JMMaskTextField.h"

IB_DESIGNABLE
@interface FSPTextField : JMMaskTextField

@property (strong, nonatomic) IBInspectable NSString *labelText;
@property (nonatomic, assign) IBInspectable BOOL isMale;
@property (nonatomic, assign) IBInspectable BOOL isOptional;
@property (nonatomic, assign) IBInspectable BOOL canSelect;
@property (nonatomic, assign) IBInspectable BOOL canSelectAndPaste;

@property (nonatomic, assign) CGFloat labelPaddingStart;
@property (nonatomic, assign) CGFloat messageMarginTop;

- (void) setLabelText: (NSString*) text;
- (void) setIsOptional:(BOOL) isOptional;
- (NSString*) clearText;
- (void) showRequiredError;
- (void) showInvalidError;
- (void) showError: (NSString*) error;
- (void) hideError;
- (void) showMessage: (NSAttributedString*) message;
- (void) hideMessage;
- (void) showLoading;
- (void) hideLoading;

- (void) hideCheckmark;
- (void) showCheckmark;

@end

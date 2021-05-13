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

- (void) setLabelText: (NSString*) text;
- (void) setIsOptional:(BOOL) isOptional;
- (void) showRequiredError;
- (void) showInvalidError;
- (void) showError: (NSString*) error;
- (void) hideError;
- (void) showLoading;
- (void) hideLoading;

@end

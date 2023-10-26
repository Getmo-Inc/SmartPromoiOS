//
//  JMMaskTextField.h
//  JMMaskTextField
//
//  Created by Jota Melo on 02/01/17.
//  Copyright © 2017 Jota. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "JMStringMask.h"

IB_DESIGNABLE
@interface JMMaskTextField : UITextField

@property (strong, nonatomic) IBInspectable NSString *maskString;
@property (nonatomic) IBInspectable BOOL isMoney;
@property (strong, nonatomic) IBInspectable NSString *currencyCode;

@property (strong, nonatomic, readonly) JMStringMask *mask;
@property (readonly, nonatomic) NSString *unmaskedText;

- (void)textFieldDidBeginEditing:(UITextField *)textField;
- (void)textFieldDidEndEditing:(UITextField *)textField;

- (BOOL)textField:(UITextField *)textField shouldChangeCharactersInRange:(NSRange)range replacementString:(NSString *)string;

@end

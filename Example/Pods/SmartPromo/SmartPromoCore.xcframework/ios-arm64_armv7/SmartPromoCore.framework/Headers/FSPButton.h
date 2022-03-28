//
//  FSPButton.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>

@interface FSPButton : UIButton

@property (nonatomic, assign) IBInspectable BOOL verticalIcon;
@property (nonatomic, assign) IBInspectable BOOL shadowed;

- (void) applyShadow;

@end

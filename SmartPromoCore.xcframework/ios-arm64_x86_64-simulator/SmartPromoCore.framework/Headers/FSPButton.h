//
//  FSPButton.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>

@interface FSPButtonText : UIButton

@property (nonatomic, assign) IBInspectable BOOL verticalIcon;

+ (FSPButtonText*) instance;

@end


@interface FSPButton : FSPButtonText

@property (nonatomic, assign) IBInspectable BOOL shadowed;

- (void) applyShadow;

@end

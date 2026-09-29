//
//  UIColor+SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/29/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (SmartPromo)

+ (UIColor*) fspCurrentCampaignColor;
+ (void)setFspCurrentCampaignColor:(UIColor *)color;

+ (UIColor*) primaryColor;
+ (UIColor*) background;
+ (UIColor*) textPrimary;
+ (UIColor*) textSecondary;
+ (UIColor*) textTertiary;
+ (UIColor*) green;
+ (UIColor*) red;
+ (UIColor*) orange;
+ (UIColor*) divider;
+ (UIColor*) border;
+ (UIColor*) systemGroupedBackgroundColor;
+ (UIColor*) lineColor;
+ (UIColor*) shadowColor;
+ (UIColor*) receiptColor;
+ (UIColor *) colorFromHex:(NSString*) hexString;
@end

NS_ASSUME_NONNULL_END

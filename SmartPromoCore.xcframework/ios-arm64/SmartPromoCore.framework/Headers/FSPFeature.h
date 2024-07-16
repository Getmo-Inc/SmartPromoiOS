//
//  FSPFeature.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 06/27/23.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, FSPFeatureType)
{
    FSPFeatureTypeReceipt = 1,
    FSPFeatureTypeCoupon,
    FSPFeatureTypeGift,
    FSPFeatureTypeInstantPrize,
    FSPFeatureTypeCoin,
    FSPFeatureTypeStamp,
    FSPFeatureTypeWinner,
    FSPFeatureTypeChoose,
    FSPFeatureTypeAwards,
    FSPFeatureTypeSurvey
};

@interface FSPFeature : NSObject

@property NSString *identifier;
@property NSString *image;
@property NSString *headnote;
@property NSString *title;;
@property NSString *message;
@property NSAttributedString *messageAttributed;
@property NSString *url;
@property FSPFeatureType type;
@property int progress;
@property (nonatomic, assign) BOOL colored;
@property (nonatomic, assign) BOOL showIcon;

+ (FSPFeature*) fromDict:(NSDictionary*) dict;
- (UIImage *)typeIcon;

@end

//
//  FSPPrize.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 05/18/21.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, FSPPrizeType)
{
    FSPPrizeTypeGift = 0,
    FSPPrizeTypeInstant,
};


@interface FSPPrize : NSObject

@property NSString *qrcode;
@property NSString *qrcodeMessage;
@property NSString *message;
@property NSString *primaryAction;
@property NSArray *items;
@property int pending;

+ (FSPPrize*) fromDict:(NSDictionary*) dict;

@end


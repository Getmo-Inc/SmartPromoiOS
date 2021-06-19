//
//  FSPPrize.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 05/18/21.
//

#import <Foundation/Foundation.h>

@interface FSPPrize : NSObject

@property NSString *qrcode;
@property NSString *message;
@property NSString *primaryAction;
@property NSArray *items;
@property int pending;

+ (FSPPrize*) fromDict:(NSDictionary*) dict;

@end


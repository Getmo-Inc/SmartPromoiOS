//
//  FSPGifts.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 05/18/21.
//

#import <Foundation/Foundation.h>

@interface FSPGifts : NSObject

@property NSString *qrcode;
@property NSString *message;
@property NSArray *items;
@property (nonatomic, assign) BOOL hasPendingGifts;

+ (FSPGifts*) fromDict:(NSDictionary*) dict;

@end


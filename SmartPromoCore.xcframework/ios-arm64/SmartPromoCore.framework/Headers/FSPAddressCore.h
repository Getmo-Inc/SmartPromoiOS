//
//  FSPAddressCore.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <Foundation/Foundation.h>

@interface FSPAddressCore : NSObject

@property NSString *zipCode;
@property NSString *streetName;
@property NSString *streetNumber;
@property NSString *complement;
@property NSString *neighborhood;
@property NSString *city;
@property NSString *state;

+ (FSPAddressCore*) fromZipcodeDict:(NSDictionary*) dict;
+ (FSPAddressCore*) fromDict:(NSDictionary*) dict;
- (NSDictionary*) toDict;

+ (NSArray*) allStates;

@end


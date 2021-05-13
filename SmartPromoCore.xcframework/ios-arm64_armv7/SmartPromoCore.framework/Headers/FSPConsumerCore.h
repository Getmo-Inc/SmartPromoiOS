//
//  FSPConsumerCore.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <Foundation/Foundation.h>
#import "FSPAddressCore.h"
#import "FSPGenderTypeCore.h"

@interface FSPConsumerCore : NSObject

@property NSString *cpf;
@property NSString *name;
@property NSString *email;
@property NSString *phone;
@property FSPGenderTypeCore gender;
@property NSDate *birthday;
@property FSPAddressCore *address;

@property NSArray *receipts;
@property NSArray *coupons;
@property NSArray *infos;

@property BOOL ad;

- (NSString*) genderValue;

+ (FSPConsumerCore*) fromDict:(NSDictionary*) dict;
- (NSDictionary*) toDict;

@end


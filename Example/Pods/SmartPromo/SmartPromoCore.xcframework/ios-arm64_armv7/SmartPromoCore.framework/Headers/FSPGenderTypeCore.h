//
//  FSPGenderTypeCore.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/14/21.
//

#import <Foundation/Foundation.h>

typedef enum : NSInteger {
    FSPGenderTypeCoreNotInformed = 0,
    FSPGenderTypeCoreMale,
    FSPGenderTypeCoreFamale,
    FSPGenderTypeCoreNotBinary
    
} FSPGenderTypeCore;

@interface FSPGender : NSObject

+ (NSArray*) list;
+ (FSPGenderTypeCore) fromKey: (NSString*) key;
+ (NSString*) toKey: (FSPGenderTypeCore) gender;
+ (NSString*) toDescription: (FSPGenderTypeCore) gender;

@end

//
//  FSPConsumer.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <Foundation/Foundation.h>
#import "FSPAddress.h"

typedef enum : NSInteger {
    FSPGenderTypeNotInformed = 0,
    FSPGenderTypeMale,
    FSPGenderTypeFamale,
    FSPGenderTypeNotBinary
    
} FSPGenderType;

@interface FSPConsumer : NSObject

@property NSString *cpf;
@property NSString *name;
@property NSString *email;
@property NSString *phone;
@property FSPGenderType gender;
@property NSDate *birthday;
@property FSPAddress *address;

@end


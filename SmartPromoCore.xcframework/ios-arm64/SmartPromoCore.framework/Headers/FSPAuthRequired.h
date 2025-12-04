//
//  FSPAuthRequired.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 05/26/22.
//

#import <Foundation/Foundation.h>

@interface FSPAuthRequired : NSObject

@property NSString *title;
@property NSString *message;

+ (FSPAuthRequired*) fromDict:(NSDictionary*) dict;
    
@end

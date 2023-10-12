//
//  FSPFilter.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 07/18/24.
//

#import <Foundation/Foundation.h>
#import "FSPFilter.h"


@interface FSPFilter : NSObject

@property NSString *action;
@property NSString *titleOn;
@property NSString *titleOff;

+ (FSPFilter*) fromDict:(NSDictionary*) dict;

@end

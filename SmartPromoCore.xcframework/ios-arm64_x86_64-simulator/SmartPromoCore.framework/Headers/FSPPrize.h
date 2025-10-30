//
//  FSPPrize.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 05/18/21.
//

#import <Foundation/Foundation.h>
#import "FSPPrompt.h"
#import "FSPFilter.h"

@interface FSPPrize : NSObject

@property NSAttributedString *messageAttributed;
@property NSArray *items;
@property NSArray *chooseItems;
@property int pending;
@property FSPFilter* filter;

+ (FSPPrize*) fromDict:(NSDictionary*) dict;

@end

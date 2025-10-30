//
//  FSPRecommendSeller.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 03/10/24.
//

#import <Foundation/Foundation.h>

@interface FSPRecommendSeller : NSObject

@property NSString* action;
@property NSString* title;
@property NSString* message;
@property NSString* successMessage;
@property NSString* notFoundMessage;
@property NSString* errorMessage;
@property NSInteger codeLength;
@property BOOL primaryAction;
@property NSString* skipAction;

+ (FSPRecommendSeller*) fromDict:(NSDictionary*) dict;

@end

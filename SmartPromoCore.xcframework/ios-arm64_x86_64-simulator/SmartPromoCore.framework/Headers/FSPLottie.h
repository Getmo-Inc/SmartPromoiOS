//
//  FSPLottie.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/03/23.
//

#import <Foundation/Foundation.h>

@interface FSPLottie : NSObject

@property NSString* name;
@property NSString* json;
@property CGFloat size;
@property CGFloat marginTop;
@property int speed;
@property BOOL loop;
@property FSPLottie* backLottie;
@property BOOL afterBody;

+ (FSPLottie*) fromDict:(NSDictionary*) dict;
- (NSDictionary*) jsonDict;

@end

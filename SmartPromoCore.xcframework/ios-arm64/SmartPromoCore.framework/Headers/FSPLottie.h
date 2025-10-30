//
//  FSPLottie.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/03/23.
//

#import <Foundation/Foundation.h>

@interface FSPLottie : NSObject

@property NSString* identifier;
@property NSString* name;
@property NSString* json;
@property CGFloat size;
@property CGFloat marginTop;
@property int speed;
@property BOOL loop;
@property FSPLottie* backLottie;

+ (FSPLottie*) initWithName: (NSString*) name;
+ (FSPLottie*) fromDict:(NSDictionary*) dict;

@end

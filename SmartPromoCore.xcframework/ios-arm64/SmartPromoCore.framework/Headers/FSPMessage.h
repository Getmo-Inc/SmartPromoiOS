//
//  FSPMessage.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 09/30/21.
//

#import <Foundation/Foundation.h>

@interface FSPMessage : NSObject

@property NSString *title;
@property NSString *body;
@property NSString *primaryAction;
@property NSString *secondaryAction;

+ (FSPMessage*) fromDict:(NSDictionary*) dict;

@end

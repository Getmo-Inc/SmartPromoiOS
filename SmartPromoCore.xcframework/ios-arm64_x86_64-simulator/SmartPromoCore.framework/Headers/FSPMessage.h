//
//  FSPMessage.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 09/30/21.
//

#import <Foundation/Foundation.h>
#import "FSPLottie.h"

@interface FSPMessage : NSObject

@property NSString *title;
@property NSString *body;
@property FSPLottie *lottie;
@property NSString *primaryAction;
@property NSString *primaryActionTap;
@property NSString *secondaryAction;
@property NSString *secondaryActionTap;

+ (FSPMessage*) fromDict:(NSDictionary*) dict;

@end

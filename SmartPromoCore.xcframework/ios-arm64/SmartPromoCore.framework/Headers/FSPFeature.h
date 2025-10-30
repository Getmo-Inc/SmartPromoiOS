//
//  FSPFeature.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 06/27/23.
//

#import <UIKit/UIKit.h>

@interface FSPFeature : NSObject

@property NSString *image;
@property NSString *headnote;
@property NSString *title;
@property NSString *message;
@property NSAttributedString *messageAttributed;
@property NSString *url;
@property NSString *action;
@property int progress;
@property (nonatomic, assign) BOOL colored;
@property NSString *icon;

+ (FSPFeature*) fromDict:(NSDictionary*) dict;

@end

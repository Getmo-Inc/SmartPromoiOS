//
//  SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.1
//

#import <UIKit/UIKit.h>
#import "FSPConsumer.h"

@interface SmartPromo : NSObject

- (id)init:(NSString*)campaignID;

- (SmartPromo*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromo*) setColor:(UIColor*) color;
- (SmartPromo*) setConsumer:(FSPConsumer*) consumer;

- (void) go:(UIViewController *)above;

@end

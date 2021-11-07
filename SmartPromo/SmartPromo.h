//
//  SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//
//  1.6.0
//

#import <UIKit/UIKit.h>
#import <SmartPromo/FSPConsumer.h>

@interface SmartPromo : NSObject

- (id)init:(NSString*)campaignID;

- (SmartPromo*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromo*) setColor:(UIColor*) color;
- (SmartPromo*) setConsumer:(FSPConsumer*) consumer;

- (void) go:(UIViewController *)above;

@end

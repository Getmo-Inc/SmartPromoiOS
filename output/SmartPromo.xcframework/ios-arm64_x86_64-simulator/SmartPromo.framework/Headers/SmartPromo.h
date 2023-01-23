//
//  SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//
//  1.12
//

#import <UIKit/UIKit.h>
#import <SmartPromo/FSPConsumer.h>

@interface SmartPromo : NSObject

- (id)init:(NSString*)campaignID;

- (SmartPromo*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromo*) setColor:(UIColor*) color;
- (SmartPromo*) setConsumer:(FSPConsumer*) consumer;
- (SmartPromo*) setIsHomolog:(BOOL) isHomolog;

- (void) go:(UIViewController *)above;
- (UIViewController*) goOnDismiss: (dispatch_block_t) onDismiss;
- (void) scanWithConsumerID: (NSString*) consumerID above: (UIViewController *)above;

@end

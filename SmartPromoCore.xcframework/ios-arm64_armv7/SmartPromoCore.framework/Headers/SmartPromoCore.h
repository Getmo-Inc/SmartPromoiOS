//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  0.1 (1)
//

#import <UIKit/UIKit.h>

#import <SmartPromoCore/FSPConsumerCore.h>

@interface SmartPromoCore : NSObject

- (id)init:(NSString*)campaignID;

- (SmartPromoCore*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromoCore*) setColor:(UIColor*) color;
- (SmartPromoCore*) setConsumer:(FSPConsumerCore*) consumer;
- (SmartPromoCore*) setMockStatus:(NSUInteger) status;

- (void) go:(UIViewController *)above;
- (UIViewController*) goWithOnDismiss: (dispatch_block_t) onDismiss;

@end

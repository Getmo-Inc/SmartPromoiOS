//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  0.5 (1)
//

#import <UIKit/UIKit.h>

#import "FSPConsumerCore.h"
#import "FSPDataFormViewController.h"

@interface SmartPromoCore : NSObject

- (id)init:(NSString*)campaignID;

- (SmartPromoCore*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromoCore*) setColor:(UIColor*) color;
- (SmartPromoCore*) setConsumer:(FSPConsumerCore*) consumer;

- (void) go:(UIViewController *)above;
- (UIViewController*) goWithOnDismiss: (dispatch_block_t) onDismiss;

@end

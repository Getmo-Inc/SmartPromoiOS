//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  1.9
//

#import <UIKit/UIKit.h>

#import "FSPConsumerCore.h"
#import "FSPDataFormViewController.h"
#import "FSPMessageViewController.h"
#import "FSPBottomSheetViewController.h"

@interface SmartPromoCore : NSObject

- (id)init:(NSString*)campaignID;

- (SmartPromoCore*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromoCore*) setColor:(UIColor*) color;
- (SmartPromoCore*) setConsumer:(FSPConsumerCore*) consumer;
- (SmartPromoCore*) setHomologMode: (BOOL) isHomolog;

- (void) go:(UIViewController *)above;
- (UIViewController*) goWithOnDismiss: (dispatch_block_t) onDismiss;

- (void) scanWithConsumerID: (NSString*) consumerID above: (UIViewController *)above;
- (UIViewController*) scanWithConsumerID: (NSString*) consumerID onDismiss: (dispatch_block_t) onDismiss;

@end

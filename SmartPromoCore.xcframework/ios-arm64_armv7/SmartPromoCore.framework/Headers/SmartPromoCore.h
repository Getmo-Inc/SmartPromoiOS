//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  1.5.0
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

- (void) go:(UIViewController *)above;
- (UIViewController*) goWithOnDismiss: (dispatch_block_t) onDismiss;

@end

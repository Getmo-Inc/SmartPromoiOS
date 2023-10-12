//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  2.0
//

#import <UIKit/UIKit.h>

#import "FSPConsumerCore.h"
#import "FSPDataFormViewController.h"
#import "FSPBottomSheetViewController.h"

@interface SmartPromoCore : NSObject

- (id)init;
- (id)init:(NSString*)campaignID;

- (SmartPromoCore*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromoCore*) setColor:(UIColor*) color;
- (SmartPromoCore*) setConsumer:(FSPConsumerCore*) consumer;
- (SmartPromoCore*) setHomologMode: (BOOL) isHomolog;


- (UIViewController*) goMultiCampaignsHeadnote: (NSString*) headnote
                            title: (NSString*) title
                          message: (NSString*) message;

- (void) go:(UIViewController *)above;
- (void) goWithCampaignID:(NSString*) campaignID above: (UIViewController *) above;

- (void) scanWithConsumerID: (NSString*) consumerID above: (UIViewController *)above;
- (void) scanWithCampaignID: (NSString*) campaignID above: (UIViewController *)above;

@end

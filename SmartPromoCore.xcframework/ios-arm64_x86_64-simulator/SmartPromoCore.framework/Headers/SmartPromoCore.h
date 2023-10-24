//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  2.0.0
//

#import <UIKit/UIKit.h>

#import "FSPConsumerCore.h"
#import "FSPDataFormViewController.h"
#import "FSPBottomSheetViewController.h"
#import "FSPMultiCampaignViewController.h"
#import "FSPWebService.h"

@interface SmartPromoCore : NSObject

- (SmartPromoCore*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromoCore*) setColor:(UIColor*) color;
- (SmartPromoCore*) setConsumer:(FSPConsumerCore*) consumer;
- (SmartPromoCore*) setHomologMode: (BOOL) isHomolog;
- (SmartPromoCore*) setMetadata: (NSString*) metadata;

- (void) go: (NSString*) campaignID above: (UIViewController *) above;
- (UIViewController*) goMultiCampaignsHeadnote: (NSString*) headnote
                                         title: (NSString*) title
                                       message: (NSString*) message;

- (void) scan: (NSString*)campaignID consumerID: (NSString*) consumerID above: (UIViewController *) above;

@end

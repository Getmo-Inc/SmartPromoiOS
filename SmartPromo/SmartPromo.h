//
//  SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//
//  2.0.0
//

#import <UIKit/UIKit.h>
#import <SmartPromo/FSPConsumer.h>

@interface SmartPromo : NSObject

- (id)init:(NSString*)campaignID;

- (SmartPromo*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromo*) setColor:(UIColor*) color;
- (SmartPromo*) setConsumer:(FSPConsumer*) consumer;
- (SmartPromo*) setIsHomolog:(BOOL) isHomolog;
- (SmartPromo*) setMetadata: (NSString*) metadata;

- (UIViewController*) goMultiCampaignsHeadnote: (NSString*) headnote
                                         title: (NSString*) title
                                       message: (NSString*) message;

- (void) go:(UIViewController *)above;
- (void) goWithCampaignID:(NSString*) campaignID above: (UIViewController *) above;

- (void) scanWithConsumerID: (NSString*) consumerID above: (UIViewController *)above;
- (void) scanWithCampaignID: (NSString*) campaignID above: (UIViewController *)above;

@end

//
//  SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//
//  2.6.0
//

#import <UIKit/UIKit.h>
#import <SmartPromo/FSPConsumer.h>

@interface SmartPromo : NSObject

- (SmartPromo*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromo*) setColor:(UIColor*) color;
- (SmartPromo*) setConsumer:(FSPConsumer*) consumer;
- (SmartPromo*) setIsHomolog:(BOOL) isHomolog;
- (SmartPromo*) setMetadata: (NSString* _Nullable) metadata;

- (void) go: (NSString*) campaignID above: (UIViewController *) above;
- (UIViewController*) go: (NSString*) campaignID onDismiss: (dispatch_block_t) onDismiss;
- (UIViewController*) goMultiWithHeadnote: (NSString*) headnote
                                    title: (NSString*) title
                                  message: (NSString*) message;

- (void) scan: (NSString*)campaignID consumerID: (NSString*) consumerID above: (UIViewController *) above;

@end

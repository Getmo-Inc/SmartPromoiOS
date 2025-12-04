//
//  SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//
//  3.0.0
//

#import <UIKit/UIKit.h>
#import <SmartPromo/FSPConsumer.h>

extern NSString* const SmartPromoEventCampaignSelected;

@protocol SmartPromoDelegate<NSObject>

/// Dispatches an event with a name and an associated payload.
/// @param eventKey A unique identifier for the event.
/// @param values A dictionary containing event data. May be nil if no additional data is provided.
- (void)smartPromoDidReceiveEvent:(nonnull NSString *)eventKey
                          values:(nullable NSDictionary<NSString *, id> *)values;

@end

@interface SmartPromo : NSObject

@property (nonatomic, weak) id<SmartPromoDelegate> delegate;

- (SmartPromo*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromo*) setConsumer:(FSPConsumer*) consumer;
- (SmartPromo*) setHomologMode: (BOOL) isHomolog;
- (SmartPromo*) setMetadata: (NSString* _Nullable) metadata;
- (SmartPromo*) enableSwitchCampaignWithHeadnote: (NSString*) headnote
                                               title: (NSString*) title
                                             message: (NSString*) message;
    
- (void) go: (NSString*) campaignID above: (UIViewController *) above;
- (UIViewController*) go: (NSString*) campaignID onDismiss: (dispatch_block_t) onDismiss;
- (UIViewController*) goMultiWithHeadnote: (NSString*) headnote
                                    title: (NSString*) title
                                  message: (NSString*) message;

- (void) goSwitch: (UINavigationController *) above;

- (void) scan: (NSString*)campaignID consumerID: (NSString*) consumerID above: (UIViewController *) above;

@end

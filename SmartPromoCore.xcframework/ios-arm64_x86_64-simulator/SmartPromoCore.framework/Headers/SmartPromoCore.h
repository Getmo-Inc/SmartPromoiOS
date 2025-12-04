//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  3.0.0
//

#import <UIKit/UIKit.h>

#import "FSPConsumerCore.h"
#import "FSPMultiCampaignViewController.h"
#import "FSPWebService.h"

#import <SmartPromoCore/InternalSmartPromoCore.h>

extern NSString* const SmartPromoEventCampaignSelected;

@protocol SmartPromoDelegate<NSObject>

/// Dispatches an event with a name and an associated payload.
/// @param eventKey A unique identifier for the event.
/// @param values A dictionary containing event data. May be nil if no additional data is provided.
- (void)smartPromoDidReceiveEvent:(nonnull NSString *)eventKey
                          values:(nullable NSDictionary<NSString *, id> *)values;

@end

@interface SmartPromoCore : NSObject

@property (nonatomic, weak) id<SmartPromoDelegate> delegate;

@property BOOL isBoon;

- (SmartPromoCore*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey;

- (SmartPromoCore*) setConsumer:(FSPConsumerCore*) consumer;
- (SmartPromoCore*) setHomologMode: (BOOL) isHomolog;
- (SmartPromoCore*) setMetadata: (NSString* _Nullable) metadata;
- (SmartPromoCore*) enableSwitchCampaignWithHeadnote: (NSString*) headnote
                                               title: (NSString*) title
                                             message: (NSString*) message;
    
- (void) go: (NSString*) campaignID above: (UIViewController *) above;
- (UIViewController*) go: (NSString*) campaignID onDismiss: (dispatch_block_t) onDismiss;
- (UIViewController*) goMultiWithHeadnote: (NSString*) headnote
                                    title: (NSString*) title
                                  message: (NSString*) message;

- (void) goSwitch: (UINavigationController *) above;
- (void) goSwitch: (UINavigationController *) above currentCampaignId: (NSString*) currentCampaignId;

- (void) scan: (NSString*)campaignID consumerID: (NSString*) consumerID above: (UIViewController *) above;

@end

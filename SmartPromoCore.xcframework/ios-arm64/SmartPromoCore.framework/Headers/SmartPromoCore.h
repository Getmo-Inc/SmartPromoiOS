//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  3.0.0
//

#import <UIKit/UIKit.h>
#import "SmartPromoSharedAliases.h"
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

@interface SmartPromoCore : FSPSharedSmartPromo

@property (nonatomic, weak) id<SmartPromoDelegate> delegate;

- (SmartPromoCore*) setConsumer:(FSPConsumerCore*) consumer;
- (SmartPromoCore*) setMetadata: (NSString* _Nullable) metadata;
- (void) go: (NSString*) campaignId viewController: (UIViewController *) viewController;
- (void) goMultiWithHeadnote: (NSString*) headnote
                       title: (NSString*) title
                     message: (NSString*) message
              viewController: (UIViewController*) viewController;

- (void) goSwitch: (UINavigationController *) viewController;
- (void) goSwitch: (UINavigationController *) viewController currentCampaignId: (NSString*) currentCampaignId;

- (void) goScan: (NSString*) campaignId consumerId: (NSString*) consumerId viewController: (UIViewController *) viewController;

@end

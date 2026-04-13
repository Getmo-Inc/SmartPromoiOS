//
//  SmartPromoCore.h
//  SmartPromoCore
//
//  Created by Rodrigo Busata on 05/11/21.
//
//  3.0.1 (18)
//

#import <UIKit/UIKit.h>
#import <SmartPromoCore/SmartPromoSharedAliases.h>
#import <SmartPromoCore/FSPMultiCampaignViewController.h>
#import <SmartPromoCore/FSPWebService.h>
#import <SmartPromoCore/InternalSmartPromoCore.h>

extern NSString* _Nonnull const SmartPromoEventCampaignSelected;

@protocol SmartPromoDelegate<NSObject>

/// Dispatches an event with a name and an associated payload.
/// @param eventKey A unique identifier for the event.
/// @param values A dictionary containing event data. May be nil if no additional data is provided.
- (void)smartPromoDidReceiveEvent:(nonnull NSString *)eventKey
                          values:(nullable NSDictionary<NSString *, id> *)values;

@end

@interface SmartPromoCore : FSPSharedSmartPromo

@property (nonatomic, weak) id<SmartPromoDelegate> delegate;

- (nonnull SmartPromoCore*) setConsumer:(nullable FSPConsumerCore*) consumer;
- (nonnull SmartPromoCore*) setMetadata: (NSString* _Nullable) metadata;
- (void) go: (nonnull NSString*) campaignId viewController: (nonnull UIViewController *) viewController;
- (void) goMultiWithHeadnote: (nonnull NSString*) headnote
                       title: (nonnull NSString*) title
                     message: (nonnull NSString*) message
              viewController: (nonnull UIViewController*) viewController;

- (void) goSwitch: (nonnull UINavigationController *) viewController;
- (void) goSwitch: (nonnull UINavigationController *) viewController currentCampaignId: (nonnull NSString*) currentCampaignId;

- (void) goScan: (nonnull NSString*) campaignId consumerId: (nonnull NSString*) consumerId viewController: (nonnull UIViewController *) viewController;

@end

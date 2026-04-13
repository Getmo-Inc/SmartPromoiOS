//
//  SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//
//  3.0.1 (16)
//

#import <UIKit/UIKit.h>
#import <SmartPromo/FSPConsumer.h>

extern NSString* _Nonnull const SmartPromoEventCampaignSelected;

@protocol SmartPromoDelegate<NSObject>

/// Dispatches an event with a name and an associated payload.
/// @param eventKey A unique identifier for the event.
/// @param values A dictionary containing event data. May be nil if no additional data is provided.
- (void)smartPromoDidReceiveEvent:(nonnull NSString *)eventKey
                          values:(nullable NSDictionary<NSString *, id> *)values;

@end

@interface SmartPromo : NSObject

@property (nonatomic, weak) id<SmartPromoDelegate> delegate;

- (nonnull instancetype) initWithAccessKey: (nonnull NSString*) accessKey
                                 secretKey: (nonnull NSString*) secretKey
                                 isHomolog: (BOOL) isHomolog NS_DESIGNATED_INITIALIZER;
- (instancetype) init NS_UNAVAILABLE;

- (nonnull SmartPromo*) setConsumer:(nullable FSPConsumer*) consumer;
- (nonnull SmartPromo*) setMetadata: (NSString* _Nullable) metadata;
- (nonnull SmartPromo*) enableSwitchCampaignWithHeadnote: (nonnull NSString*) headnote
                                                    title: (nonnull NSString*) title
                                                  message: (nonnull NSString*) message;

- (void) go: (nonnull NSString*) campaignID viewController: (nonnull UIViewController *) viewController;
- (void) goMultiWithHeadnote: (nonnull NSString*) headnote
                        title: (nonnull NSString*) title
                      message: (nonnull NSString*) message
               viewController: (nonnull UIViewController*) viewController;

- (void) goSwitch: (nonnull UINavigationController *) viewController;
- (void) goSwitch: (nonnull UINavigationController *) viewController currentCampaignId: (nullable NSString*) currentCampaignId;

- (void) goScan: (nonnull NSString*) campaignID consumerId: (nullable NSString*) consumerId viewController: (nonnull UIViewController *) viewController;

@end

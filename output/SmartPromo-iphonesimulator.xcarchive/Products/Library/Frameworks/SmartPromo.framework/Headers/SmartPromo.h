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

- (nonnull instancetype) initWithAccessKey: (nonnull NSString*) accessKey
                                 secretKey: (nonnull NSString*) secretKey
                                 isHomolog: (BOOL) isHomolog NS_DESIGNATED_INITIALIZER;

- (SmartPromo*) setConsumer:(FSPConsumer*) consumer;
- (SmartPromo*) setMetadata: (NSString* _Nullable) metadata;
- (SmartPromo*) enableSwitchCampaignWithHeadnote: (NSString*) headnote
                                               title: (NSString*) title
                                             message: (NSString*) message;
    
- (void) go: (NSString*) campaignID viewController: (UIViewController *) viewController;
- (void) goMultiWithHeadnote: (NSString*) headnote
                        title: (NSString*) title
                      message: (NSString*) message
               viewController: (UIViewController*) viewController;

- (void) goSwitch: (UINavigationController *) viewController;
- (void) goSwitch: (UINavigationController *) viewController currentCampaignId: (NSString*) currentCampaignId;

- (void) goScan: (NSString*) campaignID consumerId: (NSString*) consumerId viewController: (UIViewController *) viewController;

@end

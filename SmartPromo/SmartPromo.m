//
//  SmartPromo.m
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import "SmartPromo.h"
#import <SmartPromoCore/SmartPromoCore.h>

@interface SmartPromo ()

@property (nonatomic, strong) SmartPromoCore *smartPromoCore;

@end

@implementation SmartPromo

- (instancetype)init
{
    self = [super init];
    if (self) {
        _smartPromoCore = [SmartPromoCore new];
    }
    return self;
}

- (void)setDelegate:(id<SmartPromoDelegate>)delegate {
    _smartPromoCore.delegate = delegate;
}

- (SmartPromo*) setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey {
    [_smartPromoCore setupAccessKey: accessKey andSecretKey: secretKey];
    return self;
}

- (SmartPromo*) setConsumer:(FSPConsumer*) consumer {
    if (consumer) {
        FSPConsumerCore* consumerCore = [FSPConsumerCore new];
        consumerCore.cpf = consumer.cpf;
        consumerCore.name = consumer.name;
        consumerCore.email = consumer.email;
        consumerCore.phone = consumer.phone;
        consumerCore.birthday = consumer.birthday;
        
        if (consumer.gender) {
            consumerCore.gender = (int) consumer.gender;
        }
        
        if (consumer.address) {
            consumerCore.address = [FSPAddressCore new];
            consumerCore.address.zipCode = consumer.address.zipCode;
            consumerCore.address.streetName = consumer.address.streetName;
            consumerCore.address.streetNumber = consumer.address.streetNumber;
            consumerCore.address.complement = consumer.address.complement;
            consumerCore.address.neighborhood = consumer.address.neighborhood;
            consumerCore.address.city = consumer.address.city;
            consumerCore.address.state = consumer.address.state;
        }
        
        [_smartPromoCore setConsumer: consumerCore];
    }
    return self;
}

- (SmartPromo*) setIsHomolog: (BOOL) isHomolog {
    [_smartPromoCore setHomologMode: isHomolog];
    return self;
}

- (SmartPromo*) setMetadata: (NSString* _Nullable) metadata {
    [_smartPromoCore setMetadata: metadata];
    return self;
}

- (SmartPromo*) enableSwitchCampaignWithHeadnote: (NSString*) headnote
                                               title: (NSString*) title
                                             message: (NSString*) message {
    [_smartPromoCore enableSwitchCampaignWithHeadnote:headnote title:title message:message];
    return self;
}
    
- (void) go: (NSString*) campaignID above: (UIViewController *) above {
    [_smartPromoCore go:campaignID above:above];
}

- (UIViewController*) goMultiWithHeadnote: (NSString*) headnote
                                    title: (NSString*) title
                                  message: (NSString*) message {
    return [_smartPromoCore goMultiWithHeadnote:headnote title:title message:message];
}

- (void) goSwitch: (UINavigationController *) above {
    [_smartPromoCore goSwitch:above];
}

- (void) scan: (NSString*)campaignID consumerID: (NSString*) consumerID above: (UIViewController *) above {
    [_smartPromoCore scan:campaignID consumerID:consumerID above:above];
}

@end



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

- (id)init:(NSString*)campaignID {
    self = [super init];
    if(self) {
        _smartPromoCore = [[SmartPromoCore alloc] init: campaignID];
    }
    
    return self;
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _smartPromoCore = [SmartPromoCore new];
    }
    return self;
}

- (SmartPromo*)setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey {
    [_smartPromoCore setupAccessKey: accessKey andSecretKey: secretKey];
    return self;
}

- (SmartPromo*)setColor:(UIColor*) color {
    [_smartPromoCore setColor: color];
    return self;
}

- (SmartPromo*)setIsHomolog:(BOOL) isHomolog {
    [_smartPromoCore setHomologMode: isHomolog];
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


- (UIViewController*) goMultiCampaignsHeadnote: (NSString*) headnote
                                         title: (NSString*) title
                                       message: (NSString*) message {
    return [_smartPromoCore goMultiCampaignsHeadnote:headnote title:title message:message];
}

- (void) go:(UIViewController *)above {
    [_smartPromoCore go: above];
}

- (void) goWithCampaignID:(NSString*) campaignID above: (UIViewController *) above {
    [_smartPromoCore goWithCampaignID:campaignID above:above];
}

- (void) scanWithConsumerID: (NSString*) consumerID above: (UIViewController *)above {
    [_smartPromoCore scanWithConsumerID:consumerID above:above];
}

- (void) scanWithCampaignID: (NSString*) campaignID above: (UIViewController *)above {
    [_smartPromoCore scanWithCampaignID:campaignID above:above];
}

@end



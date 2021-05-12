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

- (SmartPromo*)setupAccessKey: (NSString*) accessKey andSecretKey: (NSString*) secretKey {
    [_smartPromoCore setupAccessKey: accessKey andSecretKey: secretKey];
    return self;
}

- (SmartPromo*)setColor:(UIColor*) color {
    [_smartPromoCore setColor: color];
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

- (void)go:(UIViewController *)above {
    [_smartPromoCore go:above];
}

@end



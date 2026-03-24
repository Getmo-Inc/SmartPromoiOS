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

- (instancetype) initWithAccessKey: (NSString*) accessKey
                         secretKey: (NSString*) secretKey
                         isHomolog: (BOOL) isHomolog
{
    self = [super init];
    if (self) {
        _smartPromoCore = [[SmartPromoCore alloc] initWithAccessKey:accessKey secretKey:secretKey isHomolog:isHomolog];
    }
    return self;
}

- (void)setDelegate:(id<SmartPromoDelegate>)delegate {
    _smartPromoCore.delegate = delegate;
}

- (SmartPromo*) setConsumer:(FSPConsumer*) consumer {
    if (consumer) {
        SPSFSPConsumerCore* consumerCore = [SPSFSPConsumerCore new];
        consumerCore.cpf = consumer.cpf;
        consumerCore.name = consumer.name;
        consumerCore.email = consumer.email;
        consumerCore.phone = consumer.phone;

        if (consumer.birthday) {
            NSDateFormatter *formatter = [[NSDateFormatter alloc] init];
            formatter.dateFormat = @"yyyy-MM-dd";
            formatter.timeZone = [NSTimeZone timeZoneWithName:@"UTC"];
            consumerCore.bdate = [formatter stringFromDate:consumer.birthday];
        }

        FSPGenre *genre = nil;
        switch (consumer.gender) {
            case FSPGenderTypeMale:      genre = SPSFSPGenre.male; break;
            case FSPGenderTypeFamale:    genre = SPSFSPGenre.female; break;
            case FSPGenderTypeNotBinary: genre = SPSFSPGenre.notBinary; break;
            default:                     genre = SPSFSPGenre.notInformed; break;
        }
        consumerCore.genre = genre;
        
        if (consumer.address) {
            consumerCore.address = [SPSFSPAddress new];
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

- (SmartPromo*) setMetadata: (NSString* _Nullable) metadata {
    [_smartPromoCore setMetadata: metadata];
    return self;
}

- (SmartPromo*) enableSwitchCampaignWithHeadnote: (NSString*) headnote
                                               title: (NSString*) title
                                             message: (NSString*) message {
    [_smartPromoCore enableSwitchCampaignHeadnote:headnote title:title message:message];
    return self;
}
    
- (void) go: (NSString*) campaignID viewController: (UIViewController *) viewController {
    [_smartPromoCore go:campaignID viewController:viewController];
}

- (void) goMultiWithHeadnote: (NSString*) headnote
                        title: (NSString*) title
                      message: (NSString*) message
               viewController: (UIViewController*) viewController {
    [_smartPromoCore goMultiWithHeadnote:headnote title:title message:message viewController:viewController];
}

- (void) goSwitch: (UINavigationController *) viewController {
    [_smartPromoCore goSwitch:viewController];
}

- (void) goSwitch: (UINavigationController *) viewController currentCampaignId: (NSString*) currentCampaignId {
    [_smartPromoCore goSwitch:viewController currentCampaignId:currentCampaignId];
}

- (void) goScan: (NSString*) campaignID consumerId: (NSString*) consumerId viewController: (UIViewController *) viewController {
    [_smartPromoCore goScan:campaignID consumerId:consumerId viewController:viewController];
}

@end



//
//  FSPMultiCampaign.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 09/07/23.
//

#import "FSPFeatureViewController.h"

@interface FSPMultiCampaignViewController : FSPFeatureViewController

@property id smartPromo;
@property NSString* currentCampaignId;

- (id) initWithFeature: (FSPFeature*) feature smartPromo: (id) smartPromo;

@end


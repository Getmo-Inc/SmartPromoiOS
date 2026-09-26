//
//  FSPFeatureViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 07/03/23.
//

#import <UIKit/UIKit.h>
#import <SmartPromoCore/FSPPromptCoordinator.h>
#import <SmartPromoCore/SmartPromoSharedAliases.h>

@class FSPFeatureHeaderView;

@interface FSPFeatureViewController : FSPBaseViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (strong, nonatomic) UICollectionView *collectionView;
@property (strong, nonatomic, readonly) FSPFeatureHeaderView *featureHeaderView;

@property NSArray* filteredItems;

@property (strong, nonatomic) FSPPromptCoordinator* promptCoordinator;

@property NSString* searchQuery;

- (id) initWithFeature: (FSPFeature*) feature;

- (FSPCampaignContext*) campaignContext;
- (id<SPSFSPCampaignService>) campaignService;

- (FSPFeature*) feature;

- (NSAttributedString *) message;
- (NSArray*) items;
- (void) setupHeader;
- (void) setupViews;

- (UICollectionLayoutListAppearance) listAppearance;
- (UICollectionLayoutListConfiguration*) listConfiguration: (NSInteger) section;
- (NSCollectionLayoutSection*) layoutSection: (NSInteger) section environment: (id<NSCollectionLayoutEnvironment>) environment;
- (BOOL) canSelect: (NSIndexPath*) indexPath;
- (void) updateItems;
- (void) refresh;
- (void) handleResponse: (BOOL) success;
- (void) updateActionButton;
- (FSPConfigViewState*) viewConfig;
@end

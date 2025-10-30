//
//  FSPFeatureViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 07/03/23.
//

#import <UIKit/UIKit.h>
#import "FSPFormViewController.h"
#import "FSPFeature.h"
#import "FSPFilter.h"
#import "FSPConfig.h"
#import "FSPPromptCoordinator.h"

@interface FSPFeatureViewController : FSPFormViewController

@property (strong, nonatomic) UITableView *tableView;

@property (strong, nonatomic) id campaignService;
@property NSArray* filteredItems;

@property (strong, nonatomic) FSPPromptCoordinator* promptCoordinator;

@property NSString* searchQuery;

- (id) initWithFeature: (FSPFeature*) feature
       campaignService: (id) campaignService;

- (FSPFeature*) feature;

- (NSAttributedString *) message;
- (NSArray*) items;
- (FSPFilter*) filter;
- (void) setupViews;
- (void) refresh;
- (void) handleResponse: (BOOL) success;
- (void) action:(id) sender;
- (void) updateActionButton;
- (FSPConfigViewState*) viewConfig;
@end

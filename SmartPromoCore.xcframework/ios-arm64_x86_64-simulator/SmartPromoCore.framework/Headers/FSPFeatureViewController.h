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

@interface FSPFeatureViewController : FSPFormViewController

@property (strong, nonatomic) FSPFeature *feature;
@property (strong, nonatomic) UITableView *tableView;

@property (strong, nonatomic) id campaignService;
@property NSArray* filteredItems;

@property (weak, nonatomic) IBOutlet UIView *actionButton;
@property (weak, nonatomic) IBOutlet UIImageView *actionButtonImage;
@property (weak, nonatomic) IBOutlet UILabel *actionButtonTitle;

@property NSString* searchQuery;

- (id) initWithFeature: (FSPFeature*) feature
       campaignService: (id) campaignService;

- (NSAttributedString *) message;
- (NSArray*) items;
- (FSPFilter*) filter;
- (void) setupViews;
- (void) refresh;
- (void) handleResponse: (BOOL) success;
- (void) action:(id) sender;
@end

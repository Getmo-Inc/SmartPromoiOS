//
//  FSPBaseViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>

@interface FSPBaseViewController : UIViewController

- (id)initXib:(NSString*) xibName;

- (void) showLoadingView: (BOOL) animated;
- (void) showLoadingViewOpacity: (BOOL) opaque animated: (BOOL) animated;
- (void) hideLoadingView;
- (void) addSwipeToClose;

- (void) setupRefreshControlIn: (UIScrollView*) scrollView;

- (void) showDefaultError;
- (void) showError: (NSString*) error;
- (void) showEmptyMessage: (NSString*) message;
- (void) actionErrorButton:(id) sender;

- (CGFloat) backdropMarginTop;
- (UIView*) backdropParentView;

@end


//
//  FSPBaseViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>
#import "FSPDispatchQueue+SmartPromo.h"

@interface FSPBaseViewController : UIViewController

- (id)initXib:(NSString*) xibName;

- (void) showLoadingView: (BOOL) animated;
- (void) showLoadingViewOpacity: (BOOL) opaque animated: (BOOL) animated;
- (void) hideLoadingView;
- (void) hideMessage;
- (void) hideMessage: (BOOL) animated;
- (void) addSwipeToClose;
- (BOOL) emptyAnimation;
- (void) showMessage: (NSString*) message withLottie: (NSString*) lottie andButtonTitle: (NSString*) buttonTitle;

- (void) setupRefreshControlIn: (UIScrollView*) scrollView;

- (void) showDefaultError;
- (void) showError: (NSString*) error;
- (void) showEmptyMessage: (NSString*) message;
- (void) actionErrorButton:(id) sender;

- (BOOL) backdropTopSafeArea;
- (CGFloat) backdropMarginTop;
- (UIView*) backdropParentView;
- (UIActivityIndicatorViewStyle) activityIndicatorStyle;
- (UIColor*) backdropColor;
- (UIEdgeInsets) safeAreaInsets;
- (BOOL) statusBarIconLight;

@end


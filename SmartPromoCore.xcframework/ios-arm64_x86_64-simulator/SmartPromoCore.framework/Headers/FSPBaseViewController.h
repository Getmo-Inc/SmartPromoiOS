//
//  FSPBaseViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>
#import <SmartPromoCore/FSPDispatchQueue+SmartPromo.h>
#import <SmartPromoCore/SmartPromoSharedAliases.h>
#import <SmartPromoCore/FSPThemed.h>

@interface FSPBaseViewController : UIViewController <FSPThemed>

@property (strong) UIButton* floatActionButton;

- (id)initXib:(NSString*) xibName;

- (UIColor*) fspCurrentColor;
- (UIColor*) fpsDefaultColor;

- (void) showLoadingView: (BOOL) animated;
- (void) showLoadingViewOpacity: (BOOL) opaque animated: (BOOL) animated;
- (void) hideLoadingView;
- (void) hideMessage;
- (void) hideMessage: (BOOL) animated;
- (void) addSwipeToClose;
- (void) showMessage: (NSString*) message withLottie: (NSString*) lottie andButtonTitle: (NSString*) buttonTitle;

- (void) setupRefreshControlIn: (UIScrollView*) scrollView;

- (void) showDefaultError;
- (void) showError: (NSString*) error;
- (void) showEmptyMessage: (NSString*) message;
- (void) actionErrorButton:(id) sender;

- (NSString*) emptyLottie;
- (NSString*) emptyButtonTitle;

- (BOOL) backdropTopSafeArea;
- (CGFloat) backdropMarginTop;
- (UIView*) backdropParentView;
- (UIActivityIndicatorViewStyle) activityIndicatorStyle;
- (UIColor*) backdropColor;
- (UIEdgeInsets) safeAreaInsets;
- (void) configureFloatButtonWithImage: (UIImage*) image title: (NSString*) title selector: (SEL) selector;
- (void) updateThemed;

@end


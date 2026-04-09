//
//  FSPButton.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>
#import <SmartPromoCore/FSPTextView.h>

typedef void (^FSPToggleButtonDidChange)(BOOL);

@interface UIButton (SmartPromo)

- (void) applyCloseConfiguration;
    
@end
    
// MARK: - FSPButtonText
@interface FSPButtonText : UIButton

@property (nonatomic, strong) id<FSPThemed> themed;
- (void) setupColor;

+ (FSPButtonText*) instance: (id<FSPThemed>) themed;

@end

// MARK: - FSPButton
@interface FSPButton : FSPButtonText

@property (nonatomic, assign) IBInspectable BOOL shadowed;
@property (nonatomic, assign) IBInspectable BOOL blured;
@property CGFloat horizontalPadding;
@property FSPToggleButtonDidChange didChange;

- (void) applyShadow;
+ (void) impact;

- (BOOL) on;
- (void) setOn:(BOOL)on;
- (void) setOn:(BOOL)on animated:(BOOL)animated;

@end


// MARK: - FSPWhiteLargeButton
@interface FSPWhiteLargeButton : FSPButton

@end

// MARK: - FSPToggleButton
@interface FSPToggleButton : FSPButton
@end

// MARK: - FSPCheckBox
typedef void (^FSPCheckBoxDidChange)(BOOL);

@interface FSPCheckBox : UIView

@property (nonatomic, strong) id<FSPThemed> themed;

@property (strong, nonatomic) FSPTextView *textView;

@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) UIImageView *imageViewOn;

@property FSPCheckBoxDidChange didChange;

- (BOOL) on;
- (void) setOn:(BOOL)on;
- (void) setOn:(BOOL)on animated:(BOOL)animated;

@end


// MARK: - FSPRadioButtonGroup
typedef void (^FSPRadioButtonGroupDidChange)(NSUInteger);

@interface FSPRadioButtonGroup : UIView

@property (nonatomic, strong) id<FSPThemed> themed;

@property (strong, nonatomic) NSArray<NSString*>* options;
@property FSPRadioButtonGroupDidChange didChange;

- (void) selectIndex: (NSUInteger) index;
- (void) selectIndex: (NSUInteger) index animated: (BOOL) animated;

@end

// MARK: - FSPSwitch
typedef void (^FSPSwitchDidChange)(BOOL);

@interface FSPSwitch : UIView

@property (nonatomic, strong) id<FSPThemed> themed;

@property (strong, nonatomic) FSPTextView *textView;
@property UISwitch* switchButton;

@property FSPSwitchDidChange didChange;

- (BOOL) on;
- (void) setOn:(BOOL)on;
- (void) setOn:(BOOL)on animated:(BOOL)animated;

@end

// MARK: - FSPToggleButtons
typedef void (^FSPToggleButtonsDidChange)(id, NSUInteger, BOOL);

@interface FSPToggleButtons : UIView

@property (nonatomic, strong) id<FSPThemed> themed;
@property UIStackView* stackView;

@property BOOL singleSelection;
@property (strong, nonatomic) NSArray<NSString*>* options;
@property FSPToggleButtonsDidChange didChange;

- (void) selectIndex: (NSUInteger) index;
- (void) selectIndex: (NSUInteger) index animated: (BOOL) animated;

@end

//
//  FSPButton.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 12/21/20.
//

#import <UIKit/UIKit.h>
#import "FSPTextView.h"

// MARK: - FSPButtonText
@interface FSPButtonText : UIButton

@property (nonatomic, assign) IBInspectable BOOL verticalIcon;

+ (FSPButtonText*) instance;

@end


// MARK: - FSPButton
@interface FSPButton : FSPButtonText

@property (nonatomic, assign) IBInspectable BOOL shadowed;
@property CGFloat horizontalPadding;

- (void) applyShadow;
+ (void) impact;

@end


// MARK: - FSPWhiteLargeButton
@interface FSPWhiteLargeButton : FSPButton

@end


// MARK: - FSPToggleButton
typedef void (^FSPToggleButtonDidChange)(BOOL);

@interface FSPToggleButton : FSPButton

@property FSPToggleButtonDidChange didChange;

- (BOOL) on;
- (void) setOn:(BOOL)on;
- (void) setOn:(BOOL)on animated:(BOOL)animated;

@end


// MARK: - FSPCheckBox
typedef void (^FSPCheckBoxDidChange)(BOOL);

@interface FSPCheckBox : UIView

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

@property (strong, nonatomic) NSArray<NSString*>* options;
@property FSPRadioButtonGroupDidChange didChange;

- (void) selectIndex: (NSUInteger) index;
- (void) selectIndex: (NSUInteger) index animated: (BOOL) animated;

@end

// MARK: - FSPSwitch
typedef void (^FSPSwitchDidChange)(BOOL);

@interface FSPSwitch : UIView

@property (strong, nonatomic) FSPTextView *textView;

@property FSPSwitchDidChange didChange;

- (BOOL) on;
- (void) setOn:(BOOL)on;
- (void) setOn:(BOOL)on animated:(BOOL)animated;

@end

// MARK: - FSPToggleButtons
typedef void (^FSPToggleButtonsDidChange)(id, NSUInteger, BOOL);

@interface FSPToggleButtons : UIView

@property UIStackView* stackView;

@property BOOL singleSelection;
@property (strong, nonatomic) NSArray<NSString*>* options;
@property FSPToggleButtonsDidChange didChange;

- (void) selectIndex: (NSUInteger) index;
- (void) selectIndex: (NSUInteger) index animated: (BOOL) animated;

@end

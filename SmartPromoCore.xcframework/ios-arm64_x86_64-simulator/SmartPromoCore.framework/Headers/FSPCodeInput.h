#import <UIKit/UIKit.h>
#import <SmartPromoCore/FSPTextField.h>
#import <SmartPromoCore/SmartPromoSharedAliases.h>

typedef void (^FSPCodeInputCompletion)(void);

IB_DESIGNABLE
@interface FSPCodeInput : UIView

@property (nonatomic, strong) id<FSPThemed> themed;

@property (nonatomic, strong) FSPTextField *textField;
@property FSPCodeInputCompletion onClear;

- (NSString*) input;

- (void) setupWithLength: (NSInteger) length completion: (FSPCodeInputCompletion) completion;

- (void) startLoading;
- (void) stopLoading;

- (void) setEnabled:(BOOL) enabled;

@end

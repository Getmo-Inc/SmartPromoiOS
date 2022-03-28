//
//  FSPDataFormViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 04/21/21.
//

#import <UIKit/UIKit.h>

#import "FSPFormViewController.h"
#import "FSPConsumerCore.h"

@interface FSPDataFormViewController : FSPFormViewController <UITextFieldDelegate>

@property (weak, nonatomic) IBOutlet UIStackView *stackView;

@property (nonatomic, strong) FSPConsumerCore *consumer;
@property (nonatomic, strong) NSArray *fields;

- (void) setupFields;

- (FSPTextField*) addTextField: (NSString*) label
                      withText: (NSString*) text
                        isMale:(BOOL)isMale
                      withMask: (JMStringMask*) mask
               andKeyboardType:(UIKeyboardType) type;

- (void) clear;
- (void) action;

@end


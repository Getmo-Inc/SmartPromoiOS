//
//  FSPPrompt.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 09/30/21.
//

#import <Foundation/Foundation.h>
#import "FSPLottie.h"

typedef NS_ENUM(NSInteger, FSPPromptContentType) {
    FSPPromptContentTypeTitle,
    FSPPromptContentTypeBody,
    FSPPromptContentTypeFooter,
    FSPPromptContentTypeImage,
    FSPPromptContentTypeLottie,
    FSPPromptContentTypeSpace,
    FSPPromptContentTypeDivider,
    FSPPromptContentTypeInput,
    FSPPromptContentTypePrimaryButton,
    FSPPromptContentTypeSecondaryButton
};

typedef NS_ENUM(NSInteger, FSPPromptContentAlignment) {
    FSPPromptContentAlignmentCenter,
    FSPPromptContentAlignmentLeft,
    FSPPromptContentAlignmentRight
};

typedef NS_ENUM(NSInteger, FSPPromptInputType) {
    FSPPromptInputTypeNumber,
    FSPPromptInputTypeNumberWithButtons,
    FSPPromptInputTypeText,
    FSPPromptInputTypeSingleVertical,
    FSPPromptInputTypeSingleHorizontal,
    FSPPromptInputTypeMultiVertical,
    FSPPromptInputTypeMultiHorizontal,
    FSPPromptInputTypeBoolean,
    FSPPromptInputTypeSlider,
};

typedef NS_ENUM(NSInteger, FSPPromptInputAdmission) {
    FSPPromptInputAdmissionAny,
    FSPPromptInputAdmissionMatch,
    FSPPromptInputAdmissionMatchOrEmpty
};

@interface FSPPromptInput : NSObject

@property (nonatomic, strong) NSString *mask;
@property (nonatomic, assign) FSPPromptInputType type;
@property (nonatomic, strong) NSArray<NSString *> *options;
@property (nonatomic, strong) NSArray<NSString *> *answer;
@property (nonatomic, assign) FSPPromptInputAdmission answerAdmission;
@property (nonatomic, strong) NSString *answerRegex;
@property (nonatomic, strong) NSString *image;
@property (nonatomic, strong) NSString *alternativeAction;

- (BOOL)answerMatches;
- (BOOL)isEmpty;
- (BOOL)answerAsBoolean;

@end

@interface FSPPromptContent : NSObject

@property (nonatomic, strong) NSString *value;
@property (nonatomic, assign) FSPPromptContentType type;
@property (nonatomic, assign) FSPPromptContentAlignment alignment;
@property (nonatomic, strong) FSPPromptInput *input;
@property (nonatomic, strong) NSString *action;

- (BOOL)isEqual:(id)object;
@end

@interface FSPPrompt : NSObject

@property (nonatomic, strong) NSString *identifier;
@property (nonatomic, assign) BOOL closable;
@property (nonatomic, strong) NSMutableArray<FSPPromptContent *> *content;

- (BOOL)isEqual:(id)object;
+ (FSPPrompt*) fromDict:(NSDictionary*)dict;
+ (FSPPrompt*)fromJson:(NSString*)json;
- (NSDictionary*) toDict;
@end

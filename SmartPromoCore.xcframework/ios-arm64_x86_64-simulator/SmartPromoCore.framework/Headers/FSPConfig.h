//
//  FSPConfig.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 09/30/21.
//

#import <UIKit/UIKit.h>
#import "FSPPrompt.h"
#import "FSPLottie.h"
#import "FSPRecommendSeller.h"

@class FSPConfigMessages;
@class FSPConfigViews;
@class FSPConfigViewHome;
@class FSPConfigViewOptInId;
@class FSPConfigViewOptInAuth;
@class FSPConfigViewOptInForm;
@class FSPConfigViewReceiptConfirm;
@class FSPConfigViewReceipt;
@class FSPConfigViewState;
@class FSPConfigViewPrizes;
@class FSPConfigViewInstantPrizes;
@class FSPConfigViewReceipts;

@interface FSPConfig : NSObject

@property (nonatomic, assign) int maxPhotoSize;
@property (nonatomic, assign) int delayToWarning;
@property (nonatomic, assign) int delayToSentReceipt;
@property (nonatomic, assign) BOOL avoidMultiplePhotoWarningMessage;
@property (nonatomic, strong) FSPConfigMessages *messages;
@property (nonatomic, strong) FSPConfigViews *views;
@property (nonatomic, strong) NSArray<FSPLottie *> *lotties;

+ (FSPConfig *)fromDict:(NSDictionary *)dict;
+ (void)setGlobalConfig:(FSPConfig *)config;
+ (FSPConfig *)globalConfig;
- (FSPLottie *)lottieByID:(NSString *)identifier;

+ (BOOL)isRunningUITest;

@end

@interface FSPConfigMessages : NSObject

@property (nonatomic, strong) FSPPrompt *photoWarning;
@property (nonatomic, strong) FSPPrompt *invalidQrcode;
@property (nonatomic, strong) FSPPrompt *delayWarning;
@property (nonatomic, strong) FSPPrompt *receiptSent;
@property (nonatomic, strong) FSPPrompt *cameraPermissionDenied;
@property (nonatomic, strong) FSPPrompt *photoPermissionDenied;

@end

@interface FSPConfigViews : NSObject

@property (nonatomic, strong) FSPConfigViewHome *home;
@property (nonatomic, strong) FSPConfigViewOptInId *optInId;
@property (nonatomic, strong) FSPConfigViewOptInAuth *optInAuth;
@property (nonatomic, strong) FSPConfigViewOptInForm *optInForm;
@property (nonatomic, strong) FSPConfigViewReceiptConfirm *receiptConfirm;
@property (nonatomic, strong) FSPConfigViewReceipt *receipt;
@property (nonatomic, strong) FSPConfigViewPrizes *gifts;
@property (nonatomic, strong) FSPConfigViewPrizes *awards;
@property (nonatomic, strong) FSPConfigViewState *coupons;
@property (nonatomic, strong) FSPConfigViewInstantPrizes *instantPrizes;
@property (nonatomic, strong) FSPConfigViewReceipts *receipts;
@property (nonatomic, strong) FSPConfigViewState *statements;
@property (nonatomic, strong) FSPConfigViewState *winners;

@end

@interface FSPConfigViewHome : NSObject

@property (nonatomic, strong) NSString *customerName;
@property (nonatomic, strong) NSString *customerNameWhenEmpty;
@property (nonatomic, strong) NSString *optInRunningAction;
@property (nonatomic, strong) NSString *optInNotRunningAction;
@property (nonatomic, strong) NSString *termsAndContactText;
@property (nonatomic, strong) NSString *appStoreMessage;
@property (nonatomic, strong) NSString *floatActionCapture;
@property (nonatomic, strong) FSPPrompt *signOutMessage;
@property (nonatomic, assign) CGFloat largeCardAspectRatio;
@property (nonatomic, assign) CGFloat smallCardAspectRatio;

@end

@interface FSPConfigViewOptInId : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *action;

@end

@interface FSPConfigViewOptInAuth : NSObject

@property (nonatomic, strong) NSString *invalidToken;
@property (nonatomic, strong) NSString *actionSendToken;
@property (nonatomic, strong) NSString *actionResendToken;

@end

@interface FSPConfigViewOptInForm : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *action;

@end

@interface FSPConfigViewReceipt : NSObject

@property (nonatomic, strong) NSString *number;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *amount;

@end

@interface FSPConfigViewState : NSObject

@property (nonatomic, strong) NSString *emptyText;
@property (nonatomic, strong) NSString *searchEmptyText;
@property (nonatomic, strong) NSString *searchPlaceholder;
@property (nonatomic, strong) NSString *errorText;
@property (nonatomic, strong) NSString *emptyLottie;
@property (nonatomic, strong) NSString *reloadAction;

@end

@interface FSPConfigViewReceiptConfirm : NSObject

@property (nonatomic, strong) NSString *title;
@property (nonatomic, strong) NSString *loadingAction;
@property (nonatomic, strong) NSString *cancelAction;
@property (nonatomic, strong) NSString *sendAction;
@property (nonatomic, strong) NSString *backAction;
@property (nonatomic, strong) NSString *sendingAction;
@property (nonatomic, strong) NSString *readQrcodeMessage;
@property (nonatomic, strong) FSPRecommendSeller *recommendSeller;

@end

@interface FSPConfigViewPrizes : FSPConfigViewState

@property (nonatomic, strong) NSString *floatAction;

@end

@interface FSPConfigViewInstantPrizes : FSPConfigViewPrizes

@property (nonatomic, strong) NSString *messageActionAgain;
@property (nonatomic, strong) NSString *messageActionEnd;
@property (nonatomic, strong) NSString *messageActionClose;
@property (nonatomic, strong) NSString *messageCarousel;
@property (nonatomic, strong) NSString *messageScratch;

@end

@interface FSPConfigViewReceipts : FSPConfigViewState

@property (nonatomic, strong) NSString *receiptNumber;
@property (nonatomic, strong) NSString *seeReceipt;
@property (nonatomic, strong) NSString *receiptCopy;

@end

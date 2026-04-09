//
//  SmartPromoSharedAliases.h
//  SmartPromoCore
//
//  Type aliases mapping KMP-generated SPS-prefixed names to their original FSP names.
//  Import this file instead of individual ObjC model headers that have been migrated to KMP.
//

#import <SmartPromoShared/SmartPromoShared.h>

// Declares a +fromJson: class method for a KMP model class.
// Use FSP_PARSING_IMPL(ClassName) in SmartPromoSharedAliases.m to provide the implementation.
#define FSP_PARSING_INTERFACE(ClassName) \
    @interface ClassName (Parsing) \
    + (instancetype _Nullable)fromJson:(NSString * _Nullable)json; \
    - (NSDictionary * _Nullable)toDict; \
    @end

// MARK: - FSPSearchable / FSPFilterable

#define FSPSearchable SPSFSPSearchable
#define FSPFilterable SPSFSPFilterable

// MARK: - FSPJsonBridge

#define FSPJsonBridge SPSFSPJsonBridge

// MARK: - FSPPrompt

#define FSPPrompt                SPSFSPPrompt
FSP_PARSING_INTERFACE(SPSFSPPrompt)

@interface SPSFSPPromptContent (Convenience)
+ (nonnull instancetype)withValue:(NSString * _Nullable)value type:(nonnull SPSFSPPromptContentType *)type;
@end

@interface SPSFSPPrompt (New)
+ (nonnull instancetype)new;
@end
#define FSPPromptCompanion       SPSFSPPromptCompanion
#define FSPPromptContent         SPSFSPPromptContent
#define FSPPromptContentAlignment SPSFSPPromptContentAlignment
#define FSPPromptContentCompanion SPSFSPPromptContentCompanion
#define FSPPromptContentType     SPSFSPPromptContentType
#define FSPPromptInput           SPSFSPPromptInput
#define FSPPromptInputAdmission  SPSFSPPromptInputAdmission
#define FSPPromptInputCompanion  SPSFSPPromptInputCompanion
#define FSPPromptInputType       SPSFSPPromptInputType

// MARK: - FSPConsumerCore

#define FSPConsumerCore          SPSFSPConsumerCore
FSP_PARSING_INTERFACE(SPSFSPConsumerCore)

@interface SPSFSPConsumerCore (New)
+ (nonnull instancetype)new;
@end

// MARK: - FSPAddress

#define FSPAddress               SPSFSPAddress
FSP_PARSING_INTERFACE(SPSFSPAddress)

@interface SPSFSPAddress (New)
+ (nonnull instancetype)new;
@end

// MARK: - FSPFeature

#define FSPFeature               SPSFSPFeatureCard

@interface SPSFSPFeatureCard (Convenience)
+ (nonnull instancetype)withAction:(NSString * _Nullable)action
                          headnote:(NSString * _Nullable)headnote
                             title:(NSString * _Nullable)title
                           message:(NSString * _Nullable)message;
@end

#define FSPGenre                 SPSFSPGenre
#define FSPPrize                 SPSFSPPrize
#define FSPPrizeItem             SPSFSPPrizeItem
#define FSPFilter                SPSFSPFilter
#define FSPPrizeItemDetail       SPSFSPPrizeItemDetail
#define FSPPrizeItemDetailGroup  SPSFSPPrizeItemDetailFSPGroup
#define FSPPrizeStatus           SPSFSPrizeStatus

// MARK: - FSPLottie

#define FSPLottie                SPSFSPLottie
#define FSPLottieFeature         SPSFSPLottieFeature
FSP_PARSING_INTERFACE(SPSFSPLottie)

@interface SPSFSPLottie (InitWithName)
+ (nonnull instancetype)initWithName:(nonnull NSString *)name;
@end

// MARK: - FSPReceiptStatus

#define FSPReceiptStatus         SPSFSPReceiptStatus

// MARK: - FSPReceipt

#define FSPReceipt               SPSFSPReceipt
FSP_PARSING_INTERFACE(SPSFSPReceipt)

@interface SPSFSPReceipt (New)
+ (nonnull instancetype)new;
@end

// MARK: - FSPReceiptSection

#define FSPReceiptSection        SPSFSPReceiptSection
FSP_PARSING_INTERFACE(SPSFSPReceiptSection)

// MARK: - FSPStatementItem

#define FSPStatementItem         SPSFSPStatementItem
FSP_PARSING_INTERFACE(SPSFSPStatementItem)

// MARK: - FSPStatement

#define FSPStatement             SPSFSPStatement
FSP_PARSING_INTERFACE(SPSFSPStatement)

// MARK: - FSPInstantPrizeItem

#define FSPInstantPrizeItem      SPSFSPInstantPrizeItem
FSP_PARSING_INTERFACE(SPSFSPInstantPrizeItem)

// MARK: - FSPInstantPrize

#define FSPInstantPrize          SPSFSPInstantPrize
FSP_PARSING_INTERFACE(SPSFSPInstantPrize)

// MARK: - FSPLink

#define FSPLink                  SPSFSPLink
FSP_PARSING_INTERFACE(SPSFSPLink)

// MARK: - FSPAuthRequired

#define FSPAuthRequired          SPSFSPAuthRequired
FSP_PARSING_INTERFACE(SPSFSPAuthRequired)

// MARK: - FSPSeller

#define FSPSeller                SPSFSPSeller
FSP_PARSING_INTERFACE(SPSFSPSeller)

// MARK: - FSPCampaignContact

#define FSPCampaignContact       SPSFSPCampaignContact
FSP_PARSING_INTERFACE(SPSFSPCampaignContact)

// MARK: - FSPCampaignWinner

#define FSPCampaignWinner        SPSFSPCampaignWinner
FSP_PARSING_INTERFACE(SPSFSPCampaignWinner)

// MARK: - FSPSurvey

#define FSPSurvey                SPSFSPSurvey
#define FSPSurveyCompanion       SPSFSPSurveyCompanion
FSP_PARSING_INTERFACE(SPSFSPSurvey)

@interface SPSFSPSurvey (PromptsToDict)
- (nonnull NSArray<NSDictionary *> *)promptsToDict;
@end

// MARK: - FSPGenericItem

#define FSPGenericItem           SPSFSPGenericItem
#define FSPGenericItemCompanion  SPSFSPGenericItemCompanion
FSP_PARSING_INTERFACE(SPSFSPGenericItem)

// MARK: - FSPCampaignItem

#define FSPCampaignItem          SPSFSPCampaignItem
#define FSPCampaignItemCompanion SPSFSPCampaignItemCompanion
FSP_PARSING_INTERFACE(SPSFSPCampaignItem)

// MARK: - FSPCampaignStatus

#define FSPCampaignStatus        SPSFSPCampaignStatus

// MARK: - FSPCaptureMode

#define FSPCaptureMode           SPSFSPCaptureMode

// MARK: - FSPCaptureAction

#define FSPCaptureAction         SPSFSPCaptureAction

// MARK: - FSPInstantPrizeType

#define FSPInstantPrizeType      SPSFSPInstantPrizeType

// MARK: - FSPCampaign

#define FSPCampaign              SPSFSPCampaign
#define FSPCampaignCompanion     SPSFSPCampaignCompanion
FSP_PARSING_INTERFACE(SPSFSPCampaign)

// MARK: - FSPConfig

#define FSPConfig                          SPSFSPConfig
#define FSPConfigCompanion                 SPSFSPConfigCompanion
#define FSPConfigMessages                  SPSFSPConfigMessages
#define FSPConfigViews                     SPSFSPConfigViews
#define FSPConfigViewHome                  SPSFSPConfigViewsHome
#define FSPConfigViewOptInId               SPSFSPConfigViewsOptInId
#define FSPConfigViewOptInAuth             SPSFSPConfigViewsOptInAuth
#define FSPConfigViewOptInForm             SPSFSPConfigViewsOptInForm
#define FSPConfigViewReceiptConfirm        SPSFSPConfigViewsReceiptConfirm
#define FSPConfigViewReceipt               SPSFSPConfigViewsReceipt
#define FSPConfigViewState                 SPSFSPConfigViewsState
#define FSPConfigViewPrizes                SPSFSPConfigViewsPrizes
#define FSPConfigViewInstantPrizes         SPSFSPConfigViewsInstantPrizes
#define FSPConfigViewReceipts              SPSFSPConfigViewsReceipts
#define FSPRecommendSeller                 SPSFSPConfigViewsReceiptConfirmRecommendSeller

FSP_PARSING_INTERFACE(SPSFSPConfig)

@interface SPSFSPConfig (Migration)
+ (void)setGlobalConfig:(SPSFSPConfig * _Nullable)config;
+ (SPSFSPConfig * _Nullable)globalConfig;
+ (nonnull instancetype)new;
+ (BOOL)isRunningUITest;
@end

// MARK: - FSPSharedSmartPromo

#define FSPSharedSmartPromo      SPSFSPSharedSmartPromo
#define FSPSmartPromoListener    SPSSmartPromoListener

// MARK: - FSPStoreService

#define FSPStoreService          SPSFSPStoreService
#define FSPStoreKey              SPSFSPStoreKey

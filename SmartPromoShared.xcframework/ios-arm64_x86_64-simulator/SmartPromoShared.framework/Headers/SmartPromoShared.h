#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class NSDate, SPSFSPAddress, SPSFSPAddressCompanion, SPSFSPAuthRequired, SPSFSPAuthRequiredCompanion, SPSFSPCampaign, SPSFSPCampaignCompanion, SPSFSPCampaignContact, SPSFSPCampaignContactCompanion, SPSFSPCampaignItem, SPSFSPCampaignItemCompanion, SPSFSPCampaignResponse, SPSFSPCampaignResponseCompanion, SPSFSPCampaignStatus, SPSFSPCampaignWinner, SPSFSPCampaignWinnerCompanion, SPSFSPCaptureAction, SPSFSPCaptureMode, SPSFSPConfig, SPSFSPConfigCompanion, SPSFSPConfigMessages, SPSFSPConfigMessagesCompanion, SPSFSPConfigViews, SPSFSPConfigViewsCompanion, SPSFSPConfigViewsHome, SPSFSPConfigViewsHomeCompanion, SPSFSPConfigViewsInstantPrizes, SPSFSPConfigViewsInstantPrizesCompanion, SPSFSPConfigViewsOptInAuth, SPSFSPConfigViewsOptInAuthCompanion, SPSFSPConfigViewsOptInForm, SPSFSPConfigViewsOptInFormCompanion, SPSFSPConfigViewsOptInId, SPSFSPConfigViewsOptInIdCompanion, SPSFSPConfigViewsPrizes, SPSFSPConfigViewsPrizesCompanion, SPSFSPConfigViewsReceipt, SPSFSPConfigViewsReceiptCompanion, SPSFSPConfigViewsReceiptConfirm, SPSFSPConfigViewsReceiptConfirmCompanion, SPSFSPConfigViewsReceiptConfirmRecommendSeller, SPSFSPConfigViewsReceiptConfirmRecommendSellerCompanion, SPSFSPConfigViewsReceipts, SPSFSPConfigViewsReceiptsCompanion, SPSFSPConfigViewsState, SPSFSPConfigViewsStateCompanion, SPSFSPConsumerCore, SPSFSPConsumerCoreCompanion, SPSFSPConsumerFields, SPSFSPCryptoService, SPSFSPCryptoServiceShared, SPSFSPDateSerializer, SPSFSPErrorResponse, SPSFSPErrorResponseCompanion, SPSFSPFeatureCard, SPSFSPFeatureCardCompanion, SPSFSPFileDataPart, SPSFSPFilter, SPSFSPFilterCompanion, SPSFSPGenericItem, SPSFSPGenericItemCompanion, SPSFSPGenre, SPSFSPGenreCompanion, SPSFSPInstantPrize, SPSFSPInstantPrizeCompanion, SPSFSPInstantPrizeItem, SPSFSPInstantPrizeItemCompanion, SPSFSPInstantPrizeType, SPSFSPJsonBridge, SPSFSPLink, SPSFSPLinkCompanion, SPSFSPLogger, SPSFSPLoggerShared, SPSFSPLottie, SPSFSPLottieCompanion, SPSFSPLottieFeature, SPSFSPOptInResponse, SPSFSPOptInResponseCompanion, SPSFSPPaymentParameters, SPSFSPPaymentParametersCompanion, SPSFSPPrize, SPSFSPPrizeCompanion, SPSFSPPrizeItem, SPSFSPPrizeItemCompanion, SPSFSPPrizeItemDetail, SPSFSPPrizeItemDetailCompanion, SPSFSPPrizeItemDetailFSPGroup, SPSFSPPrizeItemDetailFSPGroupCompanion, SPSFSPPrompt, SPSFSPPromptCompanion, SPSFSPPromptContent, SPSFSPPromptContentAlignment, SPSFSPPromptContentCompanion, SPSFSPPromptContentType, SPSFSPPromptInput, SPSFSPPromptInputAdmission, SPSFSPPromptInputCompanion, SPSFSPPromptInputType, SPSFSPReceipt, SPSFSPReceiptCompanion, SPSFSPReceiptSection, SPSFSPReceiptSectionCompanion, SPSFSPReceiptStatus, SPSFSPResponse<T>, SPSFSPResponseFailed<T>, SPSFSPResponseSuccess<T>, SPSFSPSeller, SPSFSPSellerCompanion, SPSFSPServiceProvider, SPSFSPServiceProviderCompanion, SPSFSPSharedSmartPromo, SPSFSPSharedSmartPromoCompanion, SPSFSPSharedStoreService, SPSFSPSharedViewModel, SPSFSPStatement, SPSFSPStatementCompanion, SPSFSPStatementItem, SPSFSPStatementItemCompanion, SPSFSPStoreKey, SPSFSPStoreService, SPSFSPSurvey, SPSFSPSurveyCompanion, SPSFSPTokenResponse, SPSFSPTokenResponseCompanion, SPSFSPZipCodeAddress, SPSFSPZipCodeAddressCompanion, SPSFSPrizeStatus, SPSKotlinAbstractCoroutineContextElement, SPSKotlinAbstractCoroutineContextKey<B, E>, SPSKotlinArray<T>, SPSKotlinByteArray, SPSKotlinByteIterator, SPSKotlinCancellationException, SPSKotlinEnum<E>, SPSKotlinEnumCompanion, SPSKotlinException, SPSKotlinIllegalStateException, SPSKotlinKTypeProjection, SPSKotlinKTypeProjectionCompanion, SPSKotlinKVariance, SPSKotlinNothing, SPSKotlinRuntimeException, SPSKotlinThrowable, SPSKotlinUnit, SPSKotlinx_coroutines_coreCoroutineDispatcher, SPSKotlinx_coroutines_coreCoroutineDispatcherKey, SPSKotlinx_datetimeDayOfWeek, SPSKotlinx_datetimeDayOfWeekNames, SPSKotlinx_datetimeDayOfWeekNamesCompanion, SPSKotlinx_datetimeLocalDate, SPSKotlinx_datetimeLocalDateCompanion, SPSKotlinx_datetimeLocalDateProgression, SPSKotlinx_datetimeLocalDateProgressionCompanion, SPSKotlinx_datetimeLocalDateRange, SPSKotlinx_datetimeLocalDateRangeCompanion, SPSKotlinx_datetimeMonth, SPSKotlinx_datetimeMonthNames, SPSKotlinx_datetimeMonthNamesCompanion, SPSKotlinx_datetimePadding, SPSKotlinx_io_coreBuffer, SPSKotlinx_serialization_coreSerialKind, SPSKotlinx_serialization_coreSerializersModule, SPSKotlinx_serialization_jsonClassDiscriminatorMode, SPSKotlinx_serialization_jsonJson, SPSKotlinx_serialization_jsonJsonConfiguration, SPSKotlinx_serialization_jsonJsonDefault, SPSKotlinx_serialization_jsonJsonElement, SPSKotlinx_serialization_jsonJsonElementCompanion, SPSKtor_client_coreHttpClient, SPSKtor_client_coreHttpClientCall, SPSKtor_client_coreHttpClientCallCompanion, SPSKtor_client_coreHttpClientConfig<T>, SPSKtor_client_coreHttpClientEngineConfig, SPSKtor_client_coreHttpReceivePipeline, SPSKtor_client_coreHttpReceivePipelinePhases, SPSKtor_client_coreHttpRequestBuilder, SPSKtor_client_coreHttpRequestBuilderCompanion, SPSKtor_client_coreHttpRequestData, SPSKtor_client_coreHttpRequestPipeline, SPSKtor_client_coreHttpRequestPipelinePhases, SPSKtor_client_coreHttpResponse, SPSKtor_client_coreHttpResponseContainer, SPSKtor_client_coreHttpResponseData, SPSKtor_client_coreHttpResponsePipeline, SPSKtor_client_coreHttpResponsePipelinePhases, SPSKtor_client_coreHttpSendPipeline, SPSKtor_client_coreHttpSendPipelinePhases, SPSKtor_client_coreProxyConfig, SPSKtor_eventsEventDefinition<T>, SPSKtor_eventsEvents, SPSKtor_httpContentType, SPSKtor_httpContentTypeCompanion, SPSKtor_httpHeaderValueParam, SPSKtor_httpHeaderValueWithParameters, SPSKtor_httpHeaderValueWithParametersCompanion, SPSKtor_httpHeadersBuilder, SPSKtor_httpHttpMethod, SPSKtor_httpHttpMethodCompanion, SPSKtor_httpHttpProtocolVersion, SPSKtor_httpHttpProtocolVersionCompanion, SPSKtor_httpHttpStatusCode, SPSKtor_httpHttpStatusCodeCompanion, SPSKtor_httpOutgoingContent, SPSKtor_httpURLBuilder, SPSKtor_httpURLBuilderCompanion, SPSKtor_httpURLProtocol, SPSKtor_httpURLProtocolCompanion, SPSKtor_httpUrl, SPSKtor_httpUrlCompanion, SPSKtor_utilsAttributeKey<T>, SPSKtor_utilsGMTDate, SPSKtor_utilsGMTDateCompanion, SPSKtor_utilsMonth, SPSKtor_utilsMonthCompanion, SPSKtor_utilsPipeline<TSubject, TContext>, SPSKtor_utilsPipelinePhase, SPSKtor_utilsStringValuesBuilderImpl, SPSKtor_utilsTypeInfo, SPSKtor_utilsWeekDay, SPSKtor_utilsWeekDayCompanion, SPSSmartPromoEvents;

@protocol SPSFSPAPIService, SPSFSPAddressService, SPSFSPAuthService, SPSFSPCampaignService, SPSFSPConfigIPrizes, SPSFSPConfigIState, SPSFSPFilterable, SPSFSPReceiptService, SPSFSPSearchable, SPSKotlinAnnotation, SPSKotlinAppendable, SPSKotlinAutoCloseable, SPSKotlinClosedRange, SPSKotlinCollection, SPSKotlinComparable, SPSKotlinContinuation, SPSKotlinContinuationInterceptor, SPSKotlinCoroutineContext, SPSKotlinCoroutineContextElement, SPSKotlinCoroutineContextKey, SPSKotlinFunction, SPSKotlinIterable, SPSKotlinIterator, SPSKotlinKAnnotatedElement, SPSKotlinKClass, SPSKotlinKClassifier, SPSKotlinKDeclarationContainer, SPSKotlinKType, SPSKotlinMapEntry, SPSKotlinOpenEndRange, SPSKotlinSequence, SPSKotlinSuspendFunction2, SPSKotlinx_coroutines_coreChildHandle, SPSKotlinx_coroutines_coreChildJob, SPSKotlinx_coroutines_coreCoroutineScope, SPSKotlinx_coroutines_coreDisposableHandle, SPSKotlinx_coroutines_coreJob, SPSKotlinx_coroutines_coreParentJob, SPSKotlinx_coroutines_coreRunnable, SPSKotlinx_coroutines_coreSelectClause, SPSKotlinx_coroutines_coreSelectClause0, SPSKotlinx_coroutines_coreSelectInstance, SPSKotlinx_datetimeDateTimeFormat, SPSKotlinx_datetimeDateTimeFormatBuilder, SPSKotlinx_datetimeDateTimeFormatBuilderWithDate, SPSKotlinx_datetimeDateTimeFormatBuilderWithYearMonth, SPSKotlinx_io_coreRawSink, SPSKotlinx_io_coreRawSource, SPSKotlinx_io_coreSink, SPSKotlinx_io_coreSource, SPSKotlinx_serialization_coreCompositeDecoder, SPSKotlinx_serialization_coreCompositeEncoder, SPSKotlinx_serialization_coreDecoder, SPSKotlinx_serialization_coreDeserializationStrategy, SPSKotlinx_serialization_coreEncoder, SPSKotlinx_serialization_coreKSerializer, SPSKotlinx_serialization_coreSerialDescriptor, SPSKotlinx_serialization_coreSerialFormat, SPSKotlinx_serialization_coreSerializationStrategy, SPSKotlinx_serialization_coreSerializersModuleCollector, SPSKotlinx_serialization_coreStringFormat, SPSKotlinx_serialization_jsonJsonNamingStrategy, SPSKtor_client_coreHttpClientEngine, SPSKtor_client_coreHttpClientEngineCapability, SPSKtor_client_coreHttpClientPlugin, SPSKtor_client_coreHttpRequest, SPSKtor_httpHeaders, SPSKtor_httpHttpMessage, SPSKtor_httpHttpMessageBuilder, SPSKtor_httpParameters, SPSKtor_httpParametersBuilder, SPSKtor_ioByteReadChannel, SPSKtor_ioCloseable, SPSKtor_ioJvmSerializable, SPSKtor_utilsAttributes, SPSKtor_utilsStringValues, SPSKtor_utilsStringValuesBuilder, SPSSmartPromoListener;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SPSBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface SPSBase (SPSBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface SPSMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SPSMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorSPSKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface SPSNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface SPSByte : SPSNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface SPSUByte : SPSNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface SPSShort : SPSNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface SPSUShort : SPSNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface SPSInt : SPSNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface SPSUInt : SPSNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface SPSLong : SPSNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface SPSULong : SPSNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface SPSFloat : SPSNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface SPSDouble : SPSNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface SPSBoolean : SPSNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((swift_name("FSPSharedSmartPromo")))
@interface SPSFSPSharedSmartPromo : SPSBase
- (instancetype)initWithAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey isHomolog:(BOOL)isHomolog __attribute__((swift_name("init(accessKey:secretKey:isHomolog:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPSharedSmartPromoCompanion *companion __attribute__((swift_name("companion")));
- (void)enableSwitchCampaignHeadnote:(NSString *)headnote title:(NSString *)title message:(NSString *)message __attribute__((swift_name("enableSwitchCampaign(headnote:title:message:)")));
- (void)goCampaignId:(NSString *)campaignId context:(id)context __attribute__((swift_name("go(campaignId:context:)")));
- (void)goMultiHeadnote:(NSString *)headnote title:(NSString *)title message:(NSString *)message context:(id)context __attribute__((swift_name("goMulti(headnote:title:message:context:)")));
- (void)goScanCampaignId:(NSString *)campaignId consumerId:(NSString *)consumerId context:(id)context __attribute__((swift_name("goScan(campaignId:consumerId:context:)")));
- (void)goSwitchCurrentCampaignId:(NSString * _Nullable)currentCampaignId context:(id)context __attribute__((swift_name("goSwitch(currentCampaignId:context:)")));
- (void)performGoCampaignId:(NSString *)campaignId context:(id)context __attribute__((swift_name("performGo(campaignId:context:)")));
- (void)performGoMultiHeadnote:(NSString *)headnote title:(NSString *)title message:(NSString *)message currentCampaignId:(NSString * _Nullable)currentCampaignId context:(id)context __attribute__((swift_name("performGoMulti(headnote:title:message:currentCampaignId:context:)")));
- (void)performGoScanCampaignId:(NSString *)campaignId consumerId:(NSString *)consumerId context:(id)context __attribute__((swift_name("performGoScan(campaignId:consumerId:context:)")));
- (SPSFSPSharedSmartPromo *)setConsumerConsumer:(SPSFSPConsumerCore * _Nullable)consumer __attribute__((swift_name("setConsumer(consumer:)")));
- (SPSFSPSharedSmartPromo *)setMetadataMetadata:(NSString * _Nullable)metadata __attribute__((swift_name("setMetadata(metadata:)")));
@property (readonly) BOOL isBoon __attribute__((swift_name("isBoon")));
@property BOOL isSwitchCampaignEnabled __attribute__((swift_name("isSwitchCampaignEnabled")));
@property id<SPSSmartPromoListener> _Nullable listener __attribute__((swift_name("listener")));
@property (readonly) NSString * _Nullable metadata __attribute__((swift_name("metadata")));
@property (readonly) SPSFSPConsumerCore * _Nullable presetConsumer __attribute__((swift_name("presetConsumer")));
@property (readonly) SPSFSPServiceProvider *serviceProvider __attribute__((swift_name("serviceProvider")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPSharedSmartPromo.Companion")))
@interface SPSFSPSharedSmartPromoCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPSharedSmartPromoCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SPSFSPSharedSmartPromo *instance __attribute__((swift_name("instance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SmartPromoEvents")))
@interface SPSSmartPromoEvents : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)smartPromoEvents __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSSmartPromoEvents *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *CAMPAIGN_SELECTED __attribute__((swift_name("CAMPAIGN_SELECTED")));
@end

__attribute__((swift_name("SmartPromoListener")))
@protocol SPSSmartPromoListener
@required
- (void)didReceiveEventEventKey:(NSString *)eventKey values:(NSDictionary<NSString *, id> * _Nullable)values __attribute__((swift_name("didReceiveEvent(eventKey:values:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPAddress")))
@interface SPSFSPAddress : SPSBase
- (instancetype)initWithZipCode:(NSString * _Nullable)zipCode streetName:(NSString * _Nullable)streetName streetNumber:(NSString * _Nullable)streetNumber complement:(NSString * _Nullable)complement neighborhood:(NSString * _Nullable)neighborhood city:(NSString * _Nullable)city state:(NSString * _Nullable)state __attribute__((swift_name("init(zipCode:streetName:streetNumber:complement:neighborhood:city:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPAddressCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPAddress *)doCopyZipCode:(NSString * _Nullable)zipCode streetName:(NSString * _Nullable)streetName streetNumber:(NSString * _Nullable)streetNumber complement:(NSString * _Nullable)complement neighborhood:(NSString * _Nullable)neighborhood city:(NSString * _Nullable)city state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(zipCode:streetName:streetNumber:complement:neighborhood:city:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable city __attribute__((swift_name("city")));
@property NSString * _Nullable complement __attribute__((swift_name("complement")));
@property NSString * _Nullable neighborhood __attribute__((swift_name("neighborhood")));
@property NSString * _Nullable state __attribute__((swift_name("state")));
@property NSString * _Nullable streetName __attribute__((swift_name("streetName")));
@property NSString * _Nullable streetNumber __attribute__((swift_name("streetNumber")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="zipcode")
*/
@property NSString * _Nullable zipCode __attribute__((swift_name("zipCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPAddress.Companion")))
@interface SPSFSPAddressCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPAddressCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<NSString *> *)allStates __attribute__((swift_name("allStates()")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPAuthRequired")))
@interface SPSFSPAuthRequired : SPSBase
- (instancetype)initWithTitle:(NSString *)title message:(NSString *)message __attribute__((swift_name("init(title:message:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPAuthRequiredCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPAuthRequired *)doCopyTitle:(NSString *)title message:(NSString *)message __attribute__((swift_name("doCopy(title:message:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPAuthRequired.Companion")))
@interface SPSFSPAuthRequiredCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPAuthRequiredCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaign")))
@interface SPSFSPCampaign : SPSBase
- (instancetype)initWithId:(NSString *)id color:(NSString * _Nullable)color title:(NSString *)title subtitle:(NSString * _Nullable)subtitle description:(NSString * _Nullable)description endDate:(NSString * _Nullable)endDate captureMessage:(NSString * _Nullable)captureMessage rulesLinks:(NSArray<SPSFSPLink *> * _Nullable)rulesLinks uf:(NSString * _Nullable)uf status:(SPSFSPCampaignStatus *)status contact:(SPSFSPCampaignContact * _Nullable)contact consumerRequiredFields:(NSArray<NSString *> * _Nullable)consumerRequiredFields winners:(NSArray<SPSFSPCampaignWinner *> * _Nullable)winners captureMode:(SPSFSPCaptureMode *)captureMode captureAction:(SPSFSPCaptureAction *)captureAction surveys:(NSArray<SPSFSPSurvey *> * _Nullable)surveys blockMessage:(NSString * _Nullable)blockMessage recommendSeller:(BOOL)recommendSeller instantPrizeMode:(SPSFSPInstantPrizeType * _Nullable)instantPrizeMode homeAlertMessages:(NSArray<SPSFSPPrompt *> * _Nullable)homeAlertMessages __attribute__((swift_name("init(id:color:title:subtitle:description:endDate:captureMessage:rulesLinks:uf:status:contact:consumerRequiredFields:winners:captureMode:captureAction:surveys:blockMessage:recommendSeller:instantPrizeMode:homeAlertMessages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPCampaignCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPCampaign *)doCopyId:(NSString *)id color:(NSString * _Nullable)color title:(NSString *)title subtitle:(NSString * _Nullable)subtitle description:(NSString * _Nullable)description endDate:(NSString * _Nullable)endDate captureMessage:(NSString * _Nullable)captureMessage rulesLinks:(NSArray<SPSFSPLink *> * _Nullable)rulesLinks uf:(NSString * _Nullable)uf status:(SPSFSPCampaignStatus *)status contact:(SPSFSPCampaignContact * _Nullable)contact consumerRequiredFields:(NSArray<NSString *> * _Nullable)consumerRequiredFields winners:(NSArray<SPSFSPCampaignWinner *> * _Nullable)winners captureMode:(SPSFSPCaptureMode *)captureMode captureAction:(SPSFSPCaptureAction *)captureAction surveys:(NSArray<SPSFSPSurvey *> * _Nullable)surveys blockMessage:(NSString * _Nullable)blockMessage recommendSeller:(BOOL)recommendSeller instantPrizeMode:(SPSFSPInstantPrizeType * _Nullable)instantPrizeMode homeAlertMessages:(NSArray<SPSFSPPrompt *> * _Nullable)homeAlertMessages __attribute__((swift_name("doCopy(id:color:title:subtitle:description:endDate:captureMessage:rulesLinks:uf:status:contact:consumerRequiredFields:winners:captureMode:captureAction:surveys:blockMessage:recommendSeller:instantPrizeMode:homeAlertMessages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)requiredFields __attribute__((swift_name("requiredFields()")));
- (SPSFSPSurvey * _Nullable)signupSurvey __attribute__((swift_name("signupSurvey()")));
- (SPSFSPSurvey * _Nullable)surveyId:(NSString *)id __attribute__((swift_name("survey(id:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable banner __attribute__((swift_name("banner")));
@property (readonly) NSString * _Nullable blockMessage __attribute__((swift_name("blockMessage")));
@property (readonly) SPSFSPCaptureAction *captureAction __attribute__((swift_name("captureAction")));
@property (readonly) NSString * _Nullable captureMessage __attribute__((swift_name("captureMessage")));
@property (readonly) SPSFSPCaptureMode *captureMode __attribute__((swift_name("captureMode")));
@property NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) NSArray<NSString *> * _Nullable consumerRequiredFields __attribute__((swift_name("consumerRequiredFields")));
@property (readonly) SPSFSPCampaignContact * _Nullable contact __attribute__((swift_name("contact")));
@property (readonly) NSString * _Nullable description_ __attribute__((swift_name("description_")));
@property (readonly) NSString * _Nullable endDate __attribute__((swift_name("endDate")));
@property (readonly) NSArray<SPSFSPPrompt *> * _Nullable homeAlertMessages __attribute__((swift_name("homeAlertMessages")));
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) SPSFSPInstantPrizeType * _Nullable instantPrizeMode __attribute__((swift_name("instantPrizeMode")));
@property (readonly) BOOL recommendSeller __attribute__((swift_name("recommendSeller")));
@property (readonly) NSArray<SPSFSPLink *> * _Nullable rulesLinks __attribute__((swift_name("rulesLinks")));
@property SPSFSPCampaignStatus *status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSArray<SPSFSPSurvey *> * _Nullable surveys __attribute__((swift_name("surveys")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@property NSString * _Nullable uf __attribute__((swift_name("uf")));
@property (readonly) NSArray<SPSFSPCampaignWinner *> * _Nullable winners __attribute__((swift_name("winners")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaign.Companion")))
@interface SPSFSPCampaignCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPCampaignCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignContact")))
@interface SPSFSPCampaignContact : SPSBase
- (instancetype)initWithWhatsApp:(NSString * _Nullable)whatsApp whatsAppUrl:(NSString * _Nullable)whatsAppUrl phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email message:(NSString * _Nullable)message emailSubject:(NSString * _Nullable)emailSubject emailBody:(NSString * _Nullable)emailBody __attribute__((swift_name("init(whatsApp:whatsAppUrl:phone:email:message:emailSubject:emailBody:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPCampaignContactCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPCampaignContact *)doCopyWhatsApp:(NSString * _Nullable)whatsApp whatsAppUrl:(NSString * _Nullable)whatsAppUrl phone:(NSString * _Nullable)phone email:(NSString * _Nullable)email message:(NSString * _Nullable)message emailSubject:(NSString * _Nullable)emailSubject emailBody:(NSString * _Nullable)emailBody __attribute__((swift_name("doCopy(whatsApp:whatsAppUrl:phone:email:message:emailSubject:emailBody:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSString * _Nullable emailBody __attribute__((swift_name("emailBody")));
@property (readonly) NSString * _Nullable emailSubject __attribute__((swift_name("emailSubject")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property (readonly) NSString * _Nullable phone __attribute__((swift_name("phone")));
@property (readonly) NSString * _Nullable whatsApp __attribute__((swift_name("whatsApp")));
@property (readonly) NSString * _Nullable whatsAppUrl __attribute__((swift_name("whatsAppUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignContact.Companion")))
@interface SPSFSPCampaignContactCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPCampaignContactCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("FSPSearchable")))
@protocol SPSFSPSearchable
@required
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignItem")))
@interface SPSFSPCampaignItem : SPSBase <SPSFSPSearchable>
- (instancetype)initWithId:(NSString *)id customerName:(NSString *)customerName title:(NSString *)title endDate:(NSString *)endDate banner:(NSString * _Nullable)banner location:(NSString * _Nullable)location isOnlyScan:(BOOL)isOnlyScan __attribute__((swift_name("init(id:customerName:title:endDate:banner:location:isOnlyScan:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPCampaignItemCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPCampaignItem *)doCopyId:(NSString *)id customerName:(NSString *)customerName title:(NSString *)title endDate:(NSString *)endDate banner:(NSString * _Nullable)banner location:(NSString * _Nullable)location isOnlyScan:(BOOL)isOnlyScan __attribute__((swift_name("doCopy(id:customerName:title:endDate:banner:location:isOnlyScan:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable banner __attribute__((swift_name("banner")));
@property (readonly) NSString *customerName __attribute__((swift_name("customerName")));
@property (readonly) NSString *endDate __attribute__((swift_name("endDate")));
@property (readonly) NSString *id __attribute__((swift_name("id")));

/**
 * @note annotations
 *   kotlinx.serialization.Transient
*/
@property BOOL isFavorite __attribute__((swift_name("isFavorite")));
@property (readonly) BOOL isOnlyScan __attribute__((swift_name("isOnlyScan")));
@property (readonly) NSString * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignItem.Companion")))
@interface SPSFSPCampaignItemCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPCampaignItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignResponse")))
@interface SPSFSPCampaignResponse : SPSBase
- (instancetype)initWithCampaign:(SPSFSPCampaign *)campaign consumer:(SPSFSPConsumerCore * _Nullable)consumer errorMessage:(SPSFSPPrompt * _Nullable)errorMessage authRequired:(SPSFSPAuthRequired * _Nullable)authRequired __attribute__((swift_name("init(campaign:consumer:errorMessage:authRequired:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPCampaignResponseCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPCampaignResponse *)doCopyCampaign:(SPSFSPCampaign *)campaign consumer:(SPSFSPConsumerCore * _Nullable)consumer errorMessage:(SPSFSPPrompt * _Nullable)errorMessage authRequired:(SPSFSPAuthRequired * _Nullable)authRequired __attribute__((swift_name("doCopy(campaign:consumer:errorMessage:authRequired:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSFSPAuthRequired * _Nullable authRequired __attribute__((swift_name("authRequired")));
@property (readonly) SPSFSPCampaign *campaign __attribute__((swift_name("campaign")));
@property (readonly) SPSFSPConsumerCore * _Nullable consumer __attribute__((swift_name("consumer")));
@property (readonly) SPSFSPPrompt * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignResponse.Companion")))
@interface SPSFSPCampaignResponseCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPCampaignResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol SPSKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface SPSKotlinEnum<E> : SPSBase <SPSKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignStatus")))
@interface SPSFSPCampaignStatus : SPSKotlinEnum<SPSFSPCampaignStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPCampaignStatus *config __attribute__((swift_name("config")));
@property (class, readonly) SPSFSPCampaignStatus *running __attribute__((swift_name("running")));
@property (class, readonly) SPSFSPCampaignStatus *closed __attribute__((swift_name("closed")));
@property (class, readonly) SPSFSPCampaignStatus *finished __attribute__((swift_name("finished")));
+ (SPSKotlinArray<SPSFSPCampaignStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPCampaignStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignWinner")))
@interface SPSFSPCampaignWinner : SPSBase <SPSFSPSearchable>
- (instancetype)initWithTitle:(NSString *)title detail:(NSString * _Nullable)detail isCurrentConsumer:(BOOL)isCurrentConsumer __attribute__((swift_name("init(title:detail:isCurrentConsumer:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPCampaignWinnerCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPCampaignWinner *)doCopyTitle:(NSString *)title detail:(NSString * _Nullable)detail isCurrentConsumer:(BOOL)isCurrentConsumer __attribute__((swift_name("doCopy(title:detail:isCurrentConsumer:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable detail __attribute__((swift_name("detail")));
@property (readonly) BOOL isCurrentConsumer __attribute__((swift_name("isCurrentConsumer")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCampaignWinner.Companion")))
@interface SPSFSPCampaignWinnerCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPCampaignWinnerCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCaptureAction")))
@interface SPSFSPCaptureAction : SPSKotlinEnum<SPSFSPCaptureAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPCaptureAction *none __attribute__((swift_name("none")));
@property (class, readonly) SPSFSPCaptureAction *receipt __attribute__((swift_name("receipt")));
@property (class, readonly) SPSFSPCaptureAction *qrcode __attribute__((swift_name("qrcode")));
+ (SPSKotlinArray<SPSFSPCaptureAction *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPCaptureAction *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCaptureMode")))
@interface SPSFSPCaptureMode : SPSKotlinEnum<SPSFSPCaptureMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPCaptureMode *all __attribute__((swift_name("all")));
@property (class, readonly) SPSFSPCaptureMode *onlyPicture __attribute__((swift_name("onlyPicture")));
@property (class, readonly) SPSFSPCaptureMode *onlyQrcode __attribute__((swift_name("onlyQrcode")));
+ (SPSKotlinArray<SPSFSPCaptureMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPCaptureMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig")))
@interface SPSFSPConfig : SPSBase
- (instancetype)initWithMaxPhotoSize:(int32_t)maxPhotoSize delayToWarning:(int32_t)delayToWarning delayToSentReceipt:(int32_t)delayToSentReceipt avoidMultiplePhotoWarningMessage:(BOOL)avoidMultiplePhotoWarningMessage messages:(SPSFSPConfigMessages *)messages views:(SPSFSPConfigViews *)views lotties:(NSArray<SPSFSPLottie *> *)lotties __attribute__((swift_name("init(maxPhotoSize:delayToWarning:delayToSentReceipt:avoidMultiplePhotoWarningMessage:messages:views:lotties:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPLottie * _Nullable)lottieId:(NSString *)id __attribute__((swift_name("lottie(id:)")));
@property (readonly) BOOL avoidMultiplePhotoWarningMessage __attribute__((swift_name("avoidMultiplePhotoWarningMessage")));
@property (readonly) int32_t delayToSentReceipt __attribute__((swift_name("delayToSentReceipt")));
@property (readonly) int32_t delayToWarning __attribute__((swift_name("delayToWarning")));
@property NSArray<SPSFSPLottie *> *lotties __attribute__((swift_name("lotties")));
@property (readonly) int32_t maxPhotoSize __attribute__((swift_name("maxPhotoSize")));
@property (readonly) SPSFSPConfigMessages *messages __attribute__((swift_name("messages")));
@property (readonly) SPSFSPConfigViews *views __attribute__((swift_name("views")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.Companion")))
@interface SPSFSPConfigCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigCompanion *shared __attribute__((swift_name("shared")));
- (SPSFSPConfig * _Nullable)parseJson:(NSString *)json __attribute__((swift_name("parse(json:)")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property SPSFSPConfig * _Nullable globalConfig __attribute__((swift_name("globalConfig")));
@end

__attribute__((swift_name("FSPConfigIState")))
@protocol SPSFSPConfigIState
@required
@property (readonly) NSString *emptyLottie __attribute__((swift_name("emptyLottie")));
@property (readonly) NSString *emptyText __attribute__((swift_name("emptyText")));
@property (readonly) NSString *errorText __attribute__((swift_name("errorText")));
@property (readonly) NSString *reloadAction __attribute__((swift_name("reloadAction")));
@property (readonly) NSString *searchEmptyText __attribute__((swift_name("searchEmptyText")));
@property (readonly) NSString *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@end

__attribute__((swift_name("FSPConfigIPrizes")))
@protocol SPSFSPConfigIPrizes <SPSFSPConfigIState>
@required
@property (readonly) NSString * _Nullable floatAction __attribute__((swift_name("floatAction")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.Messages")))
@interface SPSFSPConfigMessages : SPSBase
- (instancetype)initWithPhotoWarning:(SPSFSPPrompt *)photoWarning invalidQrcode:(SPSFSPPrompt *)invalidQrcode delayWarning:(SPSFSPPrompt *)delayWarning receiptSent:(SPSFSPPrompt *)receiptSent cameraPermissionDenied:(SPSFSPPrompt *)cameraPermissionDenied __attribute__((swift_name("init(photoWarning:invalidQrcode:delayWarning:receiptSent:cameraPermissionDenied:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigMessagesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SPSFSPPrompt *cameraPermissionDenied __attribute__((swift_name("cameraPermissionDenied")));
@property (readonly) SPSFSPPrompt *delayWarning __attribute__((swift_name("delayWarning")));
@property (readonly) SPSFSPPrompt *invalidQrcode __attribute__((swift_name("invalidQrcode")));
@property (readonly) SPSFSPPrompt *photoWarning __attribute__((swift_name("photoWarning")));
@property (readonly) SPSFSPPrompt *receiptSent __attribute__((swift_name("receiptSent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.MessagesCompanion")))
@interface SPSFSPConfigMessagesCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigMessagesCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.Views")))
@interface SPSFSPConfigViews : SPSBase
- (instancetype)initWithHome:(SPSFSPConfigViewsHome *)home optInId:(SPSFSPConfigViewsOptInId *)optInId optInAuth:(SPSFSPConfigViewsOptInAuth *)optInAuth optInForm:(SPSFSPConfigViewsOptInForm *)optInForm receiptConfirm:(SPSFSPConfigViewsReceiptConfirm *)receiptConfirm receipt:(SPSFSPConfigViewsReceipt *)receipt gifts:(SPSFSPConfigViewsPrizes *)gifts awards:(SPSFSPConfigViewsPrizes *)awards coupons:(SPSFSPConfigViewsState *)coupons instantPrizes:(SPSFSPConfigViewsInstantPrizes *)instantPrizes receipts:(SPSFSPConfigViewsReceipts *)receipts statements:(SPSFSPConfigViewsState *)statements winners:(SPSFSPConfigViewsState *)winners __attribute__((swift_name("init(home:optInId:optInAuth:optInForm:receiptConfirm:receipt:gifts:awards:coupons:instantPrizes:receipts:statements:winners:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) SPSFSPConfigViewsPrizes *awards __attribute__((swift_name("awards")));
@property (readonly) SPSFSPConfigViewsState *coupons __attribute__((swift_name("coupons")));
@property (readonly) SPSFSPConfigViewsPrizes *gifts __attribute__((swift_name("gifts")));
@property (readonly) SPSFSPConfigViewsHome *home __attribute__((swift_name("home")));
@property (readonly) SPSFSPConfigViewsInstantPrizes *instantPrizes __attribute__((swift_name("instantPrizes")));
@property (readonly) SPSFSPConfigViewsOptInAuth *optInAuth __attribute__((swift_name("optInAuth")));
@property (readonly) SPSFSPConfigViewsOptInForm *optInForm __attribute__((swift_name("optInForm")));
@property (readonly) SPSFSPConfigViewsOptInId *optInId __attribute__((swift_name("optInId")));
@property (readonly) SPSFSPConfigViewsReceipt *receipt __attribute__((swift_name("receipt")));
@property (readonly) SPSFSPConfigViewsReceiptConfirm *receiptConfirm __attribute__((swift_name("receiptConfirm")));
@property (readonly) SPSFSPConfigViewsReceipts *receipts __attribute__((swift_name("receipts")));
@property (readonly) SPSFSPConfigViewsState *statements __attribute__((swift_name("statements")));
@property (readonly) SPSFSPConfigViewsState *winners __attribute__((swift_name("winners")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsCompanion")))
@interface SPSFSPConfigViewsCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsHome")))
@interface SPSFSPConfigViewsHome : SPSBase
- (instancetype)initWithCustomerName:(NSString *)customerName customerNameWhenEmpty:(NSString *)customerNameWhenEmpty optInRunningAction:(NSString *)optInRunningAction optInNotRunningAction:(NSString *)optInNotRunningAction termsAndContactText:(NSString *)termsAndContactText googlePlayMessage:(NSString *)googlePlayMessage appStoreMessage:(NSString *)appStoreMessage floatActionCapture:(NSString *)floatActionCapture largeCardAspectRatio:(SPSFloat * _Nullable)largeCardAspectRatio smallCardAspectRatio:(SPSFloat * _Nullable)smallCardAspectRatio signOutMessage:(SPSFSPPrompt *)signOutMessage __attribute__((swift_name("init(customerName:customerNameWhenEmpty:optInRunningAction:optInNotRunningAction:termsAndContactText:googlePlayMessage:appStoreMessage:floatActionCapture:largeCardAspectRatio:smallCardAspectRatio:signOutMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsHomeCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *appStoreMessage __attribute__((swift_name("appStoreMessage")));
@property (readonly) NSString *customerName __attribute__((swift_name("customerName")));
@property (readonly) NSString *customerNameWhenEmpty __attribute__((swift_name("customerNameWhenEmpty")));
@property (readonly) NSString *floatActionCapture __attribute__((swift_name("floatActionCapture")));
@property (readonly) NSString *googlePlayMessage __attribute__((swift_name("googlePlayMessage")));
@property (readonly) SPSFloat * _Nullable largeCardAspectRatio __attribute__((swift_name("largeCardAspectRatio")));
@property (readonly) NSString *optInNotRunningAction __attribute__((swift_name("optInNotRunningAction")));
@property (readonly) NSString *optInRunningAction __attribute__((swift_name("optInRunningAction")));
@property (readonly) SPSFSPPrompt *signOutMessage __attribute__((swift_name("signOutMessage")));
@property (readonly) SPSFloat * _Nullable smallCardAspectRatio __attribute__((swift_name("smallCardAspectRatio")));
@property (readonly) NSString *termsAndContactText __attribute__((swift_name("termsAndContactText")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsHomeCompanion")))
@interface SPSFSPConfigViewsHomeCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsHomeCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsInstantPrizes")))
@interface SPSFSPConfigViewsInstantPrizes : SPSBase <SPSFSPConfigIPrizes>
- (instancetype)initWithMessageActionAgain:(NSString *)messageActionAgain messageActionEnd:(NSString *)messageActionEnd messageActionClose:(NSString *)messageActionClose messageCarousel:(NSString *)messageCarousel messageScratch:(NSString *)messageScratch floatAction:(NSString * _Nullable)floatAction emptyText:(NSString *)emptyText searchPlaceholder:(NSString *)searchPlaceholder searchEmptyText:(NSString *)searchEmptyText errorText:(NSString *)errorText emptyLottie:(NSString *)emptyLottie reloadAction:(NSString *)reloadAction __attribute__((swift_name("init(messageActionAgain:messageActionEnd:messageActionClose:messageCarousel:messageScratch:floatAction:emptyText:searchPlaceholder:searchEmptyText:errorText:emptyLottie:reloadAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsInstantPrizesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *emptyLottie __attribute__((swift_name("emptyLottie")));
@property (readonly) NSString *emptyText __attribute__((swift_name("emptyText")));
@property (readonly) NSString *errorText __attribute__((swift_name("errorText")));
@property (readonly) NSString * _Nullable floatAction __attribute__((swift_name("floatAction")));
@property (readonly) NSString *messageActionAgain __attribute__((swift_name("messageActionAgain")));
@property (readonly) NSString *messageActionClose __attribute__((swift_name("messageActionClose")));
@property (readonly) NSString *messageActionEnd __attribute__((swift_name("messageActionEnd")));
@property (readonly) NSString *messageCarousel __attribute__((swift_name("messageCarousel")));
@property (readonly) NSString *messageScratch __attribute__((swift_name("messageScratch")));
@property (readonly) NSString *reloadAction __attribute__((swift_name("reloadAction")));
@property (readonly) NSString *searchEmptyText __attribute__((swift_name("searchEmptyText")));
@property (readonly) NSString *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsInstantPrizesCompanion")))
@interface SPSFSPConfigViewsInstantPrizesCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsInstantPrizesCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsOptInAuth")))
@interface SPSFSPConfigViewsOptInAuth : SPSBase
- (instancetype)initWithInvalidToken:(NSString *)invalidToken actionSendToken:(NSString *)actionSendToken actionResendToken:(NSString *)actionResendToken __attribute__((swift_name("init(invalidToken:actionSendToken:actionResendToken:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsOptInAuthCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *actionResendToken __attribute__((swift_name("actionResendToken")));
@property (readonly) NSString *actionSendToken __attribute__((swift_name("actionSendToken")));
@property (readonly) NSString *invalidToken __attribute__((swift_name("invalidToken")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsOptInAuthCompanion")))
@interface SPSFSPConfigViewsOptInAuthCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsOptInAuthCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsOptInForm")))
@interface SPSFSPConfigViewsOptInForm : SPSBase
- (instancetype)initWithTitle:(NSString *)title action:(NSString *)action __attribute__((swift_name("init(title:action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsOptInFormCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsOptInFormCompanion")))
@interface SPSFSPConfigViewsOptInFormCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsOptInFormCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsOptInId")))
@interface SPSFSPConfigViewsOptInId : SPSBase
- (instancetype)initWithTitle:(NSString *)title action:(NSString *)action __attribute__((swift_name("init(title:action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsOptInIdCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsOptInIdCompanion")))
@interface SPSFSPConfigViewsOptInIdCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsOptInIdCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsPrizes")))
@interface SPSFSPConfigViewsPrizes : SPSBase <SPSFSPConfigIPrizes>
- (instancetype)initWithFloatAction:(NSString * _Nullable)floatAction emptyText:(NSString *)emptyText searchEmptyText:(NSString *)searchEmptyText searchPlaceholder:(NSString *)searchPlaceholder errorText:(NSString *)errorText emptyLottie:(NSString *)emptyLottie reloadAction:(NSString *)reloadAction __attribute__((swift_name("init(floatAction:emptyText:searchEmptyText:searchPlaceholder:errorText:emptyLottie:reloadAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsPrizesCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *emptyLottie __attribute__((swift_name("emptyLottie")));
@property (readonly) NSString *emptyText __attribute__((swift_name("emptyText")));
@property (readonly) NSString *errorText __attribute__((swift_name("errorText")));
@property (readonly) NSString * _Nullable floatAction __attribute__((swift_name("floatAction")));
@property (readonly) NSString *reloadAction __attribute__((swift_name("reloadAction")));
@property (readonly) NSString *searchEmptyText __attribute__((swift_name("searchEmptyText")));
@property (readonly) NSString *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsPrizesCompanion")))
@interface SPSFSPConfigViewsPrizesCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsPrizesCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceipt")))
@interface SPSFSPConfigViewsReceipt : SPSBase
- (instancetype)initWithNumber:(NSString *)number date:(NSString *)date amount:(NSString *)amount __attribute__((swift_name("init(number:date:amount:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsReceiptCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *amount __attribute__((swift_name("amount")));
@property (readonly) NSString *date __attribute__((swift_name("date")));
@property (readonly) NSString *number __attribute__((swift_name("number")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceiptCompanion")))
@interface SPSFSPConfigViewsReceiptCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsReceiptCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceiptConfirm")))
@interface SPSFSPConfigViewsReceiptConfirm : SPSBase
- (instancetype)initWithTitle:(NSString *)title loadingAction:(NSString *)loadingAction cancelAction:(NSString *)cancelAction sendAction:(NSString *)sendAction backAction:(NSString *)backAction sendingAction:(NSString *)sendingAction readQrcodeMessage:(NSString *)readQrcodeMessage recommendSeller:(SPSFSPConfigViewsReceiptConfirmRecommendSeller *)recommendSeller __attribute__((swift_name("init(title:loadingAction:cancelAction:sendAction:backAction:sendingAction:readQrcodeMessage:recommendSeller:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsReceiptConfirmCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *backAction __attribute__((swift_name("backAction")));
@property (readonly) NSString *cancelAction __attribute__((swift_name("cancelAction")));
@property (readonly) NSString *loadingAction __attribute__((swift_name("loadingAction")));
@property (readonly) NSString *readQrcodeMessage __attribute__((swift_name("readQrcodeMessage")));
@property (readonly) SPSFSPConfigViewsReceiptConfirmRecommendSeller *recommendSeller __attribute__((swift_name("recommendSeller")));
@property (readonly) NSString *sendAction __attribute__((swift_name("sendAction")));
@property (readonly) NSString *sendingAction __attribute__((swift_name("sendingAction")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceiptConfirmCompanion")))
@interface SPSFSPConfigViewsReceiptConfirmCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsReceiptConfirmCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceiptConfirmRecommendSeller")))
@interface SPSFSPConfigViewsReceiptConfirmRecommendSeller : SPSBase
- (instancetype)initWithAction:(NSString *)action title:(NSString *)title message:(NSString *)message successMessage:(NSString *)successMessage notFoundMessage:(NSString *)notFoundMessage errorMessage:(NSString *)errorMessage codeLength:(int32_t)codeLength primaryAction:(BOOL)primaryAction skipAction:(NSString *)skipAction __attribute__((swift_name("init(action:title:message:successMessage:notFoundMessage:errorMessage:codeLength:primaryAction:skipAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsReceiptConfirmRecommendSellerCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) int32_t codeLength __attribute__((swift_name("codeLength")));
@property (readonly) NSString *errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *notFoundMessage __attribute__((swift_name("notFoundMessage")));
@property (readonly) BOOL primaryAction __attribute__((swift_name("primaryAction")));
@property (readonly) NSString *skipAction __attribute__((swift_name("skipAction")));
@property (readonly) NSString *successMessage __attribute__((swift_name("successMessage")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceiptConfirmRecommendSellerCompanion")))
@interface SPSFSPConfigViewsReceiptConfirmRecommendSellerCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsReceiptConfirmRecommendSellerCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceipts")))
@interface SPSFSPConfigViewsReceipts : SPSBase <SPSFSPConfigIState>
- (instancetype)initWithReceiptNumber:(NSString *)receiptNumber seeReceipt:(NSString *)seeReceipt copyReceipt:(NSString *)copyReceipt emptyText:(NSString *)emptyText searchEmptyText:(NSString *)searchEmptyText searchPlaceholder:(NSString *)searchPlaceholder errorText:(NSString *)errorText emptyLottie:(NSString *)emptyLottie reloadAction:(NSString *)reloadAction __attribute__((swift_name("init(receiptNumber:seeReceipt:copyReceipt:emptyText:searchEmptyText:searchPlaceholder:errorText:emptyLottie:reloadAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsReceiptsCompanion *companion __attribute__((swift_name("companion")));
@property (readonly, getter=doCopyReceipt) NSString *copyReceipt __attribute__((swift_name("copyReceipt")));
@property (readonly) NSString *emptyLottie __attribute__((swift_name("emptyLottie")));
@property (readonly) NSString *emptyText __attribute__((swift_name("emptyText")));
@property (readonly) NSString *errorText __attribute__((swift_name("errorText")));
@property (readonly) NSString *receiptNumber __attribute__((swift_name("receiptNumber")));
@property (readonly) NSString *reloadAction __attribute__((swift_name("reloadAction")));
@property (readonly) NSString *searchEmptyText __attribute__((swift_name("searchEmptyText")));
@property (readonly) NSString *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@property (readonly) NSString *seeReceipt __attribute__((swift_name("seeReceipt")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsReceiptsCompanion")))
@interface SPSFSPConfigViewsReceiptsCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsReceiptsCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsState")))
@interface SPSFSPConfigViewsState : SPSBase <SPSFSPConfigIState>
- (instancetype)initWithEmptyText:(NSString *)emptyText searchEmptyText:(NSString *)searchEmptyText searchPlaceholder:(NSString *)searchPlaceholder errorText:(NSString *)errorText emptyLottie:(NSString *)emptyLottie reloadAction:(NSString *)reloadAction __attribute__((swift_name("init(emptyText:searchEmptyText:searchPlaceholder:errorText:emptyLottie:reloadAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConfigViewsStateCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *emptyLottie __attribute__((swift_name("emptyLottie")));
@property (readonly) NSString *emptyText __attribute__((swift_name("emptyText")));
@property (readonly) NSString *errorText __attribute__((swift_name("errorText")));
@property (readonly) NSString *reloadAction __attribute__((swift_name("reloadAction")));
@property (readonly) NSString *searchEmptyText __attribute__((swift_name("searchEmptyText")));
@property (readonly) NSString *searchPlaceholder __attribute__((swift_name("searchPlaceholder")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConfig.ViewsStateCompanion")))
@interface SPSFSPConfigViewsStateCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConfigViewsStateCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConsumerCore")))
@interface SPSFSPConsumerCore : SPSBase
- (instancetype)initWithCpf:(NSString * _Nullable)cpf name:(NSString * _Nullable)name email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone genre:(SPSFSPGenre * _Nullable)genre bdate:(NSString * _Nullable)bdate address:(SPSFSPAddress * _Nullable)address __attribute__((swift_name("init(cpf:name:email:phone:genre:bdate:address:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPConsumerCoreCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPConsumerCore *)doCopyCpf:(NSString * _Nullable)cpf name:(NSString * _Nullable)name email:(NSString * _Nullable)email phone:(NSString * _Nullable)phone genre:(SPSFSPGenre * _Nullable)genre bdate:(NSString * _Nullable)bdate address:(SPSFSPAddress * _Nullable)address __attribute__((swift_name("doCopy(cpf:name:email:phone:genre:bdate:address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SPSFSPAddress * _Nullable address __attribute__((swift_name("address")));
@property SPSFSPPrize * _Nullable awards __attribute__((swift_name("awards")));
@property NSString * _Nullable bdate __attribute__((swift_name("bdate")));
@property NSArray<SPSFSPGenericItem *> * _Nullable coupons __attribute__((swift_name("coupons")));
@property NSString * _Nullable cpf __attribute__((swift_name("cpf")));
@property NSString * _Nullable email __attribute__((swift_name("email")));
@property NSArray<SPSFSPFeatureCard *> * _Nullable featureCards __attribute__((swift_name("featureCards")));
@property (readonly) NSString *firstName __attribute__((swift_name("firstName")));
@property SPSFSPGenre * _Nullable genre __attribute__((swift_name("genre")));
@property SPSFSPPrize * _Nullable gifts __attribute__((swift_name("gifts")));
@property SPSFSPPrize * _Nullable instantPrizes __attribute__((swift_name("instantPrizes")));
@property NSString * _Nullable name __attribute__((swift_name("name")));
@property NSArray<SPSFSPPrompt *> * _Nullable optinSurvey __attribute__((swift_name("optinSurvey")));
@property NSString * _Nullable phone __attribute__((swift_name("phone")));
@property SPSFSPPrompt * _Nullable profile __attribute__((swift_name("profile")));
@property NSArray<SPSFSPReceiptSection *> * _Nullable receipts __attribute__((swift_name("receipts")));
@property NSArray<SPSFSPStatement *> * _Nullable statements __attribute__((swift_name("statements")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConsumerCore.Companion")))
@interface SPSFSPConsumerCoreCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPConsumerCoreCompanion *shared __attribute__((swift_name("shared")));
- (BOOL)isValidNameName:(NSString *)name __attribute__((swift_name("isValidName(name:)")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPConsumerFields")))
@interface SPSFSPConsumerFields : SPSKotlinEnum<SPSFSPConsumerFields *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPConsumerFields *name __attribute__((swift_name("name")));
@property (class, readonly) SPSFSPConsumerFields *phone __attribute__((swift_name("phone")));
@property (class, readonly) SPSFSPConsumerFields *email __attribute__((swift_name("email")));
@property (class, readonly) SPSFSPConsumerFields *genre __attribute__((swift_name("genre")));
@property (class, readonly) SPSFSPConsumerFields *bdate __attribute__((swift_name("bdate")));
@property (class, readonly) SPSFSPConsumerFields *address __attribute__((swift_name("address")));
+ (SPSKotlinArray<SPSFSPConsumerFields *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPConsumerFields *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPErrorResponse")))
@interface SPSFSPErrorResponse : SPSBase
- (instancetype)initWithErrorMessage:(SPSFSPPrompt * _Nullable)errorMessage __attribute__((swift_name("init(errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPErrorResponseCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPErrorResponse *)doCopyErrorMessage:(SPSFSPPrompt * _Nullable)errorMessage __attribute__((swift_name("doCopy(errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSFSPPrompt * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPErrorResponse.Companion")))
@interface SPSFSPErrorResponseCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPErrorResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPFeatureCard")))
@interface SPSFSPFeatureCard : SPSBase
- (instancetype)initWithHeadnote:(NSString * _Nullable)headnote title:(NSString * _Nullable)title message:(NSString * _Nullable)message progress:(SPSInt * _Nullable)progress action:(NSString * _Nullable)action image:(NSString * _Nullable)image colored:(BOOL)colored icon:(NSString * _Nullable)icon url:(NSString * _Nullable)url expanded:(BOOL)expanded __attribute__((swift_name("init(headnote:title:message:progress:action:image:colored:icon:url:expanded:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPFeatureCardCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPFeatureCard *)doCopyHeadnote:(NSString * _Nullable)headnote title:(NSString * _Nullable)title message:(NSString * _Nullable)message progress:(SPSInt * _Nullable)progress action:(NSString * _Nullable)action image:(NSString * _Nullable)image colored:(BOOL)colored icon:(NSString * _Nullable)icon url:(NSString * _Nullable)url expanded:(BOOL)expanded __attribute__((swift_name("doCopy(headnote:title:message:progress:action:image:colored:icon:url:expanded:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable action __attribute__((swift_name("action")));
@property (readonly) BOOL colored __attribute__((swift_name("colored")));
@property (readonly) BOOL expanded __attribute__((swift_name("expanded")));
@property (readonly) NSString * _Nullable headnote __attribute__((swift_name("headnote")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="percentage")
*/
@property (readonly) SPSInt * _Nullable progress __attribute__((swift_name("progress")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPFeatureCard.Companion")))
@interface SPSFSPFeatureCardCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPFeatureCardCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPFilter")))
@interface SPSFSPFilter : SPSBase
- (instancetype)initWithAction:(NSString *)action titleOn:(NSString *)titleOn titleOff:(NSString *)titleOff __attribute__((swift_name("init(action:titleOn:titleOff:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPFilterCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPFilter *)doCopyAction:(NSString *)action titleOn:(NSString *)titleOn titleOff:(NSString *)titleOff __attribute__((swift_name("doCopy(action:titleOn:titleOff:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *action __attribute__((swift_name("action")));
@property (readonly) NSString *titleOff __attribute__((swift_name("titleOff")));
@property (readonly) NSString *titleOn __attribute__((swift_name("titleOn")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPFilter.Companion")))
@interface SPSFSPFilterCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPFilterCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("FSPFilterable")))
@protocol SPSFSPFilterable
@required
@property (readonly) NSString * _Nullable filter __attribute__((swift_name("filter")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPGenericItem")))
@interface SPSFSPGenericItem : SPSBase <SPSFSPSearchable>
- (instancetype)initWithTitle:(NSString * _Nullable)title detail:(NSString * _Nullable)detail isTicket:(BOOL)isTicket __attribute__((swift_name("init(title:detail:isTicket:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPGenericItemCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPGenericItem *)doCopyTitle:(NSString * _Nullable)title detail:(NSString * _Nullable)detail isTicket:(BOOL)isTicket __attribute__((swift_name("doCopy(title:detail:isTicket:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable detail __attribute__((swift_name("detail")));
@property BOOL isTicket __attribute__((swift_name("isTicket")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPGenericItem.Companion")))
@interface SPSFSPGenericItemCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPGenericItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPGenre")))
@interface SPSFSPGenre : SPSKotlinEnum<SPSFSPGenre *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSFSPGenreCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SPSFSPGenre *notInformed __attribute__((swift_name("notInformed")));
@property (class, readonly) SPSFSPGenre *male __attribute__((swift_name("male")));
@property (class, readonly) SPSFSPGenre *female __attribute__((swift_name("female")));
@property (class, readonly) SPSFSPGenre *notBinary __attribute__((swift_name("notBinary")));
+ (SPSKotlinArray<SPSFSPGenre *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPGenre *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPGenre.Companion")))
@interface SPSFSPGenreCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPGenreCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(SPSKotlinArray<id<SPSKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPInstantPrize")))
@interface SPSFSPInstantPrize : SPSBase
- (instancetype)initWithTitle:(NSString * _Nullable)title message:(NSString *)message duration:(int32_t)duration prizeId:(NSString *)prizeId scratchImage:(NSString * _Nullable)scratchImage items:(NSArray<SPSFSPInstantPrizeItem *> *)items __attribute__((swift_name("init(title:message:duration:prizeId:scratchImage:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPInstantPrizeCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPInstantPrize *)doCopyTitle:(NSString * _Nullable)title message:(NSString *)message duration:(int32_t)duration prizeId:(NSString *)prizeId scratchImage:(NSString * _Nullable)scratchImage items:(NSArray<SPSFSPInstantPrizeItem *> *)items __attribute__((swift_name("doCopy(title:message:duration:prizeId:scratchImage:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t duration __attribute__((swift_name("duration")));
@property NSArray<SPSFSPInstantPrizeItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) NSString *prizeId __attribute__((swift_name("prizeId")));
@property (readonly) NSString * _Nullable scratchImage __attribute__((swift_name("scratchImage")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPInstantPrize.Companion")))
@interface SPSFSPInstantPrizeCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPInstantPrizeCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPInstantPrizeItem")))
@interface SPSFSPInstantPrizeItem : SPSBase
- (instancetype)initWithId:(NSString *)id image:(NSString *)image isPrize:(BOOL)isPrize __attribute__((swift_name("init(id:image:isPrize:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPInstantPrizeItemCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPInstantPrizeItem *)doCopyId:(NSString *)id image:(NSString *)image isPrize:(BOOL)isPrize __attribute__((swift_name("doCopy(id:image:isPrize:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *image __attribute__((swift_name("image")));
@property (readonly) BOOL isPrize __attribute__((swift_name("isPrize")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPInstantPrizeItem.Companion")))
@interface SPSFSPInstantPrizeItemCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPInstantPrizeItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPInstantPrizeType")))
@interface SPSFSPInstantPrizeType : SPSKotlinEnum<SPSFSPInstantPrizeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPInstantPrizeType *scratch __attribute__((swift_name("scratch")));
@property (class, readonly) SPSFSPInstantPrizeType *carousel __attribute__((swift_name("carousel")));
+ (SPSKotlinArray<SPSFSPInstantPrizeType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPInstantPrizeType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLink")))
@interface SPSFSPLink : SPSBase
- (instancetype)initWithLabel:(NSString *)label url:(NSString *)url __attribute__((swift_name("init(label:url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPLinkCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPLink *)doCopyLabel:(NSString *)label url:(NSString *)url __attribute__((swift_name("doCopy(label:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLink.Companion")))
@interface SPSFSPLinkCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPLinkCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLottie")))
@interface SPSFSPLottie : SPSBase
- (instancetype)initWithId:(NSString * _Nullable)id rawResName:(NSString * _Nullable)rawResName json:(NSString * _Nullable)json size:(SPSInt * _Nullable)size speed:(SPSFloat * _Nullable)speed loop:(BOOL)loop backLottie:(SPSFSPLottie * _Nullable)backLottie __attribute__((swift_name("init(id:rawResName:json:size:speed:loop:backLottie:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPLottieCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPLottie *)doCopyId:(NSString * _Nullable)id rawResName:(NSString * _Nullable)rawResName json:(NSString * _Nullable)json size:(SPSInt * _Nullable)size speed:(SPSFloat * _Nullable)speed loop:(BOOL)loop backLottie:(SPSFSPLottie * _Nullable)backLottie __attribute__((swift_name("doCopy(id:rawResName:json:size:speed:loop:backLottie:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SPSFSPLottie * _Nullable backLottie __attribute__((swift_name("backLottie")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable json __attribute__((swift_name("json")));
@property BOOL loop __attribute__((swift_name("loop")));
@property (readonly) NSString * _Nullable rawResName __attribute__((swift_name("rawResName")));
@property SPSInt * _Nullable size __attribute__((swift_name("size")));
@property SPSFloat * _Nullable speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLottie.Companion")))
@interface SPSFSPLottieCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPLottieCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLottie.Feature")))
@interface SPSFSPLottieFeature : SPSKotlinEnum<SPSFSPLottieFeature *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPLottieFeature *error __attribute__((swift_name("error")));
@property (class, readonly) SPSFSPLottieFeature *confetti __attribute__((swift_name("confetti")));
+ (SPSKotlinArray<SPSFSPLottieFeature *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPLottieFeature *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPOptInResponse")))
@interface SPSFSPOptInResponse : SPSBase
- (instancetype)initWithToken:(NSString * _Nullable)token errorMessage:(SPSFSPPrompt * _Nullable)errorMessage __attribute__((swift_name("init(token:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPOptInResponseCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPOptInResponse *)doCopyToken:(NSString * _Nullable)token errorMessage:(SPSFSPPrompt * _Nullable)errorMessage __attribute__((swift_name("doCopy(token:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSFSPPrompt * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPOptInResponse.Companion")))
@interface SPSFSPOptInResponseCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPOptInResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPaymentParameters")))
@interface SPSFSPPaymentParameters : SPSBase
- (instancetype)initWithPaymentUrl:(NSString *)paymentUrl paymentReceivedPath:(NSString *)paymentReceivedPath paymentReceivedMessage:(SPSFSPPrompt *)paymentReceivedMessage errorMessage:(SPSFSPPrompt * _Nullable)errorMessage __attribute__((swift_name("init(paymentUrl:paymentReceivedPath:paymentReceivedMessage:errorMessage:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPaymentParametersCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPPaymentParameters *)doCopyPaymentUrl:(NSString *)paymentUrl paymentReceivedPath:(NSString *)paymentReceivedPath paymentReceivedMessage:(SPSFSPPrompt *)paymentReceivedMessage errorMessage:(SPSFSPPrompt * _Nullable)errorMessage __attribute__((swift_name("doCopy(paymentUrl:paymentReceivedPath:paymentReceivedMessage:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSFSPPrompt * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) SPSFSPPrompt *paymentReceivedMessage __attribute__((swift_name("paymentReceivedMessage")));
@property (readonly) NSString *paymentReceivedPath __attribute__((swift_name("paymentReceivedPath")));
@property (readonly) NSString *paymentUrl __attribute__((swift_name("paymentUrl")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPaymentParameters.Companion")))
@interface SPSFSPPaymentParametersCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPaymentParametersCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrize")))
@interface SPSFSPPrize : SPSBase
- (instancetype)initWithFilter:(SPSFSPFilter * _Nullable)filter items:(NSMutableArray<SPSFSPPrizeItem *> *)items message:(NSString * _Nullable)message chooseItems:(NSMutableArray<SPSFSPPrizeItem *> *)chooseItems pending:(int32_t)pending needsPayment:(SPSBoolean * _Nullable)needsPayment shareDataToPayMessage:(SPSFSPPrompt * _Nullable)shareDataToPayMessage chooseItemToPayMessage:(SPSFSPPrompt * _Nullable)chooseItemToPayMessage primaryAction:(NSString * _Nullable)primaryAction __attribute__((swift_name("init(filter:items:message:chooseItems:pending:needsPayment:shareDataToPayMessage:chooseItemToPayMessage:primaryAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPrizeCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPPrize *)doCopyFilter:(SPSFSPFilter * _Nullable)filter items:(NSMutableArray<SPSFSPPrizeItem *> *)items message:(NSString * _Nullable)message chooseItems:(NSMutableArray<SPSFSPPrizeItem *> *)chooseItems pending:(int32_t)pending needsPayment:(SPSBoolean * _Nullable)needsPayment shareDataToPayMessage:(SPSFSPPrompt * _Nullable)shareDataToPayMessage chooseItemToPayMessage:(SPSFSPPrompt * _Nullable)chooseItemToPayMessage primaryAction:(NSString * _Nullable)primaryAction __attribute__((swift_name("doCopy(filter:items:message:chooseItems:pending:needsPayment:shareDataToPayMessage:chooseItemToPayMessage:primaryAction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property SPSFSPPrompt * _Nullable chooseItemToPayMessage __attribute__((swift_name("chooseItemToPayMessage")));
@property NSMutableArray<SPSFSPPrizeItem *> *chooseItems __attribute__((swift_name("chooseItems")));
@property (readonly) SPSFSPFilter * _Nullable filter __attribute__((swift_name("filter")));
@property NSMutableArray<SPSFSPPrizeItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property SPSBoolean * _Nullable needsPayment __attribute__((swift_name("needsPayment")));
@property int32_t pending __attribute__((swift_name("pending")));
@property NSString * _Nullable primaryAction __attribute__((swift_name("primaryAction")));
@property SPSFSPPrompt * _Nullable shareDataToPayMessage __attribute__((swift_name("shareDataToPayMessage")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrize.Companion")))
@interface SPSFSPPrizeCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPrizeCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrizeItem")))
@interface SPSFSPPrizeItem : SPSBase <SPSFSPSearchable, SPSFSPFilterable>
- (instancetype)initWithId:(NSString * _Nullable)id images:(NSArray<NSString *> * _Nullable)images headnote:(NSString * _Nullable)headnote title:(NSString * _Nullable)title body:(NSString * _Nullable)body status:(SPSFSPrizeStatus * _Nullable)status filter:(NSString * _Nullable)filter details:(SPSFSPPrizeItemDetail * _Nullable)details voucher:(SPSFSPPrompt * _Nullable)voucher confirmationMessage:(SPSFSPPrompt * _Nullable)confirmationMessage badge:(NSString * _Nullable)badge progress:(SPSInt * _Nullable)progress __attribute__((swift_name("init(id:images:headnote:title:body:status:filter:details:voucher:confirmationMessage:badge:progress:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPrizeItemCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPPrizeItem *)doCopyId:(NSString * _Nullable)id images:(NSArray<NSString *> * _Nullable)images headnote:(NSString * _Nullable)headnote title:(NSString * _Nullable)title body:(NSString * _Nullable)body status:(SPSFSPrizeStatus * _Nullable)status filter:(NSString * _Nullable)filter details:(SPSFSPPrizeItemDetail * _Nullable)details voucher:(SPSFSPPrompt * _Nullable)voucher confirmationMessage:(SPSFSPPrompt * _Nullable)confirmationMessage badge:(NSString * _Nullable)badge progress:(SPSInt * _Nullable)progress __attribute__((swift_name("doCopy(id:images:headnote:title:body:status:filter:details:voucher:confirmationMessage:badge:progress:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable badge __attribute__((swift_name("badge")));
@property (readonly) NSString * _Nullable body __attribute__((swift_name("body")));
@property SPSFSPPrompt * _Nullable confirmationMessage __attribute__((swift_name("confirmationMessage")));
@property (readonly) SPSFSPPrizeItemDetail * _Nullable details __attribute__((swift_name("details")));
@property (readonly) NSString * _Nullable filter __attribute__((swift_name("filter")));
@property (readonly) NSString * _Nullable headnote __attribute__((swift_name("headnote")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> * _Nullable images __attribute__((swift_name("images")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="percentage")
*/
@property (readonly) SPSInt * _Nullable progress __attribute__((swift_name("progress")));
@property SPSFSPrizeStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property SPSFSPPrompt * _Nullable voucher __attribute__((swift_name("voucher")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrizeItem.Companion")))
@interface SPSFSPPrizeItemCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPrizeItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrizeItemDetail")))
@interface SPSFSPPrizeItemDetail : SPSBase
- (instancetype)initWithDescription:(NSString *)description chooseGroupAction:(NSString * _Nullable)chooseGroupAction groups:(NSArray<SPSFSPPrizeItemDetailFSPGroup *> * _Nullable)groups primaryAction:(NSString * _Nullable)primaryAction __attribute__((swift_name("init(description:chooseGroupAction:groups:primaryAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPrizeItemDetailCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPPrizeItemDetail *)doCopyDescription:(NSString *)description chooseGroupAction:(NSString * _Nullable)chooseGroupAction groups:(NSArray<SPSFSPPrizeItemDetailFSPGroup *> * _Nullable)groups primaryAction:(NSString * _Nullable)primaryAction __attribute__((swift_name("doCopy(description:chooseGroupAction:groups:primaryAction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable chooseGroupAction __attribute__((swift_name("chooseGroupAction")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSArray<SPSFSPPrizeItemDetailFSPGroup *> * _Nullable groups __attribute__((swift_name("groups")));
@property (readonly) NSString * _Nullable primaryAction __attribute__((swift_name("primaryAction")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrizeItemDetail.Companion")))
@interface SPSFSPPrizeItemDetailCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPrizeItemDetailCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrizeItemDetail.FSPGroup")))
@interface SPSFSPPrizeItemDetailFSPGroup : SPSBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name __attribute__((swift_name("init(id:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPrizeItemDetailFSPGroupCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPPrizeItemDetailFSPGroup *)doCopyId:(NSString *)id name:(NSString *)name __attribute__((swift_name("doCopy(id:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrizeItemDetail.FSPGroupCompanion")))
@interface SPSFSPPrizeItemDetailFSPGroupCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPrizeItemDetailFSPGroupCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt")))
@interface SPSFSPPrompt : SPSBase
- (instancetype)initWithId:(NSString * _Nullable)id closable:(BOOL)closable content:(NSMutableArray<SPSFSPPromptContent *> *)content __attribute__((swift_name("init(id:closable:content:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPromptCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPPrompt *)doCopyId:(NSString * _Nullable)id closable:(BOOL)closable content:(NSMutableArray<SPSFSPPromptContent *> *)content __attribute__((swift_name("doCopy(id:closable:content:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL closable __attribute__((swift_name("closable")));
@property NSMutableArray<SPSFSPPromptContent *> *content __attribute__((swift_name("content")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.Companion")))
@interface SPSFSPPromptCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPromptCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.Content")))
@interface SPSFSPPromptContent : SPSBase
- (instancetype)initWithValue:(NSString * _Nullable)value type:(SPSFSPPromptContentType * _Nullable)type alignment:(SPSFSPPromptContentAlignment * _Nullable)alignment input:(SPSFSPPromptInput * _Nullable)input action:(NSString * _Nullable)action __attribute__((swift_name("init(value:type:alignment:input:action:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPromptContentCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPPromptContent *)doCopyValue:(NSString * _Nullable)value type:(SPSFSPPromptContentType * _Nullable)type alignment:(SPSFSPPromptContentAlignment * _Nullable)alignment input:(SPSFSPPromptInput * _Nullable)input action:(NSString * _Nullable)action __attribute__((swift_name("doCopy(value:type:alignment:input:action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable action __attribute__((swift_name("action")));
@property (readonly) SPSFSPPromptContentAlignment * _Nullable alignment __attribute__((swift_name("alignment")));
@property (readonly) SPSFSPPromptInput * _Nullable input __attribute__((swift_name("input")));
@property (readonly) SPSFSPPromptContentType * _Nullable type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.ContentAlignment")))
@interface SPSFSPPromptContentAlignment : SPSKotlinEnum<SPSFSPPromptContentAlignment *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPPromptContentAlignment *left __attribute__((swift_name("left")));
@property (class, readonly) SPSFSPPromptContentAlignment *center __attribute__((swift_name("center")));
@property (class, readonly) SPSFSPPromptContentAlignment *right __attribute__((swift_name("right")));
+ (SPSKotlinArray<SPSFSPPromptContentAlignment *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPPromptContentAlignment *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.ContentCompanion")))
@interface SPSFSPPromptContentCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPromptContentCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.ContentType")))
@interface SPSFSPPromptContentType : SPSKotlinEnum<SPSFSPPromptContentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPPromptContentType *title __attribute__((swift_name("title")));
@property (class, readonly) SPSFSPPromptContentType *body __attribute__((swift_name("body")));
@property (class, readonly) SPSFSPPromptContentType *footer __attribute__((swift_name("footer")));
@property (class, readonly) SPSFSPPromptContentType *image __attribute__((swift_name("image")));
@property (class, readonly) SPSFSPPromptContentType *lottie __attribute__((swift_name("lottie")));
@property (class, readonly) SPSFSPPromptContentType *space __attribute__((swift_name("space")));
@property (class, readonly) SPSFSPPromptContentType *divider __attribute__((swift_name("divider")));
@property (class, readonly) SPSFSPPromptContentType *input __attribute__((swift_name("input")));
@property (class, readonly) SPSFSPPromptContentType *primaryButton __attribute__((swift_name("primaryButton")));
@property (class, readonly) SPSFSPPromptContentType *secondaryButton __attribute__((swift_name("secondaryButton")));
+ (SPSKotlinArray<SPSFSPPromptContentType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPPromptContentType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.Input")))
@interface SPSFSPPromptInput : SPSBase
- (instancetype)initWithMask:(NSString * _Nullable)mask type:(SPSFSPPromptInputType * _Nullable)type options:(NSArray<NSString *> * _Nullable)options answer:(NSArray<NSString *> * _Nullable)answer answerAdmission:(SPSFSPPromptInputAdmission *)answerAdmission answerRegex:(NSString * _Nullable)answerRegex image:(NSString * _Nullable)image alternativeAction:(NSString * _Nullable)alternativeAction __attribute__((swift_name("init(mask:type:options:answer:answerAdmission:answerRegex:image:alternativeAction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPPromptInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)answerAsBoolean __attribute__((swift_name("answerAsBoolean()")));
- (BOOL)answerMatches __attribute__((swift_name("answerMatches()")));
- (SPSFSPPromptInput *)doCopyMask:(NSString * _Nullable)mask type:(SPSFSPPromptInputType * _Nullable)type options:(NSArray<NSString *> * _Nullable)options answer:(NSArray<NSString *> * _Nullable)answer answerAdmission:(SPSFSPPromptInputAdmission *)answerAdmission answerRegex:(NSString * _Nullable)answerRegex image:(NSString * _Nullable)image alternativeAction:(NSString * _Nullable)alternativeAction __attribute__((swift_name("doCopy(mask:type:options:answer:answerAdmission:answerRegex:image:alternativeAction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable alternativeAction __attribute__((swift_name("alternativeAction")));
@property NSArray<NSString *> * _Nullable answer __attribute__((swift_name("answer")));
@property (readonly) SPSFSPPromptInputAdmission *answerAdmission __attribute__((swift_name("answerAdmission")));
@property NSString * _Nullable answerRegex __attribute__((swift_name("answerRegex")));
@property NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) NSString * _Nullable mask __attribute__((swift_name("mask")));
@property (readonly) NSArray<NSString *> * _Nullable options __attribute__((swift_name("options")));
@property (readonly) SPSFSPPromptInputType * _Nullable type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.InputAdmission")))
@interface SPSFSPPromptInputAdmission : SPSKotlinEnum<SPSFSPPromptInputAdmission *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPPromptInputAdmission *any __attribute__((swift_name("any")));
@property (class, readonly) SPSFSPPromptInputAdmission *match __attribute__((swift_name("match")));
@property (class, readonly) SPSFSPPromptInputAdmission *matchOrEmpty __attribute__((swift_name("matchOrEmpty")));
+ (SPSKotlinArray<SPSFSPPromptInputAdmission *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPPromptInputAdmission *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.InputCompanion")))
@interface SPSFSPPromptInputCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPPromptInputCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPPrompt.InputType")))
@interface SPSFSPPromptInputType : SPSKotlinEnum<SPSFSPPromptInputType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPPromptInputType *number __attribute__((swift_name("number")));
@property (class, readonly) SPSFSPPromptInputType *text __attribute__((swift_name("text")));
@property (class, readonly) SPSFSPPromptInputType *singleVertical __attribute__((swift_name("singleVertical")));
@property (class, readonly) SPSFSPPromptInputType *singleHorizontal __attribute__((swift_name("singleHorizontal")));
@property (class, readonly) SPSFSPPromptInputType *multiVertical __attribute__((swift_name("multiVertical")));
@property (class, readonly) SPSFSPPromptInputType *multiHorizontal __attribute__((swift_name("multiHorizontal")));
@property (class, readonly) SPSFSPPromptInputType *boolean __attribute__((swift_name("boolean")));
@property (class, readonly) SPSFSPPromptInputType *slider __attribute__((swift_name("slider")));
@property (class, readonly) SPSFSPPromptInputType *numberWithButtons __attribute__((swift_name("numberWithButtons")));
+ (SPSKotlinArray<SPSFSPPromptInputType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPPromptInputType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPReceipt")))
@interface SPSFSPReceipt : SPSBase <SPSFSPSearchable>
- (instancetype)initWithStoreName:(NSString * _Nullable)storeName storeCnpj:(NSString * _Nullable)storeCnpj consumer:(NSString * _Nullable)consumer number:(NSString * _Nullable)number date:(NSString * _Nullable)date amount:(SPSDouble * _Nullable)amount totalAmount:(NSString * _Nullable)totalAmount qrCode:(NSString * _Nullable)qrCode url:(NSString * _Nullable)url imageUrl:(NSString * _Nullable)imageUrl accessKey:(NSString * _Nullable)accessKey status:(SPSFSPReceiptStatus * _Nullable)status statusMessage:(NSString * _Nullable)statusMessage message:(NSString * _Nullable)message headnote:(NSString * _Nullable)headnote __attribute__((swift_name("init(storeName:storeCnpj:consumer:number:date:amount:totalAmount:qrCode:url:imageUrl:accessKey:status:statusMessage:message:headnote:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPReceiptCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPReceipt *)doCopyStoreName:(NSString * _Nullable)storeName storeCnpj:(NSString * _Nullable)storeCnpj consumer:(NSString * _Nullable)consumer number:(NSString * _Nullable)number date:(NSString * _Nullable)date amount:(SPSDouble * _Nullable)amount totalAmount:(NSString * _Nullable)totalAmount qrCode:(NSString * _Nullable)qrCode url:(NSString * _Nullable)url imageUrl:(NSString * _Nullable)imageUrl accessKey:(NSString * _Nullable)accessKey status:(SPSFSPReceiptStatus * _Nullable)status statusMessage:(NSString * _Nullable)statusMessage message:(NSString * _Nullable)message headnote:(NSString * _Nullable)headnote __attribute__((swift_name("doCopy(storeName:storeCnpj:consumer:number:date:amount:totalAmount:qrCode:url:imageUrl:accessKey:status:statusMessage:message:headnote:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="nf_key")
*/
@property NSString * _Nullable accessKey __attribute__((swift_name("accessKey")));
@property SPSDouble * _Nullable amount __attribute__((swift_name("amount")));
@property NSString * _Nullable consumer __attribute__((swift_name("consumer")));
@property NSString * _Nullable date __attribute__((swift_name("date")));
@property (readonly) NSString * _Nullable headnote __attribute__((swift_name("headnote")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
@property NSString * _Nullable number __attribute__((swift_name("number")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="qrcode")
*/
@property NSString * _Nullable qrCode __attribute__((swift_name("qrCode")));
@property (readonly) SPSFSPReceiptStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) NSString * _Nullable statusMessage __attribute__((swift_name("statusMessage")));
@property NSString * _Nullable storeCnpj __attribute__((swift_name("storeCnpj")));
@property NSString * _Nullable storeName __attribute__((swift_name("storeName")));
@property (readonly) NSString * _Nullable totalAmount __attribute__((swift_name("totalAmount")));
@property NSString * _Nullable url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPReceipt.Companion")))
@interface SPSFSPReceiptCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPReceiptCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPReceiptSection")))
@interface SPSFSPReceiptSection : SPSBase <SPSFSPSearchable>
- (instancetype)initWithTitle:(NSString *)title items:(NSArray<SPSFSPReceipt *> *)items __attribute__((swift_name("init(title:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPReceiptSectionCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPReceiptSection *)doCopyTitle:(NSString *)title items:(NSArray<SPSFSPReceipt *> *)items __attribute__((swift_name("doCopy(title:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SPSFSPReceipt *> *items __attribute__((swift_name("items")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPReceiptSection.Companion")))
@interface SPSFSPReceiptSectionCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPReceiptSectionCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPReceiptStatus")))
@interface SPSFSPReceiptStatus : SPSKotlinEnum<SPSFSPReceiptStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPReceiptStatus *accepted __attribute__((swift_name("accepted")));
@property (class, readonly) SPSFSPReceiptStatus *rejected __attribute__((swift_name("rejected")));
@property (class, readonly) SPSFSPReceiptStatus *processing __attribute__((swift_name("processing")));
@property (class, readonly) SPSFSPReceiptStatus *analyzing __attribute__((swift_name("analyzing")));
@property (class, readonly) SPSFSPReceiptStatus *deleted __attribute__((swift_name("deleted")));
+ (SPSKotlinArray<SPSFSPReceiptStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPReceiptStatus *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPSeller")))
@interface SPSFSPSeller : SPSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPSellerCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPSeller *)doCopyName:(NSString *)name __attribute__((swift_name("doCopy(name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPSeller.Companion")))
@interface SPSFSPSellerCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPSellerCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPStatement")))
@interface SPSFSPStatement : SPSBase <SPSFSPSearchable>
- (instancetype)initWithTitle:(NSString *)title items:(NSArray<SPSFSPStatementItem *> *)items __attribute__((swift_name("init(title:items:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPStatementCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPStatement *)doCopyTitle:(NSString *)title items:(NSArray<SPSFSPStatementItem *> *)items __attribute__((swift_name("doCopy(title:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SPSFSPStatementItem *> *items __attribute__((swift_name("items")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPStatement.Companion")))
@interface SPSFSPStatementCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPStatementCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPStatementItem")))
@interface SPSFSPStatementItem : SPSBase <SPSFSPSearchable>
- (instancetype)initWithTitle:(NSString *)title info:(NSString *)info detail:(NSString * _Nullable)detail negative:(BOOL)negative __attribute__((swift_name("init(title:info:detail:negative:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPStatementItemCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPStatementItem *)doCopyTitle:(NSString *)title info:(NSString *)info detail:(NSString * _Nullable)detail negative:(BOOL)negative __attribute__((swift_name("doCopy(title:info:detail:negative:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchesQuery:(NSString *)query __attribute__((swift_name("matches(query:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable detail __attribute__((swift_name("detail")));
@property (readonly) NSString *info __attribute__((swift_name("info")));
@property (readonly) BOOL negative __attribute__((swift_name("negative")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPStatementItem.Companion")))
@interface SPSFSPStatementItemCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPStatementItemCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPSurvey")))
@interface SPSFSPSurvey : SPSBase
- (instancetype)initWithId:(NSString *)id pages:(NSArray<SPSFSPPrompt *> * _Nullable)pages __attribute__((swift_name("init(id:pages:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPSurveyCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPSurvey *)doCopyId:(NSString *)id pages:(NSArray<SPSFSPPrompt *> * _Nullable)pages __attribute__((swift_name("doCopy(id:pages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property NSArray<SPSFSPPrompt *> * _Nullable pages __attribute__((swift_name("pages")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPSurvey.Companion")))
@interface SPSFSPSurveyCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPSurveyCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPTokenResponse")))
@interface SPSFSPTokenResponse : SPSBase
- (instancetype)initWithToken:(NSString * _Nullable)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPTokenResponseCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPTokenResponse *)doCopyToken:(NSString * _Nullable)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable token __attribute__((swift_name("token")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPTokenResponse.Companion")))
@interface SPSFSPTokenResponseCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPTokenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPZipCodeAddress")))
@interface SPSFSPZipCodeAddress : SPSBase
- (instancetype)initWithStreetName:(NSString * _Nullable)streetName neighborhood:(NSString * _Nullable)neighborhood city:(NSString * _Nullable)city state:(NSString * _Nullable)state __attribute__((swift_name("init(streetName:neighborhood:city:state:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPZipCodeAddressCompanion *companion __attribute__((swift_name("companion")));
- (SPSFSPZipCodeAddress *)doCopyStreetName:(NSString * _Nullable)streetName neighborhood:(NSString * _Nullable)neighborhood city:(NSString * _Nullable)city state:(NSString * _Nullable)state __attribute__((swift_name("doCopy(streetName:neighborhood:city:state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="localidade")
*/
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="bairro")
*/
@property (readonly) NSString * _Nullable neighborhood __attribute__((swift_name("neighborhood")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="uf")
*/
@property (readonly) NSString * _Nullable state __attribute__((swift_name("state")));

/**
 * @note annotations
 *   kotlinx.serialization.SerialName(value="logradouro")
*/
@property (readonly) NSString * _Nullable streetName __attribute__((swift_name("streetName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPZipCodeAddress.Companion")))
@interface SPSFSPZipCodeAddressCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPZipCodeAddressCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPrizeStatus")))
@interface SPSFSPrizeStatus : SPSKotlinEnum<SPSFSPrizeStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPrizeStatus *choose __attribute__((swift_name("choose")));
@property (class, readonly) SPSFSPrizeStatus *waiting __attribute__((swift_name("waiting")));
@property (class, readonly) SPSFSPrizeStatus *done __attribute__((swift_name("done")));
@property (class, readonly) SPSFSPrizeStatus *unavailable __attribute__((swift_name("unavailable")));
+ (SPSKotlinArray<SPSFSPrizeStatus *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPrizeStatus *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("FSPAPIService")))
@protocol SPSFSPAPIService
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteEndpoint:(NSString *)endpoint completionHandler:(void (^)(SPSFSPResponse<SPSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(endpoint:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(endpoint:responseSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(endpoint:responseSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEndpoint:(NSString *)endpoint body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<SPSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(endpoint:body:requestSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(endpoint:responseSerializer:body:requestSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndpoint:(NSString *)endpoint body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<SPSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endpoint:body:requestSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endpoint:responseSerializer:body:requestSerializer:completionHandler:)")));
- (void)setupConsumerID:(NSString * _Nullable)consumerID authToken:(NSString * _Nullable)authToken __attribute__((swift_name("setup(consumerID:authToken:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer file:(SPSFSPFileDataPart *)file formFields:(NSDictionary<NSString *, id> * _Nullable)formFields completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(endpoint:responseSerializer:file:formFields:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPAPIServiceImpl")))
@interface SPSFSPAPIServiceImpl : SPSBase <SPSFSPAPIService>
- (instancetype)initWithAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey isHomolog:(BOOL)isHomolog client:(SPSKtor_client_coreHttpClient * _Nullable)client cryptoService:(SPSFSPCryptoService *)cryptoService __attribute__((swift_name("init(accessKey:secretKey:isHomolog:client:cryptoService:)"))) __attribute__((objc_designated_initializer));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteEndpoint:(NSString *)endpoint completionHandler:(void (^)(SPSFSPResponse<SPSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(endpoint:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)deleteEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("delete(endpoint:responseSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(endpoint:responseSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEndpoint:(NSString *)endpoint body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<SPSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(endpoint:body:requestSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)postEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("post(endpoint:responseSerializer:body:requestSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndpoint:(NSString *)endpoint body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<SPSKotlinUnit *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endpoint:body:requestSerializer:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)putEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer body:(id _Nullable)body requestSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)requestSerializer completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("put(endpoint:responseSerializer:body:requestSerializer:completionHandler:)")));
- (void)setupConsumerID:(NSString * _Nullable)consumerID authToken:(NSString * _Nullable)authToken __attribute__((swift_name("setup(consumerID:authToken:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)uploadEndpoint:(NSString *)endpoint responseSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)responseSerializer file:(SPSFSPFileDataPart *)file formFields:(NSDictionary<NSString *, id> * _Nullable)formFields completionHandler:(void (^)(SPSFSPResponse<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("upload(endpoint:responseSerializer:file:formFields:completionHandler:)")));
@end

__attribute__((swift_name("FSPAddressService")))
@protocol SPSFSPAddressService
@required
@end

__attribute__((swift_name("FSPAuthService")))
@protocol SPSFSPAuthService
@required
@end

__attribute__((swift_name("FSPCampaignService")))
@protocol SPSFSPCampaignService
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCryptoService")))
@interface SPSFSPCryptoService : SPSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)decryptString:(NSString *)string key:(NSString *)key error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("decrypt(string:key:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)encryptString:(NSString *)string key:(NSString *)key error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("encrypt(string:key:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPCryptoServiceShared")))
@interface SPSFSPCryptoServiceShared : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fSPCryptoServiceShared __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPCryptoServiceShared *shared __attribute__((swift_name("shared")));
- (NSString *)generateIV __attribute__((swift_name("generateIV()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SPSKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SPSKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SPSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SPSKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SPSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SPSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SPSKotlinx_serialization_coreKSerializer <SPSKotlinx_serialization_coreSerializationStrategy, SPSKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPDateSerializer")))
@interface SPSFSPDateSerializer : SPSBase <SPSKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fSPDateSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPDateSerializer *shared __attribute__((swift_name("shared")));
- (SPSKotlinx_datetimeLocalDate *)deserializeDecoder:(id<SPSKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SPSKotlinx_serialization_coreEncoder>)encoder value:(SPSKotlinx_datetimeLocalDate *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SPSKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPFileDataPart")))
@interface SPSFSPFileDataPart : SPSBase
- (instancetype)initWithName:(NSString *)name data:(SPSKotlinByteArray *)data type:(NSString *)type __attribute__((swift_name("init(name:data:type:)"))) __attribute__((objc_designated_initializer));
@property SPSKotlinByteArray *data __attribute__((swift_name("data")));
@property NSString *name __attribute__((swift_name("name")));
@property NSString *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPJsonBridge")))
@interface SPSFSPJsonBridge : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fSPJsonBridge __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPJsonBridge *shared __attribute__((swift_name("shared")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)decodeJsonString:(NSString *)jsonString deserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("decode(jsonString:deserializer:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSArray<id> * _Nullable)decodeListJsonString:(NSString *)jsonString elementSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)elementSerializer error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("decodeList(jsonString:elementSerializer:)")));

/**
 * @note This method converts instances of Exception to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (NSString * _Nullable)encodeValue:(id _Nullable)value serializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("encode(value:serializer:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLogger")))
@interface SPSFSPLogger : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fSPLogger __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPLogger *shared __attribute__((swift_name("shared")));
- (void)debugMessage:(SPSKotlinArray<id> *)message __attribute__((swift_name("debug(message:)")));
- (void)errorMessage:(NSString *)message exception:(SPSKotlinThrowable * _Nullable)exception __attribute__((swift_name("error(message:exception:)")));
- (void)infoMessage:(SPSKotlinArray<id> *)message __attribute__((swift_name("info(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLoggerShared")))
@interface SPSFSPLoggerShared : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fSPLoggerShared __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPLoggerShared *shared __attribute__((swift_name("shared")));
@property BOOL enabled __attribute__((swift_name("enabled")));
@end

__attribute__((swift_name("FSPReceiptService")))
@protocol SPSFSPReceiptService
@required
@end

__attribute__((swift_name("FSPResponse")))
@interface SPSFSPResponse<T> : SPSBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPResponseFailed")))
@interface SPSFSPResponseFailed<T> : SPSFSPResponse<T>
- (instancetype)initWithError:(SPSFSPPrompt * _Nullable)error statusCode:(SPSInt * _Nullable)statusCode json:(NSString * _Nullable)json __attribute__((swift_name("init(error:statusCode:json:)"))) __attribute__((objc_designated_initializer));
- (SPSFSPResponseFailed<T> *)doCopyError:(SPSFSPPrompt * _Nullable)error statusCode:(SPSInt * _Nullable)statusCode json:(NSString * _Nullable)json __attribute__((swift_name("doCopy(error:statusCode:json:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSFSPPrompt * _Nullable error __attribute__((swift_name("error")));
@property (readonly) NSString * _Nullable json __attribute__((swift_name("json")));
@property (readonly) SPSInt * _Nullable statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPResponseSuccess")))
@interface SPSFSPResponseSuccess<T> : SPSFSPResponse<T>
- (instancetype)initWithData:(T _Nullable)data statusCode:(int32_t)statusCode json:(NSString * _Nullable)json __attribute__((swift_name("init(data:statusCode:json:)"))) __attribute__((objc_designated_initializer));
- (SPSFSPResponseSuccess<T> *)doCopyData:(T _Nullable)data statusCode:(int32_t)statusCode json:(NSString * _Nullable)json __attribute__((swift_name("doCopy(data:statusCode:json:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) T _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable json __attribute__((swift_name("json")));
@property (readonly) int32_t statusCode __attribute__((swift_name("statusCode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPServiceProvider")))
@interface SPSFSPServiceProvider : SPSBase
- (instancetype)initWithApiService:(id<SPSFSPAPIService>)apiService __attribute__((swift_name("init(apiService:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSFSPServiceProviderCompanion *companion __attribute__((swift_name("companion")));
- (void)doInitContextualServicesContext:(id)context __attribute__((swift_name("doInitContextualServices(context:)")));
@property (readonly) id<SPSFSPAddressService> addressService __attribute__((swift_name("addressService")));
@property (readonly) id<SPSFSPAuthService> authService __attribute__((swift_name("authService")));
@property (readonly) id<SPSFSPCampaignService> campaignService __attribute__((swift_name("campaignService")));
@property (readonly) id<SPSFSPReceiptService> receiptService __attribute__((swift_name("receiptService")));
@property (readonly) SPSFSPStoreService *storeService __attribute__((swift_name("storeService")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPServiceProvider.Companion")))
@interface SPSFSPServiceProviderCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPServiceProviderCompanion *shared __attribute__((swift_name("shared")));
- (SPSFSPServiceProvider *)createAccessKey:(NSString *)accessKey secretKey:(NSString *)secretKey isHomolog:(BOOL)isHomolog __attribute__((swift_name("create(accessKey:secretKey:isHomolog:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPSharedStoreService")))
@interface SPSFSPSharedStoreService : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)fSPSharedStoreService __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSFSPSharedStoreService *shared __attribute__((swift_name("shared")));
- (NSString *)scopedKeyKey:(SPSFSPStoreKey *)key prefix:(NSString *)prefix __attribute__((swift_name("scopedKey(key:prefix:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPStoreKey")))
@interface SPSFSPStoreKey : SPSKotlinEnum<SPSFSPStoreKey *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSFSPStoreKey *consumerId __attribute__((swift_name("consumerId")));
@property (class, readonly) SPSFSPStoreKey *authToken __attribute__((swift_name("authToken")));
@property (class, readonly) SPSFSPStoreKey *favoriteList __attribute__((swift_name("favoriteList")));
@property (class, readonly) SPSFSPStoreKey *consumer __attribute__((swift_name("consumer")));
@property (class, readonly) SPSFSPStoreKey *campaignId __attribute__((swift_name("campaignId")));
@property (class, readonly) SPSFSPStoreKey *metadata __attribute__((swift_name("metadata")));
+ (SPSKotlinArray<SPSFSPStoreKey *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSFSPStoreKey *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPStoreService")))
@interface SPSFSPStoreService : SPSBase
- (instancetype)initWithContext:(id)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (void)clear __attribute__((swift_name("clear()")));
- (SPSMutableSet<NSString *> *)getListKey:(SPSFSPStoreKey *)key __attribute__((swift_name("getList(key:)")));
- (NSString * _Nullable)getStringKey:(SPSFSPStoreKey *)key __attribute__((swift_name("getString(key:)")));
- (NSString * _Nullable)getStringKey:(SPSFSPStoreKey *)key prefix:(NSString *)prefix __attribute__((swift_name("getString(key:prefix:)")));
- (void)putInListKey:(SPSFSPStoreKey *)key value:(NSString *)value source:(SPSMutableSet<NSString *> *)source __attribute__((swift_name("putInList(key:value:source:)")));
- (void)removeFromListKey:(SPSFSPStoreKey *)key value:(NSString *)value source:(SPSMutableSet<NSString *> *)source __attribute__((swift_name("removeFromList(key:value:source:)")));
- (void)setStringKey:(SPSFSPStoreKey *)key value:(NSString * _Nullable)value __attribute__((swift_name("setString(key:value:)")));
- (void)setStringKey:(SPSFSPStoreKey *)key value:(NSString * _Nullable)value prefix:(NSString *)prefix __attribute__((swift_name("setString(key:value:prefix:)")));
@end

__attribute__((swift_name("FSPSharedViewModel")))
@interface SPSFSPSharedViewModel : SPSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SPSFSPServiceProvider *serviceProvider __attribute__((swift_name("serviceProvider")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) id<SPSKotlinx_coroutines_coreCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPSharedReceiptCaptureViewModel")))
@interface SPSFSPSharedReceiptCaptureViewModel : SPSFSPSharedViewModel
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

@interface SPSFSPStoreService (Extensions)
- (id _Nullable)getObjectKey:(SPSFSPStoreKey *)key __attribute__((swift_name("getObject(key:)")));
- (void)setObjectKey:(SPSFSPStoreKey *)key value:(id _Nullable)value __attribute__((swift_name("setObject(key:value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/LocalDateSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface SPSKotlinx_datetimeLocalDate : SPSBase <SPSKotlinComparable>
- (instancetype)initWithYear:(int32_t)year month:(int32_t)month day:(int32_t)day __attribute__((swift_name("init(year:month:day:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(SPSKotlinx_datetimeMonth *)month day_:(int32_t)day __attribute__((swift_name("init(year:month:day_:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SPSKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (SPSKotlinx_datetimeLocalDateRange *)rangeToThat:(SPSKotlinx_datetimeLocalDate *)that __attribute__((swift_name("rangeTo(that:)")));
- (SPSKotlinx_datetimeLocalDateRange *)rangeUntilThat:(SPSKotlinx_datetimeLocalDate *)that __attribute__((swift_name("rangeUntil(that:)")));
- (int64_t)toEpochDays __attribute__((swift_name("toEpochDays()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t day __attribute__((swift_name("day")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth"))) __attribute__((deprecated("Use the 'day' property instead")));
@property (readonly) SPSKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) SPSKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber"))) __attribute__((deprecated("Use the 'month' property instead")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

@interface SPSKotlinx_datetimeLocalDate (Extensions)
- (NSString *)toBasePtBRString __attribute__((swift_name("toBasePtBRString()")));
- (NSDate *)toNSDate __attribute__((swift_name("toNSDate()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPDateExtensions_iosKt")))
@interface SPSFSPDateExtensions_iosKt : SPSBase
+ (SPSKotlinx_datetimeLocalDate *)toLocalDate:(NSDate *)receiver __attribute__((swift_name("toLocalDate(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPJsonKt")))
@interface SPSFSPJsonKt : SPSBase
+ (id _Nullable)fromJson:(NSString *)receiver __attribute__((swift_name("fromJson(_:)")));
+ (NSString *)toJson:(id _Nullable)receiver __attribute__((swift_name("toJson(_:)")));
@property (class, readonly) SPSKotlinx_serialization_jsonJson *FSPJson __attribute__((swift_name("FSPJson")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FSPLocalDateKt")))
@interface SPSFSPLocalDateKt : SPSBase
+ (SPSKotlinx_datetimeLocalDate * _Nullable)fromBasePtBRString:(NSString *)receiver __attribute__((swift_name("fromBasePtBRString(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface SPSKotlinEnumCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SPSKotlinArray<T> : SPSBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SPSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SPSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface SPSKotlinThrowable : SPSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (SPSKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface SPSKotlinException : SPSKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface SPSKotlinRuntimeException : SPSKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SPSKotlinIllegalStateException : SPSKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface SPSKotlinCancellationException : SPSKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SPSKotlinUnit : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SPSKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SPSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="2.0")
*/
__attribute__((swift_name("KotlinAutoCloseable")))
@protocol SPSKotlinAutoCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol SPSKtor_ioCloseable <SPSKotlinAutoCloseable>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface SPSKtor_client_coreHttpClient : SPSBase <SPSKotlinx_coroutines_coreCoroutineScope, SPSKtor_ioCloseable>
- (instancetype)initWithEngine:(id<SPSKtor_client_coreHttpClientEngine>)engine userConfig:(SPSKtor_client_coreHttpClientConfig<SPSKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (SPSKtor_client_coreHttpClient *)configBlock:(void (^)(SPSKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<SPSKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SPSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<SPSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<SPSKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) SPSKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) SPSKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) SPSKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) SPSKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) SPSKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) SPSKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SPSKotlinx_serialization_coreEncoder
@required
- (id<SPSKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SPSKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SPSKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SPSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SPSKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SPSKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SPSKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SPSKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SPSKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SPSKotlinx_serialization_coreDecoder
@required
- (id<SPSKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SPSKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (SPSKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SPSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface SPSKotlinByteArray : SPSBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(SPSByte *(^)(SPSInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (SPSKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface SPSKotlinx_datetimeMonth : SPSKotlinEnum<SPSKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SPSKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SPSKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SPSKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SPSKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SPSKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SPSKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SPSKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SPSKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SPSKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SPSKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SPSKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (SPSKotlinArray<SPSKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSKotlinx_datetimeMonth *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface SPSKotlinx_datetimeLocalDateCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_datetimeDateTimeFormat>)FormatBlock:(void (^)(id<SPSKotlinx_datetimeDateTimeFormatBuilderWithDate>))block __attribute__((swift_name("Format(block:)")));
- (SPSKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays:(int32_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays:)")));
- (SPSKotlinx_datetimeLocalDate *)fromEpochDaysEpochDays_:(int64_t)epochDays __attribute__((swift_name("fromEpochDays(epochDays_:)")));
- (SPSKotlinx_datetimeLocalDate *)parseInput:(id)input format:(id<SPSKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("parse(input:format:)")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol SPSKotlinIterable
@required
- (id<SPSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinCollection")))
@protocol SPSKotlinCollection <SPSKotlinIterable>
@required
- (BOOL)containsElement:(id _Nullable)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_datetimeLocalDateProgression")))
@interface SPSKotlinx_datetimeLocalDateProgression : SPSBase <SPSKotlinCollection>
@property (class, readonly, getter=companion) SPSKotlinx_datetimeLocalDateProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsElement:(SPSKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsAllElements:(id)elements __attribute__((swift_name("containsAll(elements:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (id<SPSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSKotlinx_datetimeLocalDate *first __attribute__((swift_name("first")));
@property (readonly) SPSKotlinx_datetimeLocalDate *last __attribute__((swift_name("last")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol SPSKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol SPSKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateRange")))
@interface SPSKotlinx_datetimeLocalDateRange : SPSKotlinx_datetimeLocalDateProgression <SPSKotlinClosedRange, SPSKotlinOpenEndRange>
- (instancetype)initWithStart:(SPSKotlinx_datetimeLocalDate *)start endInclusive:(SPSKotlinx_datetimeLocalDate *)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKotlinx_datetimeLocalDateRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsElement:(SPSKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(element:)")));
- (BOOL)containsValue:(SPSKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(SPSKotlinx_datetimeLocalDate *)element __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSKotlinx_datetimeLocalDate *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("This throws an exception if the exclusive end if not inside the platform-specific boundaries for LocalDate. The 'endInclusive' property does not throw and should be preferred.")));
@property (readonly) SPSKotlinx_datetimeLocalDate *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) SPSKotlinx_datetimeLocalDate *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface SPSKotlinx_datetimeDayOfWeek : SPSKotlinEnum<SPSKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) SPSKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SPSKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SPSKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SPSKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) SPSKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SPSKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (SPSKotlinArray<SPSKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSKotlinx_datetimeDayOfWeek *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol SPSKotlinx_serialization_coreSerialFormat
@required
@property (readonly) SPSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol SPSKotlinx_serialization_coreStringFormat <SPSKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface SPSKotlinx_serialization_jsonJson : SPSBase <SPSKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) SPSKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(SPSKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringString:(NSString *)string __attribute__((swift_name("decodeFromString(string:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (SPSKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringValue:(id _Nullable)value __attribute__((swift_name("encodeToString(value:)")));
- (NSString *)encodeToStringSerializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (SPSKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) SPSKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) SPSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol SPSKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SPSKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SPSKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SPSKotlinCoroutineContextElement> _Nullable)getKey:(id<SPSKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SPSKotlinCoroutineContext>)minusKeyKey:(id<SPSKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SPSKotlinCoroutineContext>)plusContext:(id<SPSKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SPSKtor_client_coreHttpClientEngine <SPSKotlinx_coroutines_coreCoroutineScope, SPSKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(SPSKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(SPSKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(SPSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) SPSKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) SPSKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<SPSKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SPSKtor_client_coreHttpClientEngineConfig : SPSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SPSKotlinx_coroutines_coreCoroutineDispatcher * _Nullable dispatcher __attribute__((swift_name("dispatcher")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property SPSKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount"))) __attribute__((unavailable("The [threadsCount] property is deprecated. Consider setting [dispatcher] instead.")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface SPSKtor_client_coreHttpClientConfig<T> : SPSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SPSKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(SPSKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<SPSKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(SPSKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(SPSKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode"))) __attribute__((deprecated("Development mode is no longer required. The property will be removed in the future.")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol SPSKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SPSKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SPSKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SPSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SPSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SPSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SPSKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SPSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (void)setKey:(SPSKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("set(key:value:)")));
- (id)takeKey:(SPSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SPSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SPSKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface SPSKtor_eventsEvents : SPSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(SPSKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<SPSKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(SPSKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(SPSKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface SPSKtor_utilsPipeline<TSubject, TContext> : SPSBase
- (instancetype)initWithPhases:(SPSKotlinArray<SPSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(SPSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SPSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(SPSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(SPSKtor_utilsPipelinePhase *)reference phase:(SPSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(SPSKtor_utilsPipelinePhase *)reference phase:(SPSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(SPSKtor_utilsPipelinePhase *)phase block:(id<SPSKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<SPSKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(SPSKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(SPSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(SPSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(SPSKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SPSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<SPSKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface SPSKtor_client_coreHttpReceivePipeline : SPSKtor_utilsPipeline<SPSKtor_client_coreHttpResponse *, SPSKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SPSKotlinArray<SPSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SPSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SPSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface SPSKtor_client_coreHttpRequestPipeline : SPSKtor_utilsPipeline<id, SPSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SPSKotlinArray<SPSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SPSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SPSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface SPSKtor_client_coreHttpResponsePipeline : SPSKtor_utilsPipeline<SPSKtor_client_coreHttpResponseContainer *, SPSKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SPSKotlinArray<SPSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SPSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SPSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface SPSKtor_client_coreHttpSendPipeline : SPSKtor_utilsPipeline<id, SPSKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(SPSKotlinArray<SPSKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhase:(SPSKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<SPSKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SPSKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SPSKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SPSKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SPSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SPSKotlinx_serialization_coreSerializersModule : SPSBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<SPSKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SPSKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SPSKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SPSKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SPSKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SPSKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<SPSKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SPSKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol SPSKotlinAnnotation
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SPSKotlinx_serialization_coreSerialKind : SPSBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SPSKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SPSKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SPSKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SPSKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SPSKotlinNothing : SPSBase
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface SPSKotlinByteIterator : SPSBase <SPSKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SPSByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormat")))
@protocol SPSKotlinx_datetimeDateTimeFormat
@required
- (NSString *)formatValue:(id _Nullable)value __attribute__((swift_name("format(value:)")));
- (id<SPSKotlinAppendable>)formatToAppendable:(id<SPSKotlinAppendable>)appendable value:(id _Nullable)value __attribute__((swift_name("formatTo(appendable:value:)")));
- (id _Nullable)parseInput:(id)input __attribute__((swift_name("parse(input:)")));
- (id _Nullable)parseOrNullInput:(id)input __attribute__((swift_name("parseOrNull(input:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilder")))
@protocol SPSKotlinx_datetimeDateTimeFormatBuilder
@required
- (void)charsValue:(NSString *)value __attribute__((swift_name("chars(value:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithYearMonth")))
@protocol SPSKotlinx_datetimeDateTimeFormatBuilderWithYearMonth <SPSKotlinx_datetimeDateTimeFormatBuilder>
@required
- (void)monthNameNames:(SPSKotlinx_datetimeMonthNames *)names __attribute__((swift_name("monthName(names:)")));
- (void)monthNumberPadding:(SPSKotlinx_datetimePadding *)padding __attribute__((swift_name("monthNumber(padding:)")));
- (void)yearPadding:(SPSKotlinx_datetimePadding *)padding __attribute__((swift_name("year(padding:)")));
- (void)yearMonthFormat:(id<SPSKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("yearMonth(format:)")));
- (void)yearTwoDigitsBaseYear:(int32_t)baseYear __attribute__((swift_name("yearTwoDigits(baseYear:)")));
@end

__attribute__((swift_name("Kotlinx_datetimeDateTimeFormatBuilderWithDate")))
@protocol SPSKotlinx_datetimeDateTimeFormatBuilderWithDate <SPSKotlinx_datetimeDateTimeFormatBuilderWithYearMonth>
@required
- (void)dateFormat:(id<SPSKotlinx_datetimeDateTimeFormat>)format __attribute__((swift_name("date(format:)")));
- (void)dayPadding:(SPSKotlinx_datetimePadding *)padding __attribute__((swift_name("day(padding:)")));
- (void)dayOfMonthPadding:(SPSKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfMonth(padding:)"))) __attribute__((deprecated("Use 'day' instead")));
- (void)dayOfWeekNames:(SPSKotlinx_datetimeDayOfWeekNames *)names __attribute__((swift_name("dayOfWeek(names:)")));
- (void)dayOfYearPadding:(SPSKotlinx_datetimePadding *)padding __attribute__((swift_name("dayOfYear(padding:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateProgression.Companion")))
@interface SPSKotlinx_datetimeLocalDateProgressionCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_datetimeLocalDateProgressionCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateRange.Companion")))
@interface SPSKotlinx_datetimeLocalDateRangeCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_datetimeLocalDateRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SPSKotlinx_datetimeLocalDateRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface SPSKotlinx_serialization_jsonJsonDefault : SPSKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface SPSKotlinx_serialization_jsonJsonElement : SPSBase
@property (class, readonly, getter=companion) SPSKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface SPSKotlinx_serialization_jsonJsonConfiguration : SPSBase
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowComments __attribute__((swift_name("allowComments")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL allowTrailingComma __attribute__((swift_name("allowTrailingComma")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property SPSKotlinx_serialization_jsonClassDiscriminatorMode *classDiscriminatorMode __attribute__((swift_name("classDiscriminatorMode")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL decodeEnumsCaseInsensitive __attribute__((swift_name("decodeEnumsCaseInsensitive")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) id<SPSKotlinx_serialization_jsonJsonNamingStrategy> _Nullable namingStrategy __attribute__((swift_name("namingStrategy")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SPSKotlinCoroutineContextElement <SPSKotlinCoroutineContext>
@required
@property (readonly) id<SPSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SPSKotlinCoroutineContextKey
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SPSKtor_client_coreHttpRequestData : SPSBase
- (instancetype)initWithUrl:(SPSKtor_httpUrl *)url method:(SPSKtor_httpHttpMethod *)method headers:(id<SPSKtor_httpHeaders>)headers body:(SPSKtor_httpOutgoingContent *)body executionContext:(id<SPSKotlinx_coroutines_coreJob>)executionContext attributes:(id<SPSKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<SPSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SPSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SPSKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<SPSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<SPSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SPSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SPSKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface SPSKtor_client_coreHttpResponseData : SPSBase
- (instancetype)initWithStatusCode:(SPSKtor_httpHttpStatusCode *)statusCode requestTime:(SPSKtor_utilsGMTDate *)requestTime headers:(id<SPSKtor_httpHeaders>)headers version:(SPSKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<SPSKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<SPSKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<SPSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SPSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SPSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SPSKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SPSKotlinAbstractCoroutineContextElement : SPSBase <SPSKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SPSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SPSKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SPSKotlinContinuationInterceptor <SPSKotlinCoroutineContextElement>
@required
- (id<SPSKotlinContinuation>)interceptContinuationContinuation:(id<SPSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SPSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface SPSKotlinx_coroutines_coreCoroutineDispatcher : SPSKotlinAbstractCoroutineContextElement <SPSKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SPSKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<SPSKotlinCoroutineContext>)context block:(id<SPSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)dispatchYieldContext:(id<SPSKotlinCoroutineContext>)context block:(id<SPSKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<SPSKotlinContinuation>)interceptContinuationContinuation:(id<SPSKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<SPSKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SPSKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism name:(NSString * _Nullable)name __attribute__((swift_name("limitedParallelism(parallelism:name:)")));
- (SPSKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(SPSKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<SPSKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface SPSKtor_client_coreProxyConfig : SPSBase
- (instancetype)initWithUrl:(SPSKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol SPSKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(SPSKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) SPSKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SPSKtor_utilsAttributeKey<T> : SPSBase

/**
 * @note annotations
 *   kotlin.jvm.JvmOverloads
*/
- (instancetype)initWithName:(NSString *)name type:(SPSKtor_utilsTypeInfo *)type __attribute__((swift_name("init(name:type:)"))) __attribute__((objc_designated_initializer));
- (SPSKtor_utilsAttributeKey<T> *)doCopyName:(NSString *)name type:(SPSKtor_utilsTypeInfo *)type __attribute__((swift_name("doCopy(name:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface SPSKtor_eventsEventDefinition<T> : SPSBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol SPSKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface SPSKtor_utilsPipelinePhase : SPSBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol SPSKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol SPSKotlinSuspendFunction2 <SPSKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface SPSKtor_client_coreHttpReceivePipelinePhases : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SPSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SPSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SPSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol SPSKtor_httpHttpMessage
@required
@property (readonly) id<SPSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface SPSKtor_client_coreHttpResponse : SPSBase <SPSKtor_httpHttpMessage, SPSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<SPSKtor_ioByteReadChannel> rawContent __attribute__((swift_name("rawContent")));
@property (readonly) SPSKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) SPSKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) SPSKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface SPSKtor_client_coreHttpRequestPipelinePhases : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SPSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SPSKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) SPSKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) SPSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SPSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SPSKtor_httpHttpMessageBuilder
@required
@property (readonly) SPSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SPSKtor_client_coreHttpRequestBuilder : SPSBase <SPSKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SPSKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SPSKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<SPSKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<SPSKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<SPSKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (SPSKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SPSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (SPSKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(SPSKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(SPSKtor_httpURLBuilder *, SPSKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<SPSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property SPSKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<SPSKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) SPSKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property SPSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SPSKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface SPSKtor_client_coreHttpResponsePipelinePhases : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SPSKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) SPSKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) SPSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SPSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) SPSKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface SPSKtor_client_coreHttpResponseContainer : SPSBase
- (instancetype)initWithExpectedType:(SPSKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (SPSKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(SPSKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SPSKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface SPSKtor_client_coreHttpClientCall : SPSBase <SPSKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(SPSKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(SPSKtor_client_coreHttpClient *)client requestData:(SPSKtor_client_coreHttpRequestData *)requestData responseData:(SPSKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(SPSKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(SPSKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<SPSKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<SPSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SPSKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<SPSKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<SPSKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property SPSKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface SPSKtor_client_coreHttpSendPipelinePhases : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) SPSKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) SPSKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) SPSKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) SPSKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) SPSKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SPSKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SPSKotlinKClass>)kClass provider:(id<SPSKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SPSKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SPSKotlinKClass>)kClass serializer:(id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SPSKotlinKClass>)baseClass actualClass:(id<SPSKotlinKClass>)actualClass actualSerializer:(id<SPSKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SPSKotlinKClass>)baseClass defaultDeserializerProvider:(id<SPSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SPSKotlinKClass>)baseClass defaultDeserializerProvider:(id<SPSKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SPSKotlinKClass>)baseClass defaultSerializerProvider:(id<SPSKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SPSKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SPSKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol SPSKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol SPSKotlinKClass <SPSKotlinKDeclarationContainer, SPSKotlinKAnnotatedElement, SPSKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol SPSKotlinAppendable
@required
- (id<SPSKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<SPSKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<SPSKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimePadding")))
@interface SPSKotlinx_datetimePadding : SPSKotlinEnum<SPSKotlinx_datetimePadding *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSKotlinx_datetimePadding *none __attribute__((swift_name("none")));
@property (class, readonly) SPSKotlinx_datetimePadding *zero __attribute__((swift_name("zero")));
@property (class, readonly) SPSKotlinx_datetimePadding *space __attribute__((swift_name("space")));
+ (SPSKotlinArray<SPSKotlinx_datetimePadding *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSKotlinx_datetimePadding *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames")))
@interface SPSKotlinx_datetimeDayOfWeekNames : SPSBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMonday:(NSString *)monday tuesday:(NSString *)tuesday wednesday:(NSString *)wednesday thursday:(NSString *)thursday friday:(NSString *)friday saturday:(NSString *)saturday sunday:(NSString *)sunday __attribute__((swift_name("init(monday:tuesday:wednesday:thursday:friday:saturday:sunday:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKotlinx_datetimeDayOfWeekNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames")))
@interface SPSKotlinx_datetimeMonthNames : SPSBase
- (instancetype)initWithNames:(NSArray<NSString *> *)names __attribute__((swift_name("init(names:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithJanuary:(NSString *)january february:(NSString *)february march:(NSString *)march april:(NSString *)april may:(NSString *)may june:(NSString *)june july:(NSString *)july august:(NSString *)august september:(NSString *)september october:(NSString *)october november:(NSString *)november december:(NSString *)december __attribute__((swift_name("init(january:february:march:april:may:june:july:august:september:october:november:december:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKotlinx_datetimeMonthNamesCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *names __attribute__((swift_name("names")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface SPSKotlinx_serialization_jsonJsonElementCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonClassDiscriminatorMode")))
@interface SPSKotlinx_serialization_jsonClassDiscriminatorMode : SPSKotlinEnum<SPSKotlinx_serialization_jsonClassDiscriminatorMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSKotlinx_serialization_jsonClassDiscriminatorMode *none __attribute__((swift_name("none")));
@property (class, readonly) SPSKotlinx_serialization_jsonClassDiscriminatorMode *allJsonObjects __attribute__((swift_name("allJsonObjects")));
@property (class, readonly) SPSKotlinx_serialization_jsonClassDiscriminatorMode *polymorphic __attribute__((swift_name("polymorphic")));
+ (SPSKotlinArray<SPSKotlinx_serialization_jsonClassDiscriminatorMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSKotlinx_serialization_jsonClassDiscriminatorMode *> *entries __attribute__((swift_name("entries")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonNamingStrategy")))
@protocol SPSKotlinx_serialization_jsonJsonNamingStrategy
@required
- (NSString *)serialNameForJsonDescriptor:(id<SPSKotlinx_serialization_coreSerialDescriptor>)descriptor elementIndex:(int32_t)elementIndex serialName:(NSString *)serialName __attribute__((swift_name("serialNameForJson(descriptor:elementIndex:serialName:)")));
@end

__attribute__((swift_name("Ktor_ioJvmSerializable")))
@protocol SPSKtor_ioJvmSerializable
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=io/ktor/http/UrlSerializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SPSKtor_httpUrl : SPSBase <SPSKtor_ioJvmSerializable>
@property (class, readonly, getter=companion) SPSKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SPSKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments"))) __attribute__((deprecated("\n        `pathSegments` is deprecated.\n\n        This property will contain an empty path segment at the beginning for URLs with a hostname,\n        and an empty path segment at the end for the URLs with a trailing slash. If you need to keep this behaviour please\n        use [rawSegments]. If you only need to access the meaningful parts of the path, consider using [segments] instead.\n             \n        Please decide if you need [rawSegments] or [segments] explicitly.\n        ")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) SPSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) SPSKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property (readonly) NSArray<NSString *> *rawSegments __attribute__((swift_name("rawSegments")));
@property (readonly) NSArray<NSString *> *segments __attribute__((swift_name("segments")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SPSKtor_httpHttpMethod : SPSBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (SPSKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SPSKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SPSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SPSKtor_httpHeaders <SPSKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface SPSKtor_httpOutgoingContent : SPSBase
- (id _Nullable)getPropertyKey:(SPSKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(SPSKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<SPSKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) SPSLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) SPSKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<SPSKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) SPSKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol SPSKotlinx_coroutines_coreJob <SPSKotlinCoroutineContextElement>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SPSKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<SPSKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(SPSKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SPSKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SPSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(SPSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (id<SPSKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(SPSKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<SPSKotlinx_coroutines_coreJob>)plusOther_:(id<SPSKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start_ __attribute__((swift_name("start()")));
@property (readonly) id<SPSKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<SPSKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
@property (readonly) id<SPSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface SPSKtor_httpHttpStatusCode : SPSBase <SPSKotlinComparable>
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SPSKtor_httpHttpStatusCode *)other __attribute__((swift_name("compareTo(other:)")));
- (SPSKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (SPSKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface SPSKtor_utilsGMTDate : SPSBase <SPSKotlinComparable>
- (instancetype)initWithSeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SPSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SPSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("init(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(SPSKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (SPSKtor_utilsGMTDate *)doCopy __attribute__((swift_name("doCopy()")));
- (SPSKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(SPSKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(SPSKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) SPSKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) SPSKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface SPSKtor_httpHttpProtocolVersion : SPSBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (SPSKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol SPSKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SPSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface SPSKotlinAbstractCoroutineContextKey<B, E> : SPSBase <SPSKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<SPSKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<SPSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface SPSKotlinx_coroutines_coreCoroutineDispatcherKey : SPSKotlinAbstractCoroutineContextKey<id<SPSKotlinContinuationInterceptor>, SPSKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<SPSKotlinCoroutineContextKey>)baseKey safeCast:(id<SPSKotlinCoroutineContextElement> _Nullable (^)(id<SPSKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol SPSKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface SPSKtor_utilsTypeInfo : SPSBase
- (instancetype)initWithType:(id<SPSKotlinKClass>)type kotlinType:(id<SPSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithType:(id<SPSKotlinKClass>)type reifiedType:(id<SPSKotlinKType>)reifiedType kotlinType:(id<SPSKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("Use constructor without reifiedType parameter.")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SPSKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<SPSKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol SPSKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentMin:(int32_t)min completionHandler:(void (^)(SPSBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(min:completionHandler:)")));
- (void)cancelCause_:(SPSKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
@property (readonly) SPSKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) id<SPSKotlinx_io_coreSource> readBuffer __attribute__((swift_name("readBuffer")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol SPSKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SPSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SPSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SPSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SPSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface SPSKtor_utilsStringValuesBuilderImpl : SPSBase <SPSKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SPSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SPSKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SPSKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SPSKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) SPSMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SPSKtor_httpHeadersBuilder : SPSKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SPSKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface SPSKtor_client_coreHttpRequestBuilderCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SPSKtor_httpURLBuilder : SPSBase
- (instancetype)initWithProtocol:(SPSKtor_httpURLProtocol * _Nullable)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<SPSKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (SPSKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<SPSKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<SPSKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property SPSKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property SPSKtor_httpURLProtocol * _Nullable protocolOrNull __attribute__((swift_name("protocolOrNull")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface SPSKtor_client_coreHttpClientCallCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol SPSKtor_client_coreHttpRequest <SPSKtor_httpHttpMessage, SPSKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<SPSKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) SPSKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) SPSKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) SPSKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) SPSKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeekNames.Companion")))
@interface SPSKotlinx_datetimeDayOfWeekNamesCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_datetimeDayOfWeekNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SPSKotlinx_datetimeDayOfWeekNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SPSKotlinx_datetimeDayOfWeekNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonthNames.Companion")))
@interface SPSKotlinx_datetimeMonthNamesCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinx_datetimeMonthNamesCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SPSKotlinx_datetimeMonthNames *ENGLISH_ABBREVIATED __attribute__((swift_name("ENGLISH_ABBREVIATED")));
@property (readonly) SPSKotlinx_datetimeMonthNames *ENGLISH_FULL __attribute__((swift_name("ENGLISH_FULL")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface SPSKtor_httpUrlCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SPSKtor_httpParameters <SPSKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SPSKtor_httpURLProtocol : SPSBase <SPSKtor_ioJvmSerializable>
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (SPSKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface SPSKtor_httpHttpMethodCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (SPSKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<SPSKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) SPSKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) SPSKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) SPSKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) SPSKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) SPSKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) SPSKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) SPSKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol SPSKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface SPSKtor_httpHeaderValueWithParameters : SPSBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SPSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<SPSKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface SPSKtor_httpContentType : SPSKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<SPSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<SPSKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(SPSKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (SPSKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (SPSKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol SPSKotlinx_coroutines_coreChildHandle <SPSKotlinx_coroutines_coreDisposableHandle>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (BOOL)childCancelledCause:(SPSKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
@property (readonly) id<SPSKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol SPSKotlinx_coroutines_coreChildJob <SPSKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (void)parentCancelledParentJob:(id<SPSKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol SPSKotlinSequence
@required
- (id<SPSKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause")))
@protocol SPSKotlinx_coroutines_coreSelectClause
@required
@property (readonly) id clauseObject __attribute__((swift_name("clauseObject")));
@property (readonly) SPSKotlinUnit *(^(^ _Nullable onCancellationConstructor)(id<SPSKotlinx_coroutines_coreSelectInstance>, id _Nullable, id _Nullable))(SPSKotlinThrowable *, id _Nullable, id<SPSKotlinCoroutineContext>) __attribute__((swift_name("onCancellationConstructor")));
@property (readonly) id _Nullable (^processResFunc)(id, id _Nullable, id _Nullable) __attribute__((swift_name("processResFunc")));
@property (readonly) void (^regFunc)(id, id<SPSKotlinx_coroutines_coreSelectInstance>, id _Nullable) __attribute__((swift_name("regFunc")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol SPSKotlinx_coroutines_coreSelectClause0 <SPSKotlinx_coroutines_coreSelectClause>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface SPSKtor_httpHttpStatusCodeCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (SPSKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) SPSKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) SPSKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) SPSKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) SPSKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) SPSKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) SPSKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) SPSKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) SPSKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) SPSKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) SPSKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) SPSKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) SPSKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) SPSKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) SPSKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) SPSKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) SPSKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) SPSKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) SPSKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) SPSKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) SPSKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) SPSKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) SPSKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) SPSKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) SPSKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) SPSKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) SPSKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) SPSKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) SPSKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) SPSKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) SPSKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) SPSKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) SPSKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) SPSKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) SPSKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) SPSKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) SPSKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) SPSKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) SPSKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) SPSKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) SPSKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) SPSKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) SPSKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) SPSKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) SPSKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) SPSKtor_httpHttpStatusCode *TooEarly __attribute__((swift_name("TooEarly")));
@property (readonly) SPSKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) SPSKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) SPSKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) SPSKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) SPSKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) SPSKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) SPSKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) SPSKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<SPSKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface SPSKtor_utilsWeekDay : SPSKotlinEnum<SPSKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SPSKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) SPSKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) SPSKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) SPSKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) SPSKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) SPSKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) SPSKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (SPSKotlinArray<SPSKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSKtor_utilsWeekDay *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface SPSKtor_utilsMonth : SPSKotlinEnum<SPSKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) SPSKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) SPSKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) SPSKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) SPSKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) SPSKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) SPSKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) SPSKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) SPSKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) SPSKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) SPSKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) SPSKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) SPSKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) SPSKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (SPSKotlinArray<SPSKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSKtor_utilsMonth *> *entries __attribute__((swift_name("entries")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface SPSKtor_utilsGMTDateCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
- (id<SPSKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) SPSKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface SPSKtor_httpHttpProtocolVersionCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (SPSKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (SPSKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *HTTP_3_0 __attribute__((swift_name("HTTP_3_0")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) SPSKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol SPSKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<SPSKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<SPSKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSource")))
@protocol SPSKotlinx_io_coreRawSource <SPSKotlinAutoCloseable>
@required
- (int64_t)readAtMostToSink:(SPSKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSource")))
@protocol SPSKotlinx_io_coreSource <SPSKotlinx_io_coreRawSource>
@required
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (id<SPSKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int32_t)readAtMostToSink:(SPSKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SPSKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (int64_t)transferToSink:(id<SPSKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SPSKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface SPSKtor_httpURLBuilderCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol SPSKtor_httpParametersBuilder <SPSKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface SPSKtor_httpURLProtocolCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (SPSKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) SPSKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) SPSKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) SPSKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) SPSKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) SPSKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, SPSKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface SPSKtor_httpHeaderValueParam : SPSBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (SPSKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface SPSKtor_httpHeaderValueWithParametersCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<SPSKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface SPSKtor_httpContentTypeCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (SPSKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) SPSKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol SPSKotlinx_coroutines_coreParentJob <SPSKotlinx_coroutines_coreJob>
@required

/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
- (SPSKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end


/**
 * @note annotations
 *   kotlinx.coroutines.InternalCoroutinesApi
*/
__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol SPSKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnCompletionDisposableHandle:(id<SPSKotlinx_coroutines_coreDisposableHandle>)disposableHandle __attribute__((swift_name("disposeOnCompletion(disposableHandle:)")));
- (void)selectInRegistrationPhaseInternalResult:(id _Nullable)internalResult __attribute__((swift_name("selectInRegistrationPhase(internalResult:)")));
- (BOOL)trySelectClauseObject:(id)clauseObject result:(id _Nullable)result __attribute__((swift_name("trySelect(clauseObject:result:)")));
@property (readonly) id<SPSKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface SPSKtor_utilsWeekDayCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (SPSKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SPSKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface SPSKtor_utilsMonthCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (SPSKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (SPSKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface SPSKotlinKTypeProjection : SPSBase
- (instancetype)initWithVariance:(SPSKotlinKVariance * _Nullable)variance type:(id<SPSKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SPSKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (SPSKotlinKTypeProjection *)doCopyVariance:(SPSKotlinKVariance * _Nullable)variance type:(id<SPSKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<SPSKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) SPSKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((swift_name("Kotlinx_io_coreRawSink")))
@protocol SPSKotlinx_io_coreRawSink <SPSKotlinAutoCloseable>
@required
- (void)flush __attribute__((swift_name("flush()")));
- (void)writeSource:(SPSKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
@end

__attribute__((swift_name("Kotlinx_io_coreSink")))
@protocol SPSKotlinx_io_coreSink <SPSKotlinx_io_coreRawSink>
@required
- (void)emit __attribute__((swift_name("emit()")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (int64_t)transferFromSource:(id<SPSKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (void)writeSource:(id<SPSKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SPSKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SPSKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_io_coreBuffer")))
@interface SPSKotlinx_io_coreBuffer : SPSBase <SPSKotlinx_io_coreSource, SPSKotlinx_io_coreSink>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (SPSKotlinx_io_coreBuffer *)doCopy __attribute__((swift_name("doCopy()")));
- (void)doCopyToOut:(SPSKotlinx_io_coreBuffer *)out startIndex:(int64_t)startIndex endIndex:(int64_t)endIndex __attribute__((swift_name("doCopyTo(out:startIndex:endIndex:)")));
- (void)emit __attribute__((swift_name("emit()")));
- (BOOL)exhausted __attribute__((swift_name("exhausted()")));
- (void)flush __attribute__((swift_name("flush()")));
- (int8_t)getPosition:(int64_t)position __attribute__((swift_name("get(position:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
- (void)hintEmit __attribute__((swift_name("hintEmit()")));
- (id<SPSKotlinx_io_coreSource>)peek __attribute__((swift_name("peek()")));
- (int64_t)readAtMostToSink:(SPSKotlinx_io_coreBuffer *)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readAtMostTo(sink:byteCount:)")));
- (int32_t)readAtMostToSink:(SPSKotlinByteArray *)sink startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("readAtMostTo(sink:startIndex:endIndex:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (int32_t)readInt __attribute__((swift_name("readInt()")));
- (int64_t)readLong __attribute__((swift_name("readLong()")));
- (int16_t)readShort __attribute__((swift_name("readShort()")));
- (void)readToSink:(id<SPSKotlinx_io_coreRawSink>)sink byteCount:(int64_t)byteCount __attribute__((swift_name("readTo(sink:byteCount:)")));
- (BOOL)requestByteCount:(int64_t)byteCount __attribute__((swift_name("request(byteCount:)")));
- (void)requireByteCount:(int64_t)byteCount __attribute__((swift_name("require(byteCount:)")));
- (void)skipByteCount:(int64_t)byteCount __attribute__((swift_name("skip(byteCount:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int64_t)transferFromSource:(id<SPSKotlinx_io_coreRawSource>)source __attribute__((swift_name("transferFrom(source:)")));
- (int64_t)transferToSink:(id<SPSKotlinx_io_coreRawSink>)sink __attribute__((swift_name("transferTo(sink:)")));
- (void)writeSource:(SPSKotlinx_io_coreBuffer *)source byteCount:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount:)")));
- (void)writeSource:(id<SPSKotlinx_io_coreRawSource>)source byteCount_:(int64_t)byteCount __attribute__((swift_name("write(source:byteCount_:)")));
- (void)writeSource:(SPSKotlinByteArray *)source startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("write(source:startIndex:endIndex:)")));
- (void)writeByteByte:(int8_t)byte __attribute__((swift_name("writeByte(byte:)")));
- (void)writeIntInt:(int32_t)int_ __attribute__((swift_name("writeInt(int:)")));
- (void)writeLongLong:(int64_t)long_ __attribute__((swift_name("writeLong(long:)")));
- (void)writeShortShort:(int16_t)short_ __attribute__((swift_name("writeShort(short:)")));

/**
 * @note annotations
 *   kotlinx.io.InternalIoApi
*/
@property (readonly) SPSKotlinx_io_coreBuffer *buffer __attribute__((swift_name("buffer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface SPSKotlinKVariance : SPSKotlinEnum<SPSKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SPSKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) SPSKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) SPSKotlinKVariance *out __attribute__((swift_name("out")));
+ (SPSKotlinArray<SPSKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<SPSKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface SPSKotlinKTypeProjectionCompanion : SPSBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SPSKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SPSKotlinKTypeProjection *)contravariantType:(id<SPSKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SPSKotlinKTypeProjection *)covariantType:(id<SPSKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (SPSKotlinKTypeProjection *)invariantType:(id<SPSKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) SPSKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END

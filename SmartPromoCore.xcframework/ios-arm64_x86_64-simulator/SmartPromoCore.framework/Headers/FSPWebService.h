//
//  FSPWebService.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/03/21.
//

#import <UIKit/UIKit.h>
#import "FSPPrompt.h"

typedef void(^FSPResponse)(NSString * _Nullable json, BOOL success, NSInteger statusCode);
typedef void(^FSPSimpleResponse)(BOOL success);
typedef void(^FSPStringResponse)(NSString* _Nullable string, BOOL success);
typedef void(^FSPPromptResponse)(FSPPrompt* _Nullable prompt, BOOL success);

typedef NSDictionary<NSString *,NSString *> HTTPHeaders;

@interface FSPWebService : NSObject

@property NSString * _Nullable accessKey;

+ (instancetype _Nonnull) shared;

@property BOOL isHomolog;
@property NSString * _Nullable metadata;

- (NSString* _Nonnull) smartPromoURL;

- (void) setupAccessKey: (NSString* _Nonnull) accessKey
           andSecretKey: (NSString* _Nonnull) secretKey;

- (void)requestURL: (NSString* _Nonnull) url
        withMethod: (NSString* _Nonnull) method
     andConsumerID: (NSString* _Nullable) consumerID
      andAuthToken: (NSString* _Nullable) authToken
           andBody: (id _Nullable) body
     andCompletion: (FSPResponse _Nonnull) completion;

- (void)requestURL: (NSString* _Nonnull) url
        withMethod: (NSString* _Nonnull) method
     andConsumerID: (NSString* _Nullable) consumerID
      andAuthToken: (NSString* _Nullable) authToken
           andBody: (NSDictionary* _Nullable) body
             image: (nullable UIImage*) image
      maxImageSize: (NSInteger) maxImageSize
     andCompletion: (FSPResponse _Nonnull) completion;

- (nullable id) fromJson:(NSString*_Nonnull) json;

- (NSString* _Nullable) jsonFromFile: (NSString* _Nonnull) filename;

@end

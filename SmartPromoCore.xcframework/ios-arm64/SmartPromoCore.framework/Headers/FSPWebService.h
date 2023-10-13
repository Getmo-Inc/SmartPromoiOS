//
//  FSPWebService.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/03/21.
//

#import <UIKit/UIKit.h>

extern bool MOCK_ENABLED;

typedef void(^FSPResponse)(NSString * _Nullable json, BOOL success);
typedef void(^FSPSimpleResponse)(BOOL success);
typedef void(^FSPStringResponse)(NSString* _Nullable string, BOOL success);

typedef NSDictionary<NSString *,NSString *> HTTPHeaders;

@interface FSPWebService : NSObject

@property NSString * _Nullable accessKey;

+ (instancetype _Nonnull) shared;

@property BOOL isHomolog;

- (NSString* _Nonnull) smartPromoURL;

- (void) setupAccessKey: (NSString* _Nonnull) accessKey
           andSecretKey: (NSString* _Nonnull) secretKey;

- (void) requestURL: (NSString* _Nonnull) url
        uploadImage: (UIImage* _Nonnull) image
      andCompletion: (FSPStringResponse _Nonnull) completion;

- (void)requestURL: (NSString* _Nonnull) url
        withMethod: (NSString* _Nonnull) method
     andConsumerID: (NSString* _Nullable) consumerID
      andAuthToken: (NSString* _Nullable) authToken
           andBody: (id _Nullable) body
     andCompletion: (FSPResponse _Nonnull) completion;

- (nullable id) fromJson:(NSString*_Nonnull) json;

- (void) addMock: (NSString* _Nonnull) url jsonFile:(NSString* _Nonnull) jsonFile;
- (void) removeMock: (NSString* _Nonnull) url;

- (NSString* _Nullable) jsonFromFile: (NSString* _Nonnull) filename;

@end

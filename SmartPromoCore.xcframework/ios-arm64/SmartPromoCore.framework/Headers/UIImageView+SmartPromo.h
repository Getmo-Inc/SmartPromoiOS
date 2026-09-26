//
//  UIView+SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 10/09/23.
//

#import <UIKit/UIKit.h>

@interface UIImageView (SmartPromo)

/// Shows a shimmer skeleton while the image loads. Already applied by `setImageURL:`;
/// call it directly when loading through SDWebImage.
- (void) enableLoadingShimmer;

- (void) setImageURL: (NSString*) url;
- (void) setImageURL: (NSString*) url completion: (void (^)(UIImage * _Nullable image))completion;

@end

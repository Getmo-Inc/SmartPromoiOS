//
//  FSPDispatchQueue+SmartPromo.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 01/18/21.
//

#import <Foundation/Foundation.h>

typedef void (^FSPBlock)(void);

@interface FSPDispatchQueue: NSObject

+ (void) runInBackground: (dispatch_block_t) block;
+ (void) runInMain: (dispatch_block_t) block;
+ (void) runInMainAfter: (int) delay block: (dispatch_block_t) block;

@end


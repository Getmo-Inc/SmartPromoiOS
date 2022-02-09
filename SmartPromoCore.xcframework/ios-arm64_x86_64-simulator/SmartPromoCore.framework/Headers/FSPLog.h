//
//  FSPLog.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 09/30/21.
//

#import <Foundation/Foundation.h>

@import Foundation.NSString;

void z_DebugLog(NSString *statement);

#define FSPLog(format_string,...) \
    ((z_DebugLog([NSString stringWithFormat:format_string,##__VA_ARGS__])))

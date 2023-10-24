//
//  FSPPrize.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 05/18/21.
//

#import <Foundation/Foundation.h>
#import "FSPMessage.h"
#import "FSPFilter.h"

@interface FSPPrize : NSObject

@property NSAttributedString *messageAttributed;
@property NSString *primaryAction;
@property NSArray *items;
@property NSArray *chooseItems;
@property int pending;
@property BOOL needsPayment;
@property FSPMessage* shareDataToPayMessage;
@property FSPMessage* chooseItemToPayMessage;
@property FSPFilter* filter;

+ (FSPPrize*) fromDict:(NSDictionary*) dict;
- (void) markAllAsPaid;

@end


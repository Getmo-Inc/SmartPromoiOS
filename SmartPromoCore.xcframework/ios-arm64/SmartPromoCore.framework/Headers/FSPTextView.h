//
//  FSPTextView.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 10/02/23.
//

#import <UIKit/UIKit.h>
#import "FSPThemed.h"

@interface FSPTextView : UITextView

@property (nonatomic, strong) id<FSPThemed> themed;

@end

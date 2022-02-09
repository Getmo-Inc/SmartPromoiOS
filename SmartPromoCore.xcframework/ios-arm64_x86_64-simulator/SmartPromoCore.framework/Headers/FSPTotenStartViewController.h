//
//  FSPTotenStartViewController.h
//  SmartPromo
//
//  Created by Rodrigo Busata on 08/29/21.
//

#import <UIKit/UIKit.h>
#import "FSPMainViewController.h"
#import "FSPTotenConfig.h"

@interface FSPTotenStartViewController : FSPBaseHomeViewController

+ (FSPTotenStartViewController*) instanceWithConfig: (FSPTotenConfig*) config;

@end


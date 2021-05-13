//
//  ViewController.m
//  ExampleObjc
//
//  Created by Rodrigo Busata on 05/12/21.
//

#import "ViewController.h"
#import <SmartPromo/SmartPromo.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)actionOpen:(id)sender {
    SmartPromo* smartPromo = [[SmartPromo alloc] init: @"{campaignID}"];
    [smartPromo setupAccessKey:@"{accessKey}"
                  andSecretKey:@"{secretKey}"];
    
    [smartPromo setColor: UIColor.systemOrangeColor];
    
    FSPConsumer* consumer = [FSPConsumer new];
    consumer.cpf = @"{cpf}";
    [smartPromo setConsumer:consumer];
    
    [smartPromo go:self];
}

@end

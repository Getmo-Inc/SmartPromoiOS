//
//  ViewController.m
//  ExampleObjc
//
//  Created by Rodrigo Busata on 05/12/21.
//

#import "ViewController.h"
#import <SmartPromo/SmartPromo.h>

@interface ViewController ()<SmartPromoDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)actionOpen:(id)sender {
    SmartPromo* smartPromo = [SmartPromo new];
    smartPromo.delegate = self;
    
    [smartPromo setupAccessKey:@"{accessKey}"
                  andSecretKey:@"{secretKey}"];
    
    FSPConsumer* consumer = [FSPConsumer new];
    consumer.cpf = @"{cpf}";
    [smartPromo setConsumer:consumer];
    
    [smartPromo go:@"{campaignID}" above: self];
}

- (void)smartPromoDidReceiveEvent:(NSString *)eventKey values:(NSDictionary<NSString *,id> *)values {
    NSLog(@"[SmartPromo] Event received: %@", eventKey);
    
    if (values.count > 0) {
        NSLog(@"[SmartPromo] Event values: %@", values);
    } else {
        NSLog(@"[SmartPromo] No values attached to event");
    }
}

@end

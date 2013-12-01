//
//  MolpayViewController.m
//  MOLPay
//
//  Created by Fahrul Azmi on 11/29/13.
//  Copyright (c) 2013 Fahrul Azmi. All rights reserved.
//

#import "MolpayViewController.h"

@interface MolpayViewController ()

@end

@implementation MolpayViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	
    NSLog(@"Initializing MOLPay...");
    // initialize molpay
    MOLPayLib *molpay = [[MOLPayLib alloc]init];
    molpay.delegateViewController = self;
    
    NSLog(@"Autheticating MOLPay");
    // authentication
    if( [molpay Authetication_MachantID:@"molpaydebug"
                    Verification_Phrase:@"86e9772fc254b73de1a1bb6cfa24e3ac"
                               app_name:@"wilwe_makan2"])
    {
        NSLog(@"Success");
    }
    else{
        NSLog(@"Failed");
    }
    
    NSLog(@"Sending payment data to MOLPay");
    // send payment data
    [molpay Payment_amount:@"2.00"
                   orderid:@"000000"
                   country:@"MY"
                       cur:@"MYR"
               merchant_id:@"molpaydebug"
                     vcode:@"86e9772fc254b73de1a1bb6cfa24e3ac"
                   channel:@"multi"
                 bill_name:@"Fahrul Azmi"
                bill_email:@"fahrulazmi@gmail.com"
               bill_mobile:@"01766666666"
                  app_name:@"wilwe_makan2"
                 bill_desc:@"Purchase of 5 units of nasi lemak kits"
                   msgType:@"B3"];
    
}

- (void) viewWillDisappear:(BOOL)animated
{
    NSLog(@"Trying to remove molpay");
    
    // get the top most view and find the fucking stupid UIWebView
    // presented by MOLPay
    for (UIWindow *window in [UIApplication sharedApplication].windows){
        UIView *topView = [[window subviews] lastObject];
        
        BOOL foundMolpay = NO;
        for (UIView *view in [topView subviews]) {
            if ([view isKindOfClass:[UIWebView class]]) {
                NSLog(@"Found it!");
                foundMolpay = YES;
                
                [view removeFromSuperview];
                break;
            }
        }
        
        if (foundMolpay) {
            break;
        }
    }
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

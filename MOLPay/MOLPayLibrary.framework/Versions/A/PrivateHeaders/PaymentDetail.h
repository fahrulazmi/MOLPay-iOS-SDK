//
//  PaymentDetail.h
//  MolPay_IOS
//
//  Created by NG YUAN JUN on 1/25/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PaymentDetail : NSObject
{
    NSString *amount;
    NSString *orderid;
    NSString *country;
    NSString *cur;
    NSString *merchant_id;
    NSString *vcode;
    NSString *channel;
    NSString *bill_name;
    NSString *bill_email;
    NSString *bill_mobile;
    NSString *app_name;
    NSString *bill_desc;
    NSString *msgType;
}
@property (nonatomic,retain)    NSString *amount;
@property (nonatomic,retain)  NSString *orderid;
@property (nonatomic,retain)  NSString *country;
@property (nonatomic,retain)  NSString *cur;
@property (nonatomic,retain)  NSString *merchant_id;
@property (nonatomic,retain)  NSString *vcode;
@property (nonatomic,retain)  NSString *channel;
@property (nonatomic,retain)  NSString *bill_name;
@property (nonatomic,retain)  NSString *bill_email;
@property (nonatomic,retain)  NSString *bill_mobile;
@property (nonatomic,retain)  NSString *app_name;
@property (nonatomic,retain)  NSString *bill_desc;
@property (nonatomic,retain)  NSString *msgType;
@end

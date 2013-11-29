//
//  AfterPayPaymentDetail.h
//  MolPay_IOS
//
//  Created by NG YUAN JUN on 1/25/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AfterPayPaymentDetail : NSObject
{
    NSString *txn_ID;
    NSString *amount;
    NSString *status_code;
    NSString *err_desc;
    NSString *app_code;
    NSString *chksum;
    NSString *msgType;
    
}

@property (nonatomic,retain)NSString *txn_ID;
@property (nonatomic,retain)NSString *amount;
@property (nonatomic,retain)NSString *status_code;
@property (nonatomic,retain)NSString *err_desc;
@property (nonatomic,retain)NSString *app_code;
@property (nonatomic,retain)NSString *chksum;
@property (nonatomic,retain)NSString *msgType;
@end

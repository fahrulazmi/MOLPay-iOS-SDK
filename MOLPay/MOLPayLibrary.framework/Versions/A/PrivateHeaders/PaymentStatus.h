//
//  PaymentStatus.h
//  MolPay_IOS
//
//  Created by NG YUAN JUN on 1/25/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PaymentStatus : NSObject
{
    
    NSString *merchant_id;
    NSString *txn_ID;
    NSString *amount;
    NSString *chksum;
    NSString *msgType;
    NSString *verify_key;
}
@property(nonatomic,retain)   NSString *merchant_id;
@property(nonatomic,retain) NSString *txn_ID;
@property(nonatomic,retain) NSString *amount;
@property(nonatomic,retain) NSString *chksum;
@property(nonatomic,retain) NSString *msgType;

@property(nonatomic,retain) NSString *verify_key;

@end

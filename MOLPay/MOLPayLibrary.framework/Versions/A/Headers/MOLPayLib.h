//
//  MOLPayLib.h
//  MOLPayLib
//
//  Created by Wilwe on 2/4/13.
//  Copyright (c) 2013 Wilwe. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol MolPayProtocol <NSObject>
@optional
-(void)PaymentDetailTransactionID:(NSString *)txn_ID amount:(NSString *)Amount status_code:(NSString *)StatusCode err_desc:(NSString *)ErrorDescription app_code:(NSString *)AppsCode chksum:(NSString *)CheckSum;

@end

@interface MOLPayLib : NSObject{
    id <MolPayProtocol> delegateViewController;
}
@property(retain)  id delegateViewController;

-(BOOL)Authetication_MachantID:(NSString *)Merchant_id
           Verification_Phrase:(NSString *)VerifiedPhrase
                      app_name:(NSString *)AppName;

-(BOOL)Payment_amount:(NSString *)Amount
              orderid:(NSString *)orderID
              country:(NSString *)Country
                  cur:(NSString *)Currency
          merchant_id:(NSString *)MerchantID
                vcode:(NSString *)Vcode
              channel:(NSString *)channel
            bill_name:(NSString *)billName
           bill_email:(NSString *)billEmail
          bill_mobile:(NSString *)billMobile
             app_name:(NSString *)appName
            bill_desc:(NSString *)billDesc
              msgType:(NSString *)msg;


@end

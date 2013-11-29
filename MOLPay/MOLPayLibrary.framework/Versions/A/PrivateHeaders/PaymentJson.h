//
//  PaymentJson.h
//  MolPay_IOS
//
//  Created by NG YUAN JUN on 1/25/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PaymentDetail.h"
#import "Webdelgate.h"
#import "MOLPayLib.h"
@protocol PaymentProtocol <NSObject>
@required
- (void) PaymentSuccessful:(BOOL)success;
-(void)PaymentDetailTransactionID:(NSString *)txn_ID amount:(NSString *)Amount status_code:(NSString *)StatusCode err_desc:(NSString *)ErrorDescription app_code:(NSString *)AppsCode chksum:(NSString *)CheckSum msgType:(NSString *)MessageType;
-(void)SetTransactionID:(NSString *)Txn_ID;
                                                                                           
@end


@interface PaymentJson : NSObject<UIWebViewDelegate>
{
    id <PaymentProtocol> PointerClass;
    Webdelgate *WebPay;
    PaymentDetail *PayDetail;
}
@property (retain)PaymentDetail *PayDetail;
@property (retain)Webdelgate *WebPay;
@property (retain) id PointerClass;

-(BOOL)RequestJSON:(NSString *)jsonRequest;
- (UIWebView *)createWebViewWithHTML:(NSString *)RespondHTML;

@end

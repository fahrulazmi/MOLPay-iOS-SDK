//
//  SuccessAuth.h
//  MolPay_IOS
//
//  Created by NG YUAN JUN on 1/29/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SuccessAuth : NSObject
{
    NSString *verification_response;
    NSString *app_name;
    NSString *msgType;
    
}

@property(nonatomic,retain) NSString *verification_response;
@property(nonatomic,retain) NSString *app_name;
@property(nonatomic,retain) NSString *msgType;




@end

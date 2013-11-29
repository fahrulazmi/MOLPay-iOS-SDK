//
//  AuthenticationOBJ.h
//  MolPay_IOS
//
//  Created by NG YUAN JUN on 1/27/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AuthenticationOBJ : NSObject
{
    NSString *merchant_id;
    NSString *verfication_phrase;
    NSString *app_name;
    NSString *msgType;
}
@property(nonatomic,retain) NSString *merchant_id;
@property(nonatomic,retain) NSString *verfication_phrase;
@property(nonatomic,retain) NSString *app_name;
@property(nonatomic,retain) NSString *msgType;

@end

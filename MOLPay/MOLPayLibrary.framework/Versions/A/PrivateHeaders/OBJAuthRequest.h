//
//  OBJAuthRequest.h
//  MolPay_IOS
//
//  Created by NG YUAN JUN on 1/23/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AuthenticationOBJ.h"
#import "SuccessAuth.h"
@protocol AutheticationDelegate <NSObject>
@required
- (void) AutheticationSuccessful: (BOOL)success;
@end




@interface OBJAuthRequest : NSObject
{   SuccessAuth *succAuth;
    AuthenticationOBJ *AuthOBJ;
    id <AutheticationDelegate> PointerClass;
    
}
@property (retain) id PointerClass;

@property(nonatomic,retain) AuthenticationOBJ *AuthOBJ;
@property(nonatomic,retain)SuccessAuth *succAuth;


-(BOOL)RequestJSON:(NSString *)jsonRequest;

@end

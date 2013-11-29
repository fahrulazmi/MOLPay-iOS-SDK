//
//  Webdelgate.h
//  MOLTEST2
//
//  Created by NG YUAN JUN on 1/31/13.
//  Copyright (c) 2013 NG YUAN JUN. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol GetURLProtocol <NSObject>
@required
- (void)GetUrlSuccessful:(BOOL)success txn_id:(NSString *)TxnID;
@end



@interface Webdelgate : UIWebView<UIWebViewDelegate>
{
    
    id <GetURLProtocol> PointerClass;
}

@property (retain) id PointerClass;
@property (nonatomic, assign) id<UIWebViewDelegate> delegate;
@end

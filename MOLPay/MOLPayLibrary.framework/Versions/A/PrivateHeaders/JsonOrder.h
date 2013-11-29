//
//  JsonOrder.h
//  restola
//
//  Created by NG  YUAN JUN on 6/12/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
@class SBJsonStreamParser;
@class SBJsonStreamParserAdapter;
@protocol ProcessDataDelegate <NSObject>
@required
- (void) processSuccessful: (BOOL)success; 
@end


@interface JsonOrder : NSObject
{
id <ProcessDataDelegate> PointerClass;
}
@property (retain) id PointerClass;


-(NSData *)RequestJSON:(NSString *)jsonRequest;
@end

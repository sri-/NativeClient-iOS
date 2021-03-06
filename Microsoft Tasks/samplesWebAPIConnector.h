//
//  samplesWebAPIConnector.h
//  Microsoft Tasks
//
//  Created by Brandon Werner on 3/11/14.
//  Copyright (c) 2014 Microsoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "samplesTaskItem.h"

@interface samplesWebAPIConnector : NSObject<NSURLConnectionDataDelegate>

+(void) getTaskList:(void (^) (NSArray*, NSError* error))completionBlock;
+(void) addTask:(samplesTaskItem*)task completionBlock:(void (^) (bool, NSError* error)) completionBlock;
+(void) signOut;

@end

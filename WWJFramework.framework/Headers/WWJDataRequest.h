//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

//块定义
typedef void(^WWJDateRequestSuccessBlock)(NSInteger statusCode,id data);
typedef void(^WWJDateRequestErrorBlock)(NSError *error);

@interface WWJDataRequest : NSObject

+(instancetype)sharedInstanceWithBaseURL:(NSString *)baseURL;

//通用
-(void)commenWithURL:(NSString *)urlString
               hDict:(NSMutableDictionary *)hDict
               pDict:(NSMutableDictionary *)pDict
        successBlock:(WWJDateRequestSuccessBlock)successblock
          errorBlock:(WWJDateRequestErrorBlock)errorblock;

@end

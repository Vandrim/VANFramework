//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

//块定义
typedef void(^WWJDateRequestSuccessBlock)(NSHTTPURLResponse *response,id data);
typedef void(^WWJDateRequestErrorBlock)(NSError *error);

typedef enum {
    POST = 0,
    GET,
} NetworkMethod;

@interface WWJDataRequest : NSObject

+(instancetype)sharedInstanceWithBaseURL:(NSString *)baseURL;

//通用
-(void)requestWithURL:(NSString *)urlString
        andMethodType:(NetworkMethod)type
        andHeaderDict:(NSMutableDictionary *)headerDict
        andParamsDict:(NSMutableDictionary *)paramsDict
      andSuccessBlock:(WWJDateRequestSuccessBlock)successblock
        andErrorBlock:(WWJDateRequestErrorBlock)errorblock;
@end

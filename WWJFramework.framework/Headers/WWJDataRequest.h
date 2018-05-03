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

typedef enum {
    JSON = 0,
    HTTP,
    XML,
} ResponseType;

@interface WWJDataRequest : NSObject

+(instancetype)sharedInstanceWithBaseURL:(NSString *)baseURL andHandleCookies:(BOOL)handCookies;

//网络请求
-(void)requestWithURL:(NSString *)urlString
        andMethodType:(NetworkMethod)type
        andHeaderDict:(NSMutableDictionary *)headerDict
        andParamsDict:(NSMutableDictionary *)paramsDict
      andSuccessBlock:(WWJDateRequestSuccessBlock)successBlock
        andErrorBlock:(WWJDateRequestErrorBlock)errorBlock;

//网络请求可修改返回数据类型
-(void)requestWithURL:(NSString *)urlString
        andMethodType:(NetworkMethod)type
   responseSerializer:(ResponseType)responseSerializer
        andHeaderDict:(NSMutableDictionary *)headerDict
        andParamsDict:(NSMutableDictionary *)paramsDict
      andSuccessBlock:(WWJDateRequestSuccessBlock)successBlock
        andErrorBlock:(WWJDateRequestErrorBlock)errorBlock;
@end

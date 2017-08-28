//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WWJDataLocalization : NSObject

//获取数据
+(id)getDataWithFileName:(NSString *)fileName;

//存储数据
+(void)saveDataWithData:(id)data andFileName:(NSString *)fileName;

@end

//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString(Expand)

//md5加密
- (NSString *) stringFromMD5;
- (NSString *) stringFromMD5WithGBK;

//AES加解密
- (NSString *) aesEncryptWithKey:(NSString *)key;
- (NSString *) aesDecryptWithKey:(NSString *)key;

@end

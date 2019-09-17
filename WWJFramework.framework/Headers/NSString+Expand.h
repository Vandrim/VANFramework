//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, VANDateType) {
    VANDateTypeLine = 0,//0000-00-00
    VANDateTypeChinese, //0000年00月00日
    VANDateTypeSecond, //0000-00-00 00:00:00
    VANDateTypeDot, //0000.00.00
};
@interface NSString(Expand)

//md5加密
- (NSString *) stringFromMD5;
- (NSString *) stringFromMD5WithGBK;

//AES加解密
- (NSString *) aesEncryptWithKey:(NSString *)key;
- (NSString *) aesDecryptWithKey:(NSString *)key;

//分词
- (NSArray *)stringTokenizer;

//去掉汉字
- (NSString *)stringWipeOffChinese;

//计算文字宽度
- (CGFloat)calculateWidthWithFont:(UIFont *)font;

//计算文字高度
- (CGFloat)calculateHeightWithFont:(UIFont *)font andWidth:(CGFloat)width;

//json转数组
- (NSArray *)jsonArrayToArray;

//字符串转日期
- (NSString *)stringToDataWithType:(VANDateType)dateType;


//首字母大写
- (NSString *)capitalizedFirstLetter;
//url编码
- (NSString *)urlEncode;
//url解码
- (NSString *)urlDecode;

/**
 * 计算文字高度，可以处理计算带行间距的
 */
- (CGSize)boundingRectWithSize:(CGSize)size
                          font:(UIFont*)font
                   lineSpacing:(CGFloat)lineSpacing;

//json串转换成数组
- (id)arrayWithJsonString;

//字符串转日期
- (NSString *)van_stringToDataWithType:(VANDateType)dateType andStartTime:(NSString *)startTime;

//日期格式化
- (NSString *)dateStringToDataWithType:(VANDateType)dateType andStartTime:(NSString *)startTime;

// 字符串时间—>时间戳
- (NSTimeInterval)timestamp;


@end

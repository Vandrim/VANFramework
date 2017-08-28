//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WWJCommen : NSObject

//将时间戳转为日期字符串
+ (NSString*)secondToDate:(long long)secondNum;

//检查更新
+ (void)checkUpgradeWithAPPID:(NSString *)appID;

//nsdata转base64 nsstring
+ (NSString*)base64forData:(NSData*)theData;

//图片压缩
+ (UIImage*)imageWithImageSimple:(UIImage*)image scaledToSize:(CGSize)newSize;

//隐藏手机号中间四位
+ (NSString *)hiddenMiddleStrWithStr:(NSString *)str;

//格式化
+ (NSString *)formatStringWithMoney:(double)money;

//字典转json字符串
+ (NSString*)dictionaryToJson:(NSDictionary *)dict;

//字典嵌套json字符串
+ (NSMutableDictionary *)dictWithJsonDict:(NSMutableDictionary *)dict andKey:(NSString *)key;



//定义数字字符串类型
typedef enum {
    NoStyle=0,// Formatted number string:123456789
    DecimalStyle,//Formatted number string:123,456,789
    CurrencyStyle,// Formatted number string:￥123,456,789.00
    PercentStyle,// Formatted number string:-539,222,988%
    ScientificStyle,// Formatted number string:1.23456789E8
    SpellOutStyle,// Formatted number string:一亿二千三百四十五万六千七百八十九
    WWJStyle//Formatted number string:123,456,789.00
} NumType;

//格式化数字字符串
+ (NSString *)formatNumStrWithNumString:(NSString *)numStr andType:(NumType)type;

//分词
+ (NSArray *)stringTokenizerWithString:(NSString *)preStr;

//颜色转换为背景图片
+ (UIImage *)imageWithColor:(UIColor *)color;

/**
 *  取汉字的首字母
 */
+ (char)pinyinFirstLetter:(unsigned short) hanzi;

/**
 *  将汉字转换为拼音
 */

+ (NSString * ) chineseToPinyin:(NSString *) chinese;

/**
 *  将对象转成json
 *
 *  @return jsonStr
 */
+ (NSString *)dictToJSONString:(id)obj;

/*!
 * @brief 把格式化的JSON格式的字符串转换成字典
 * @param jsonString JSON格式的字符串
 * @return 返回字典
 */
+ (NSDictionary *)dictionaryWithJsonString:(NSString *)jsonString;

/**
 *  生成二维码
 *
 *  @param string         二维码内容
 *  @param Imagesize      二维码大小
 *  @param logoImage      中间的logo
 *  @param waterImagesize logo的大小
 *
 *  @return 生成好的二维码
 */
+ (UIImage *)qrImageForString:(NSString *)string imageSize:(CGFloat)Imagesize logoImage:(UIImage *)logoImage logoImageSize:(CGFloat)waterImagesize;

//使用第三方生成二维码
+ (UIImage *) createQRCodeWithLibsWithStr:(NSString *)tempStr andImageSize:(CGFloat)imageSize andTopimg:(UIImage *)topimg andColor:(UIColor *)color;

//判断定位是否开启
+ (BOOL)isLocationServiceOpen;

//判断消息推送是否开启
+ (BOOL)isMessageNotificationServiceOpen;

//打开定位服务设置页面
+ (void)openLocationService;

//打开消息推送设置页面
+ (void)openMessageNotificationService;

@end

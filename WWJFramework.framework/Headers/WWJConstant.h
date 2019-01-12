
//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

//device
#define iPhone4 ([UIScreen mainScreen].bounds.size.height == 480.0)
#define iPhone5 ([UIScreen mainScreen].bounds.size.height == 568.0)
#define iPhone6 ([UIScreen mainScreen].bounds.size.height == 667.0)
#define iPhone6p ([UIScreen mainScreen].bounds.size.height == 736.0)
#define iPhoneX ([UIScreen mainScreen].bounds.size.height == 812.0 || [UIScreen mainScreen].bounds.size.height == 896.0)

//系统版本
#define IOS_VERSION          [[[UIDevice currentDevice] systemVersion] floatValue]
//系统版本是否高于某个版本
#define SYSTEM_VERSION_GREATER_THAN(systemVersion)  ([[[UIDevice currentDevice] systemVersion] compare:systemVersion options:NSNumericSearch] == NSOrderedDescending)

#define iOS11_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0)
#define iOS10_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0)
#define iOS9_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0)
#define iOS8_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0)
#define iOS7_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0)
#define iOS6_OR_LATER    ([[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0)

//device screen size
#define kScreenWidth          [[UIScreen mainScreen] bounds].size.width
#define kScreenHeight         [[UIScreen mainScreen] bounds].size.height

//preference（偏好设置）
#define WWJUserDefaults [NSUserDefaults standardUserDefaults]

//判断字符串是否有值
#define MF_NULL_OR_EMPTY(str) ((NSNull *)str == [NSNull null] || str == nil || ((NSString *)[NSString stringWithFormat:@"%@",str]).length == 0)

//弹框的TAG
#define POPTAG 10086

//ToastTAG
#define ToastTAG 10010

//菊花弹框TAG
#define HUD_TAG 10010

//KeyWindow
#define KeyWindow [[UIApplication sharedApplication] keyWindow]




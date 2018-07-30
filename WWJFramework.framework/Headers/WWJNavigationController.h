//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IOSVersion  [[[UIDevice currentDevice] systemVersion] floatValue]
#define IsiOS7Later !(IOSVersion < 7.0)

@interface WWJNavigationController : UINavigationController

// 是否可右滑返回
- (void)navigationCanDragBack:(BOOL)bCanDragBack;

@end

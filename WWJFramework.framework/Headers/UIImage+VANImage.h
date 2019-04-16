//
//  UIImage+QSDImage.h
//  ZhiLianTong
//
//  Created by XQL on 2017/12/8.
//  Copyright © 2017年 qianbaowangluo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (VANImage)
//颜色转图片
+ (UIImage*)createImageWithColor:(UIColor*)color;
//将图片绘制为指定宽度
- (UIImage *)scaleWithWidth:(CGFloat)width;

+ (UIImage *)createNonInterpolatedUIImageFromCIImage:(CIImage *)image withSize:(CGFloat) size;
//UIImage:去色功能的实现（图片灰色显示）
+ (UIImage*)grayImage:(UIImage*)sourceImage;

@end

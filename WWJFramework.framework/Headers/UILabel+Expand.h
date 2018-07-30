//
//  UILabel+Extension.h
//  qsd
//
//  Created by chenliliang on 16/2/25.
//  Copyright © 2016年 chenliliang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Expand)

/** 富文本 字体*/
- (void)setText:(NSString *)text withFont:(CGFloat)font;
/** 富文本 颜色*/
- (void)setText:(NSString *)text withColor:(UIColor *)color;
/** 富文本 行间距*/
- (void)setText:(NSString *)text withLineSpacing:(CGFloat)lineSpacing;

@end
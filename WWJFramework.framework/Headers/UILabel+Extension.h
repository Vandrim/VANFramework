//
//  UILabel+Extension.h
//  qsd
//
//  Created by chenliliang on 16/2/25.
//  Copyright © 2016年 chenliliang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (Extension)
/** 富文本*/
- (void)setText:(NSString *)text withFont:(CGFloat)font;

- (void)setText:(NSString *)text withColor:(UIColor *)color;

- (void)setText:(NSString *)text withLineSpacing:(CGFloat)lineSpacing;

@end

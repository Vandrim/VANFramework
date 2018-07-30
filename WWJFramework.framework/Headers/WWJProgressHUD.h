//
//  WWJProgressHUD.h
//
//  Created by wwj on 2018/6/27.
//  Copyright © 2018年 WW. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WWJProgressHUD : UIView

//显示菊花
+(void)showInView:(UIView *)view animation:(BOOL)animation;

//隐藏菊花
+(void)hideForView:(UIView *)view animation:(BOOL)animation;

@end

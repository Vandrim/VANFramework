//
//  UIViewController+Back.h
//  TuTuEnglish
//
//  Created by wwj on 2019/2/22.
//  Copyright © 2019 TUTU. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIViewController (Back)
//返回上一级
- (void)back;
//返回至特定的vc
- (void)backToController:(UIViewController *)vc;
//返回顶部
- (void)backToRoot;
@end

NS_ASSUME_NONNULL_END

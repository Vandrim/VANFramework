//
//  CALayer+VANExtension.h
//  TuTuEnglish
//
//  Created by wwj on 2019/5/15.
//  Copyright © 2019 TUTU. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

NS_ASSUME_NONNULL_BEGIN

@interface CALayer (VANExtension)
- (void)animationPause;
- (void)animationContinue;

//添加呼吸动画
- (void)addBreathAnimation;
- (void)addBreathAnimationWithScaleValue:(CGFloat)value;
//删除呼吸动画
- (void)removeBreathAnimation;
@end

NS_ASSUME_NONNULL_END

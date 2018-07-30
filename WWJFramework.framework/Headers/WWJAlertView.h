//
//  WWJSingleButtonPopView.h
//
//  Created by wwj on 2018/6/13.
//  Copyright © 2018年 WW. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^LeftBtnClickedBlock)(void);
typedef void(^RightBtnClickedBlock)(void);
@interface WWJAlertView : UIView

//普通文本
-(id)initWithTitle:(NSString *)title content:(NSString *)content leftTitle:(NSString *)leftTitle leftColor:(UIColor *)leftColor leftClickedBlock:(LeftBtnClickedBlock)leftClickedBlock rightTitle:(NSString *)rightTitle rightColor:(UIColor *)rightColor rightClickedBlock:(RightBtnClickedBlock)rightClickedBlock;

//富文本
-(id)initWithTitle:(NSString *)title andTitleColor:(UIColor *)color content:(NSAttributedString *)content leftTitle:(NSString *)leftTitle leftColor:(UIColor *)leftColor leftClickedBlock:(LeftBtnClickedBlock)leftClickedBlock rightTitle:(NSString *)rightTitle rightColor:(UIColor *)rightColor rightClickedBlock:(RightBtnClickedBlock)rightClickedBlock;

//显示
- (void)showInView:(UIView *)view;

//隐藏
- (void)hide;

@end

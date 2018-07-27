//
//  WWJSingleButtonPopView.h
//  MoneyEra
//
//  Created by wwj on 2018/6/13.
//  Copyright © 2018年 WW. All rights reserved.
//

#import <UIKit/UIKit.h>
typedef void(^LeftBtnClickedBlock)(void);
typedef void(^RightBtnClickedBlock)(void);
@interface WWJAlertView : UIView
-(id)initWithTitle:(NSString *)title content:(NSString *)content leftTitle:(NSString *)leftTitle leftColor:(UIColor *)leftColor leftClickedBlock:(LeftBtnClickedBlock)leftClickedBlock rightTitle:(NSString *)rightTitle rightColor:(UIColor *)rightColor rightClickedBlock:(RightBtnClickedBlock)rightClickedBlock;

//富文本
-(id)initWithTitle:(NSString *)title andTitleColor:(UIColor *)color content:(NSAttributedString *)content leftTitle:(NSString *)leftTitle leftColor:(UIColor *)leftColor leftClickedBlock:(LeftBtnClickedBlock)leftClickedBlock rightTitle:(NSString *)rightTitle rightColor:(UIColor *)rightColor rightClickedBlock:(RightBtnClickedBlock)rightClickedBlock;
- (void)showInView:(UIView *)view;
- (void)hide;
@end

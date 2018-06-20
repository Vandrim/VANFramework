//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum
{
    DEFAULT = 0,
    SUCCESS,
    FAILED
}ToastStyle;


@interface WWJToast : NSObject
//+ (void)showString:(NSString*)format, ...;
+ (void)showString:(NSString*)format inView:(UIView *)view;

//new view == nil 时，显示在window层
+ (void)toastWithString:(NSString*)string andStyle:(ToastStyle)style inView:(UIView *)view withOffsetY:(CGFloat)offsetY;

@end

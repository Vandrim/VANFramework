//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WWJActivityDelegate <NSObject>
- (void)didClickOnImageIndex:(NSInteger *)imageIndex;
@optional
- (void)didClickOnCancelButton;
@end

@interface WWJActivity : UIView

- (id)initWithTitle:(NSString *)title delegate:(id<WWJActivityDelegate>)delegate cancelButtonTitle:(NSString *)cancelButtonTitle ShareButtonTitles:(NSArray *)shareButtonTitlesArray withShareButtonImagesName:(NSArray *)shareButtonImagesNameArray;
- (void)showInView:(UIView *)view;

@end

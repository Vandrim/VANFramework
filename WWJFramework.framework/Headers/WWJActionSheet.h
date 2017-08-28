//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol WWJActionSheetDelegate <NSObject>
- (void)didClickOnButtonIndex:(NSInteger)acTag :(NSInteger *)buttonIndex;
@optional
- (void)didClickOnDestructiveButton;
- (void)didClickOnCancelButton;
@end


@interface WWJActionSheet : UIView

@property(nonatomic,assign) NSInteger actionTag;

- (id)initWithTitle:(NSString *)title delegate:(id<WWJActionSheetDelegate>)delegate cancelButtonTitle:(NSString *)cancelButtonTitle destructiveButtonTitle:(NSString *)destructiveButtonTitle otherButtonTitles:(NSArray *)otherButtonTitlesArray;
- (void)showInView:(UIView *)view;
- (void)tappedCancel;

@end

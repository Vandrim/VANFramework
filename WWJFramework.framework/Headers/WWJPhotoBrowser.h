//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <UIKit/UIKit.h>


@class  WWJPhotoBrowser;

@protocol WWJPhotoBrowserDelegate <NSObject>

@required

- (UIImage *)photoBrowser:(WWJPhotoBrowser *)browser placeholderImageForIndex:(NSInteger)index;

@optional

- (NSURL *)photoBrowser:(WWJPhotoBrowser *)browser highQualityImageURLForIndex:(NSInteger)index;
- (void) imageDidRemove:(WWJPhotoBrowser *)browser;
@end


@interface WWJPhotoBrowser : UIView <UIScrollViewDelegate,UIActionSheetDelegate>

@property (nonatomic, weak) UIView *sourceImagesContainerView;
@property (nonatomic, assign) NSInteger currentImageIndex;
@property (nonatomic, assign) NSInteger imageCount;

@property (nonatomic, weak) id<WWJPhotoBrowserDelegate> delegate;

- (void)show;

@end

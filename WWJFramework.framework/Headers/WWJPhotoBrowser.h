//
//  SDPhotoBrowser.h
//  photobrowser
//
//  Created by aier on 15-2-3.
//  Copyright (c) 2015年 aier. All rights reserved.
//

#import <UIKit/UIKit.h>


@class SDButton, WWJPhotoBrowser;

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

//
//  KDCycleBannerView.h
//  KDCycleBannerViewDemo
//
//  Created by Kingiol on 14-4-11.
//  Copyright (c) 2014年 Kingiol. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WWJCycleBannerView;

typedef void(^CompleteBlock)(void);

@protocol WWJCycleBannerViewDataource <NSObject>

@required
- (NSArray *)numberOfKDCycleBannerView:(WWJCycleBannerView *)bannerView;
- (UIViewContentMode)contentModeForImageIndex:(NSUInteger)index;
//- (NSArray *)titlesOfKDCycleBannerView:(KDCycleBannerView *)bannerView;

@optional
- (UIImage *)placeHolderImageOfZeroBannerView;
- (UIImage *)placeHolderImageOfBannerView:(WWJCycleBannerView *)bannerView atIndex:(NSUInteger)index;

@end

@protocol WWJCycleBannerViewDelegate <NSObject>

@optional
- (void)cycleBannerView:(WWJCycleBannerView *)bannerView didScrollToIndex:(NSUInteger)index;
- (void)cycleBannerView:(WWJCycleBannerView *)bannerView didSelectedAtIndex:(NSUInteger)index;

@end

@interface WWJCycleBannerView : UIView

// Delegate and Datasource
@property (weak, nonatomic) IBOutlet id<WWJCycleBannerViewDataource> datasource;
@property (weak, nonatomic) IBOutlet id<WWJCycleBannerViewDelegate> delegate;

@property (assign, nonatomic, getter = isContinuous) BOOL continuous;   // if YES, then bannerview will show like a carousel, default is NO
@property (assign, nonatomic) NSUInteger autoPlayTimeInterval;  // if autoPlayTimeInterval more than 0, the bannerView will autoplay with autoPlayTimeInterval value space, default is 0

- (void)reloadDataWithCompleteBlock:(CompleteBlock)competeBlock;
- (void)setCurrentPage:(NSInteger)currentPage animated:(BOOL)animated;
- (void)loadData;
- (void)startScroll;
- (void)stopScroll;

@end

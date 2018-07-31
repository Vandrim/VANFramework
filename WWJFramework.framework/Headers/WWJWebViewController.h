//
//  WWJWebViewController.h
//  WWJWebview
//
//  Created by wwj on 15/12/11.
//  Copyright © 2015年 WWJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WWJWebBuilder : NSObject

//是否safari
@property (nonatomic,assign) BOOL safari;

//标题
@property (nonatomic,copy) NSString *webTitle;
//链接地址
@property (nonatomic,copy) NSString *webUrl;

//导航标题字体
@property (nonatomic,strong) UIFont *webTitleFont;
//导航标题颜色
@property (nonatomic,strong) UIColor *webTitleColor;

//进度条颜色
@property (nonatomic,strong) UIColor *webProgressColor;
//导航背景
@property (nonatomic,strong) UIColor *webNavgationBarBackgroundColor;
//分割线颜色
@property (nonatomic,strong) UIColor *webNavgationBarLineColor;

//----------------本地HTML加载-------------
//是否本地HTML
@property (nonatomic,assign) BOOL isLocalHtml;
//加载本地html字符串
@property (nonatomic,copy) NSString *localHtmlContent;
//加载本地html的baseurl
@property (nonatomic,copy) NSURL *localHtmlBaseURL;

@end


typedef void (^WWJWebBuilderBlock) (WWJWebBuilder *builder);

@interface WWJWebViewController : UIViewController

//是否safari
@property (nonatomic,assign) BOOL safari;

//标题
@property (nonatomic,copy) NSString *webTitle;
//链接地址
@property (nonatomic,copy) NSString *webUrl;

//导航标题字体
@property (nonatomic,strong) UIFont *webTitleFont;
//导航标题颜色
@property (nonatomic,strong) UIColor *webTitleColor;

//进度条颜色
@property (nonatomic,strong) UIColor *webProgressColor;
//导航背景
@property (nonatomic,strong) UIColor *webNavgationBarBackgroundColor;
//分割线颜色
@property (nonatomic,strong) UIColor *webNavgationBarLineColor;

//----------------本地HTML加载-------------
//是否本地HTML
@property (nonatomic,assign) BOOL isLocalHtml;
//加载本地html字符串
@property (nonatomic,copy) NSString *localHtmlContent;
//加载本地html的baseurl
@property (nonatomic,copy) NSURL *localHtmlBaseURL;

+ (WWJWebViewController *)creatWithBuilder:(WWJWebBuilderBlock)block;

@end

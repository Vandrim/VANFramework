//
//  WWJWebViewController.h
//  WWJWebview
//
//  Created by wwj on 15/12/11.
//  Copyright © 2015年 WWJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WWJWebBuilder : NSObject

//进度条颜色
@property (nonatomic,strong) UIColor *progressColor;
//导航背景
@property (nonatomic,strong) UIColor *navBackColor;
//导航标题颜色
@property (nonatomic,strong) UIColor *navTitleColor;
//分割线颜色
@property (nonatomic,strong) UIColor *lineColor;
//导航标题字体
@property (nonatomic,strong) UIFont *navFont;
//标题
@property (nonatomic,copy) NSString *webtitle;
//链接地址
@property (nonatomic,copy) NSString *weburl;
//是否uiwebview
@property (nonatomic,assign) BOOL isUIWebview;
//加载本地html字符串
@property (nonatomic,copy) NSString *htmlStr;
//加载本地html的baseurl
@property (nonatomic,copy) NSURL *baseURL;

@end


typedef void (^WWJWebBuilderBlock) (WWJWebBuilder *builder);

@interface WWJWebViewController : UIViewController

//进度条颜色
@property (nonatomic,strong) UIColor *progressColor;
//导航背景
@property (nonatomic,strong) UIColor *navBackColor;
//导航标题颜色
@property (nonatomic,strong) UIColor *navTitleColor;
//导航标题字体
@property (nonatomic,strong) UIFont *navFont;
//分割线颜色
@property (nonatomic,strong) UIColor *lineColor;
//标题
@property (nonatomic,copy) NSString *webtitle;
//链接地址
@property (nonatomic,copy) NSString *weburl;
//是否uiwebview
@property (nonatomic,assign) BOOL isUIWebview;
//加载本地html字符串
@property (nonatomic,copy) NSString *htmlStr;
//加载本地html的baseurl
@property (nonatomic,copy) NSURL *baseURL;

+ (WWJWebViewController *)creatWithBuilder:(WWJWebBuilderBlock)block;

@end

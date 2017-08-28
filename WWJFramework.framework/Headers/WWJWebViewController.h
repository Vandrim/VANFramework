//
//  WWJWebViewController.h
//  WWJWebview
//
//  Created by wwj on 15/12/11.
//  Copyright © 2015年 WWJ. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WWJWebViewController : UIViewController

+(void)pushWithViewController:(id)vc andWebtitle:(NSString *)webtitle andWeburl:(NSString *)weburl andProgressColor:(UIColor *)progressColor andUIWebview:(BOOL)isUIWebview andHtmlStr:(NSString *)htmlStr andBaseURL:(NSURL *)baseURL;

@end

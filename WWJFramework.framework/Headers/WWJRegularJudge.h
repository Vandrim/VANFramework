//
//  Created by wwj on 16-6-7.
//  Copyright (c) 2016年 wwj. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WWJRegularJudge : NSObject

//邮箱
+ (BOOL) validateEmail:(NSString *)email;
//手机号码验证
+ (BOOL) validateMobile:(NSString *)mobile;
//身份证号
+ (BOOL) validateIdentityCard:(NSString *)identityCard;
//判断银行卡号
+ (BOOL) validateBankCardNumber:(NSString *)bankCardNumber;
//密码
+ (id) validatePassword:(NSString *)passWord;
//判读输入框是否符合输入格式
+(BOOL)isMatchMoneyFormat:(UITextField *)textField range:(NSRange)range string:(NSString *)string;
/*车牌号验证 MODIFIED BY HELENSONG*/
+ (BOOL)validateCarNo:(NSString* )carNo;


@end

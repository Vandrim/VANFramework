//
//  WWJAddressbookManager.h
//  ScheduleRelationship
//
//  Created by wwj on 2017/2/20.
//  Copyright © 2017年 WWJ. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>  //通讯录
#import <AssetsLibrary/AssetsLibrary.h> //相册
#import <Photos/Photos.h>

typedef void(^WWJAddressbookBlock)(BOOL enable, ABAuthorizationStatus authorStatus);
typedef void(^WWJPhotoBlock)(BOOL enable, ALAuthorizationStatus authorStatus);
typedef void(^WWJCameraBlock)(BOOL enable, AVAuthorizationStatus authorStatus);
typedef void(^WWJNotificationBlock)(BOOL enable, UIUserNotificationType authorStatus);

@interface WWJAuthorityManager : NSObject
@property (nonatomic, assign) ABAddressBookRef addressBook;

//单例类方法
+ (instancetype)shareManger;

//通讯录
- (void)canReadAddressBookWithBlock:(WWJAddressbookBlock)block;
//相册
- (void)canReadPhotosWithBlock:(WWJPhotoBlock)block;
//相机
- (void)canReadCameraWithBlock:(WWJCameraBlock)block;
//推送
- (void)canNotificationWithBlock:(WWJNotificationBlock)block;
//跳转至设置
- (void)gotoSetting:(UIViewController *)vc type:(NSString *)type;

@end

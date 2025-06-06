//
//  YoCoreChannel.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/11/16.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^LoginBlock)(BOOL login);
@interface YoCoreChannel : NSObject


//回调的 id 类型转化的 字典
@property (nonatomic, strong) NSDictionary *callbackResultDic;

@property (nonatomic, strong) YoCoreChannel *channel;

+ (instancetype)shareCoreChannel;
- (void)dealCallBack:(id)result;

//日服 设置生日 视图
- (void)showSetBirthView;

- (void)userCloseLoginUI:(BOOL)isCloseButton;
///登录绑定Email完成
- (void)loginBindDone;


//回调给Unity
- (void)toUnityCallback:(id)result;

/*
 用户在UI上选择
 isOk Yes 是
 isOk NO 否
 **/
//- (void)userOperation:(BOOL)isOk;


- (void)thirdLogin:(LoginBlock)block;

//进行第三方账号登陆时 没有绑定对应账号
- (void)thirdLoginNotBindAccount:(LoginBlock)block;

/// 美韩服游客登录时
/// @param block 回调
- (void)deviceLogin:(LoginBlock)block;
- (void)universalLink;
@end

NS_ASSUME_NONNULL_END

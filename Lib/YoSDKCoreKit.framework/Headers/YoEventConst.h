//
//  YoEventConst.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2022/9/7.
//

#ifndef YoEventConst_h
#define YoEventConst_h
#import <Foundation/Foundation.h>

#pragma mark ----EventName
///        新玩家注册账号，生成sdk_uid
FOUNDATION_EXPORT NSString * const kEventUserAccountCreateKey;
///【客户端上报】玩家完成账号绑定时上报
FOUNDATION_EXPORT NSString * const kEventUserAccountBindKey;
///【客户端上报】 玩家账号登录时上报
FOUNDATION_EXPORT NSString * const kEventUserLoginKey;
///    客户端    玩家拉起是否切换账号的弹窗，并确认切换时
FOUNDATION_EXPORT NSString * const kEventUserSwitchAccountKey;
///    客户端    玩家分享意向
FOUNDATION_EXPORT NSString * const kEventUserShareIntentionKey;
///    客户端    玩家分享
FOUNDATION_EXPORT NSString * const kEventUserShareKey;
///    客户端    玩家确认支付

FOUNDATION_EXPORT NSString * const kEventUserPayCheckoutKey;
///    客户端    拉起商店评价
FOUNDATION_EXPORT NSString * const kEventUserOpenReviewKey;
///    客户端    玩家删除账号意向，拉起删除账号确认窗
FOUNDATION_EXPORT NSString * const kEventUserDeleteAccountIntentionKey;
///        玩家删除账号
FOUNDATION_EXPORT NSString * const kEventUserDeleteAccountSuccessKey;
///        取消删除账号
FOUNDATION_EXPORT NSString * const kEventUserDeleteAccountCancelKey;
///    客户端    拉起问卷
FOUNDATION_EXPORT NSString * const kEventUserOpenSurveyKey;
///    客户端    玩家清除设备缓存
FOUNDATION_EXPORT NSString * const kEventUserClearCacheKey;

///        sdk初始化时上报
FOUNDATION_EXPORT NSString * const kEventSDKInitKey;
///    客户端    客户端崩溃上报
FOUNDATION_EXPORT NSString * const kEventSDKCrashKey;

    ///（玩家发起支付后，SDK 服务器完成创单，请求苹果获取三方返回商品货币单位时，遇到拦截上报，该事件仅 iOS 上报）
FOUNDATION_EXPORT NSString * const kEnventYostarsdkPayIllegalCurrencyKey;
    ///（SDK 请求接口出现异常或超时等，上报错误日志）
FOUNDATION_EXPORT NSString * const kEventYSDKErrKey;
    ///（玩家发起购买意向，SDK 创单成功/失败时上报）
FOUNDATION_EXPORT NSString * const kEventUserPayIntentionKey;
    ///（玩家主动取消支付时上报，得到三方取消订单回调上报）
FOUNDATION_EXPORT NSString * const kEventUserPayCanceledKey;
    ///（玩家主动取消支付时上报，得到三方取消订单回调上报）
FOUNDATION_EXPORT NSString * const kEventFirstPurchaseSdkKey;
    ///（玩家支付完成，SDK 给到游戏客户端成功回调时上报）
FOUNDATION_EXPORT NSString * const kEventPurchaseKey;
///玩家完成极验验证成功或失败，客户端拿到回调后上报
FOUNDATION_EXPORT NSString * const kEventGeeTestCheckKey;
///CP 调用 RoleInfoUpload后上报）
FOUNDATION_EXPORT NSString * const kEventRoleInfoUploadKey;
    ///玩家支付完成后，通过 SDK 服务器接口得到订单详情，等级有变化时上报
FOUNDATION_EXPORT NSString * const kEventUserPaidLevelKey;
    ///创号
FOUNDATION_EXPORT NSString * const kEventAccountCreateKey;
    ///次日
FOUNDATION_EXPORT NSString * const kEventSeconddayRetentionKey;
    ///七日
FOUNDATION_EXPORT NSString * const kEventSeventhdayRetentionKey;

#pragma mark ----EventProperty
FOUNDATION_EXPORT NSString * const kEventPropertyYostarIDKey;
FOUNDATION_EXPORT NSString * const kEventPropertyUserIDKey;

#endif /* YoEventConst_h */

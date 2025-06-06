//
//  YoStarSDK.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2021/1/11.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "BaseShareContent.h"
#import "YoHelperDefine.h"

NS_ASSUME_NONNULL_BEGIN
typedef void(^SDKCallBackBlock)(NSString *result);
@interface YoStarSDK : NSObject
+ (void)setCallback:(SDKCallBackBlock)block;

///使用配置文件中的当前区服 默认屏幕方向为 横屏
///@param gameServerUrl 游戏服地址，支持检测游戏延迟情况
///@param pid 项目ID
+   (void)init:(NSString *)pid
 gameServerUrl:(NSString *)gameServerUrl;
///初始化 默认屏幕方向为 横屏
///@param area 区服
///@param gameServerUrl 游戏服地址，支持检测游戏延迟情况
///@param pid 项目ID
+   (void)init:(NSString *)area
       gamePID:(NSString *)pid
 gameServerUrl:(NSString *)gameServerUrl;
///初始化
///@param area 区服
///@param gameServerUrl 游戏服地址，支持检测游戏延迟情况
///@param pid 项目ID
///@orientation orientation 需要的屏幕方向 0:横屏，1:竖屏
//+   (void)init:(NSString *)area
//       gamePID:(NSString *)pid
// gameServerUrl:(NSString *)gameServerUrl
//    isPortrait:(BOOL)isPortrait;
///AIHelp 未登录
+ (void)showAiHelp;


/// 购买商品
///@param productId   商品的ID
///@param payNotifyUrl   支付通知的URL
///@param extraData   额外的信息，防重
+ (void)    pay:(NSString * _Nonnull)productId
   payNotifyUrl:(NSString * _Nonnull)payNotifyUrl
      extraData:(NSString * _Nonnull)extraData;
    /// GMO 支付。paymentTermDay: 支付截止天数默认-1；paymentExpiryDateTime: 直接截止精确时间 默认0
    /// - Parameters:
    ///   - payNotifyUrl: 支付通知的URL
    ///   - extraData: 额外的信息，防重
    ///   - productName: 商品名
    ///   - productID: 商品ID
    ///   - productPrice: 商品价格
    ///   - payType: 支付方式 0：立即支付；1：预支付 参考 GMOPayMethod
    ///   - payMode: All, Creditcard, Paypay, Au, Docomo, Softbank, Paypal,
    
+ (void)            pay:(NSString * _Nullable)productId
            productName:(NSString * _Nonnull)productName
           productPrice:(double)productPrice
           payNotifyUrl:(NSString * _Nonnull)payNotifyUrl
              extraData:(NSString * _Nonnull)extraData
                payMode:(PaymentMode)payMode
                payType:(GMOPayMethod)payType;


    /// GMO 支付
    /// - Parameters:
    ///   - payNotifyUrl: 支付通知的URL
    ///   - extraData: 额外的信息，防重
    ///   - productName: 商品名
    ///   - productID: 商品ID
    ///   - productPrice: 商品价格
    ///   - paymentTermDay: 支付截止天数(等于-1,使用后台默认)
    ///   - paymentExpiryDateTime: 直接截止精确时间 单位：秒(s) 便利店:7-Eleven 不支持该字段(等于0时,使用后台默认)

+ (void)          pay:(NSString * _Nullable)productId
          productName:(NSString * _Nonnull)productName
         productPrice:(double)productPrice
         payNotifyUrl:(NSString * _Nonnull)payNotifyUrl
            extraData:(NSString * _Nonnull)extraData
       paymentTermDay:(NSInteger)paymentTermDay
paymentExpiryDateTime:(NSInteger)paymentExpiryDateTime;


///获取区服信息
+ (NSString *)getAreaServer;

///登陆
+ (void)login;


///调起用户中心UI
///@param accountDeleteNotifyUrl 账号删除回调地址
///@param accountRecoveredNotifyUrl 恢复回调地址
///@param extraData 额外信息

+ (void)        showUserCenter:(NSString * _Nullable)accountDeleteNotifyUrl
 withAccountRecoveredNotifyUrl:(NSString * _Nullable)accountRecoveredNotifyUrl
                 withExtraData:(NSString * _Nullable)extraData;

///提供切换帐号的接口，拉起切换账号功能
+ (void)showSwitchAccount;

///发起用户问卷调查
///@param gameUID 游戏用户id
///@param activityID 问卷ID
///@param gameNotifyURL 地址URL
///@param extraData 额外信息
+ (void)showSurvey:(NSString * _Nonnull)gameUID
        activityID:(NSString * _Nonnull)activityID
     gameNotifyURL:(NSString * _Nullable)gameNotifyURL
         extraData:(NSString * _Nullable)extraData;

    /// 网页通行证
+ (void)showAccountCenter;



    /// 本地推送
    /// @param identifier 通知ID
    /// @param title Title 不可为空
    /// @param content content 不可为空
    /// @param timestamp 时间戳 单位 毫秒
+ (void)buildLocalNotification:(NSInteger)identifier
                         title:(NSString * _Nonnull)title
                       content:(NSString * _Nonnull)content
                     timestamp:(NSTimeInterval)timestamp;

    /// 删除未触发的本地通知
    /// @param idList 通知ID
+ (void)deleteLocalNotification:(NSArray<NSNumber *>  * _Nonnull)idList;

/// 定制的 Webview 控件，并支持访问网页。
/// @param title 标题（非必填）
/// @param url url 不可为空
/// @param pid pid (非必填)
+ (void)showWebView:(NSString * _Nullable)title
                url:(NSString * _Nonnull)url
                pid:(NSString * _Nullable)pid;

/// 网络检测
/// @param gameURL 游戏服的URL
+ (void)showNetworkTest:(NSString *)gameURL;
/**
 获取其他协议视图
 @param type
        0 日服 资金结算法
        1 日服 特定商业交易法
        2 韩服 退款说明
        3 韩服 退款协议
 */
//+ (void)showAgreement:(int)type;
+ (void)showAgreement:(NSArray *)agreementTypes;

/**
 埋点
 @param strEventName    埋点
 @param strJsonCallbackParameter 参数
 */

+ (void)userEventUpload:(NSString *)strEventName
strJsonCallbackParameter:(NSString *)strJsonCallbackParameter;

/// 收集游戏账号相关信息，如下表属性，收集完毕后，随所有的上报事件一并上报。
///@param serverId 服务id
///@param roleUid 角色id
///@param roleName 角色名
///@param tags 问题标签
///@param customField 附加信息
+ (void)roleInfoUpload:(NSString *)serverId
           withRoleUid:(NSString *)roleUid
          withRoleName:(NSString *)roleName
              withTags:(NSArray <NSString *>*)tags
       withCustomField:(NSDictionary *)customField;

/// 系统分享
/// @param strShareText 文案
/// @param imgDataByte 图片的二进制数据
/// @param nSize 图片的二进制数据长度
+ (void)systemShare:(NSString *)strShareText
      withImageData:(Byte *)imgDataByte
         withLength:(int)nSize;

/// 聚合分享

/// 聚合分享
/// @param url 分享链接
//+ (void)share:(NSString *)url;
+ (void)share:(id <BaseShareContent>)content;

/**
 App Store评分
 */
+ (void)requestStoreReview;

///获取ErrorCode
///@param code 错误代码
+ (NSString *)queryErrorMsg:(int)code;
///查询远程配置信息
///@param configKey key
+ (NSString *)queryRemoteConfig:(NSString *)configKey;

    /// 查询 Adjust ADID
+ (void)fetchDeviceTrackingID;

    /// 获取用户登录状态
+ (BOOL)checkUserCacheExist;


/// 查询支付账号对应商品的货币价格
/// @param gameProductJson 需要查询的商品ID，NSArray<NSString *> 序列化为json字符串
+ (void)querySkuDetails:(NSString *)gameProductJson;
///查询文本合法性
///@param text 查询文本
+ (void)queryTextLegality:(NSString *)text;


    /// 设置生日（只在日服可用）
+ (void)setBirthday;

+ (void)mail:(NSString *)info;
#pragma mark ---- 暂不对外提供 ----

//
//登出
//+ (void)logOut;
//
//获取设备的ID
//+ (NSString *)getDeviceId;
//
//
//清除SDk缓存
//+ (void)cleanSDKCache;
//googleServerToServer
//+ (void)googleServerToServer:(NSString *)devToken
//                      linkID:(NSString *)linkID
//                appEventName:(NSString *)appEventName
//                  priceValue:(NSString *)priceValue
//                currencyCode:(NSString *)currencyCode;
//
// 复制到剪贴板
//+ (int)copyToClipboard:(NSString *)value;
//
//
//  判断系统版本是否大于iOS 13
//+ (BOOL)checkAppleSignInAvailable;



+ (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
+ (void)application:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
+ (void)applicationDidBecomeActive:(UIApplication *)application;
+ (void)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
+ (BOOL)application:(UIApplication *)application shouldAllowExtensionPointIdentifier:(UIApplicationExtensionPointIdentifier)extensionPointIdentifier;
+ (UIInterfaceOrientationMask)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window;

/// 此方法是新的用于响应远程推送通知的方法
///1.如果应用程序在后台，则通知到，点击查看，该方法自动执行
///2.如果应用程序在前台，则通知到，该方法自动执行
///3.如果应用程序被关闭，则通知到，点击查看，先执行didFinish方法，再执行该方法
///4.可以开启后台刷新数据的功能
///  step1：点击target-->Capabilities-->Background Modes-->Remote Notification勾上
///  step2：在给APNs服务器发送的要推送的信息中，添加一组字符串如：
///  {"aps":{"content-available":"999","alert":"bbbbb.","badge":1}}
///  其中content-availabel就是为了配合后台刷新而添加的内容，999可以随意定义
/// @param application application
/// @param userInfo userInfo
/// @param completionHandler completionHandler
+ (void)application:(UIApplication *)application didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

+ (BOOL)    application:(UIApplication *)application
   continueUserActivity:(NSUserActivity *)userActivity
     restorationHandler:(void (^)(NSArray<id<UIUserActivityRestoring>> * _Nullable))restorationHandler;


///初始化 AIHelp
+ (void)aiHelpInitForApiKey:(NSString *)apiKey
                 domainName:(NSString *)domainName
                      appID:(NSString *)appID;

#pragma mark --- Test ---

+ (void)_crashTest;

@end

NS_ASSUME_NONNULL_END

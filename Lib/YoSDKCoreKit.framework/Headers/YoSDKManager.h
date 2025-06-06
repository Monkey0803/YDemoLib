//
//  YoSDKManager.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/6/9.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#ifdef NSFoundationVersionNumber_iOS_9_x_Max
#import <UserNotifications/UserNotifications.h>
#endif

/**
 新增重复支付验证
 */
extern void SDKReconfirmOrderAPI(void);




NS_ASSUME_NONNULL_BEGIN

typedef void(^YoSDKCallBack)(NSString *result);
@interface YoSDKManager : NSObject
/**
 界面模式 FAQ:faq 机器人客服:robot
 */
@property (nonatomic, copy) NSString *aihelpModel;
/**aihelp 是否可用 1 可 ；0 不可*/
@property (nonatomic, assign) NSInteger aihelpEnable;
@property (nonatomic, copy) NSString *baseURL;
@property (nonatomic, copy) NSString *baseURL_LB;
@property (nonatomic, copy) NSString *basePushURL;
@property (nonatomic, copy) NSString *twKey;
@property (nonatomic, copy) NSString *twSecret;

@property (nonatomic, strong) YoSDKCallBack SDKCallBack;
@property (nonatomic, strong) NSMutableDictionary *paymentFieldDic;
@property (nonatomic, copy) NSString *extraStr;

@property (nonatomic, strong, nullable) id payInfo;

// 管理单例
+ (instancetype)shareInstance;

/*
 * 拿到了第三方的账号的授权信息
 * 去绑定第三方账号
 */
- (void)yoHandleBindData:(NSDictionary *)result
                platform:(NSInteger)platformNum;

// 获取DevicdID
- (NSString *)yoGetDeviceID;

///初始化接口
///@param area 区服
- (void)yoInitSDK:(NSString *)area;
//AIHelp
/**
 @param extraData 附加字段
 */

- (void)yoShowAiHelpFAQs:(NSDictionary *)extraData;

// 登录
/**
 @param platform 对应的平台 参考 YoLoginPlatform
 @param param 引继码时 代表 引继码 悠星账号时 代表 邮箱   其他platform 传空
 @param param2 引继码时 代表 用户ID 悠星账号时 代表 验证码    其他platform 传空
 */
- (void)yoLogin:(NSInteger)platform
          param:(NSString *)param
         param2:(NSString *)param2;

- (void)quickLogin:(NSDictionary *)header
          platform:(NSInteger)platform;


/**
 @param platform 对应的平台 参考 YoLoginPlatform
 @param email 悠星账号时 代表 邮箱    其他platform 传空
 @param code 悠星账号时 代表 验证码    其他platform 传空
 */
- (void)yoBind:(NSInteger)platform
         email:(NSString *)email
verificationCode:(NSString  *)code;

/**
 @param platform 对应的平台 参考 YoLoginPlatform
 @param email 悠星账号时 代表 邮箱    其他platform 传空
 @param code 悠星账号时 代表 验证码    其他platform 传空
 */
- (void)yoUnBind:(NSInteger)platform
           email:(NSString *)email
verificationCode:(NSString *)code;

- (void)pay:(id)payInfo;


/**
 发起用户问卷调查
 @param gameUID 游戏用户id
 @param activityID 问卷ID
 @param gameNotifyURL 游戏侧的通知地址
 @param extraData 额外信息
 */
- (void)userSurvey:(NSString * _Nonnull)gameUID
        activityID:(NSString * _Nonnull)activityID
     gameNotifyURL:(NSString * _Nullable)gameNotifyURL
         extraData:(NSString * _Nullable)extraData;
/// 定制的 Webview 控件，并支持访问网页。
/// @param title 标题（非必填）
/// @param url url 不可为空
/// @param pid pid (非必填)
- (void)showWebView:(NSString * _Nullable)title
                url:(NSString * _Nonnull)url
                pid:(NSString * _Nullable)pid;
- (void)showAccountCenter;
///在内建浏览器打开URL
///@param url 网址
///@param title title
- (void)openBuildInBrowserUrl:(NSString * _Nonnull)url
                        title:(NSString * _Nullable)title;
- (void)openBuildInBrowserUrl:(NSString * _Nonnull)url
                        title:(NSString * _Nullable)title
                     callback:(void(^ _Nullable )(_Nullable id result))callback;
///联系客服，使用 SDK 内置 浏览器打开
///@param url 网址
- (void)contactCustomerService:(NSString *)url;
// 新增重复支付验证
//- (void)yoReconfirmOrderAPI;
/// 查询支付账号对应商品的货币价格
- (void)yoQuerySkuDetails:(NSString *)skus;
/// 事件上传
- (void)yoUserEventUpload:(NSString  *)strEventName
            withParameter:(NSString  *)strJsonCallbackParameter;
///收集用户信息
///@param serverId 服务id
///@param roleUid 角色id
///@param roleName 角色名
///@param tags 问题标签
///@param customField 附加信息
- (void)roleInfoUpload:(NSString * _Nullable)serverId
           withRoleUid:(NSString * _Nonnull)roleUid
          withRoleName:(NSString * _Nonnull)roleName
              withTags:(NSArray <NSString *>* _Nullable)tags
       withCustomField:(NSDictionary * _Nullable)customField;


/// 系统分享
/// @param strShareText 文案
/// @param imgDataByte 图片的二进制数据
/// @param nSize 图片的二进制数据长度
- (void)yoSystemShare:(NSString *)strShareText
        withImageData:(Byte *)imgDataByte
           withLength:(NSInteger)nSize;
// 清空token
- (void)yoCleanAllUserDefaults;
- (void)authFailedCleanData;



- (void)setBirthday:(BOOL)callback;

// 系统剪切板
- (NSInteger)yoClipboard:(NSString  *)cValue;

@end

@interface YoSDKManager (YoSDKAppDelegate)

- (BOOL)yoSDKApplication:(UIApplication *)app
                 openURL:(NSURL *)url
                 options:(NSDictionary<UIApplicationOpenURLOptionsKey,id> *)options;
- (void)yoSDKApplication:(UIApplication *)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)yoSDKApplicationDidBecomeActive:(UIApplication *)application;
- (void)yoSDKApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (BOOL)yoSDKApplication:(UIApplication *)application
shouldAllowExtensionPointIdentifier:(UIApplicationExtensionPointIdentifier)extensionPointIdentifier;
- (void)yoSDKApplication:(UIApplication *)application
didReceiveRemoteNotification:(NSDictionary *)userInfo
  fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;
- (BOOL)yoSDKApplication:(UIApplication *)application
    continueUserActivity:(NSUserActivity *)userActivity
      restorationHandler:(void (^)(NSArray<id<UIUserActivityRestoring>> * _Nullable))restorationHandler;

- (void)yoAIHelpInitForApiKey:(NSString *)apiKey
                   domainName:(NSString *)domainName
                        appID:(NSString *)appID;

@end

NS_ASSUME_NONNULL_END

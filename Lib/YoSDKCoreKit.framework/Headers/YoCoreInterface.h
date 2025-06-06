//
//  YoCoreInterface.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/11/2.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

@interface YoCoreInterface : NSObject


#pragma mark ---- sign in apple ----

- (void)yoSignInAppleLoginPlatform:(NSInteger)platform;



- (void)yoSignInAppleBindPlatform:(NSInteger)platform;
- (void)yoSignInAppleHandleBindData:(NSDictionary *)result
                           platform:(NSInteger)platformNum;
- (void)yoSignInAppleUnBindPlatform:(NSInteger)platform;

#pragma mark ---- facebook ----

- (void)yoFBLoginPlatform:(NSInteger)platform;

- (void)yoFBBindPlatform:(NSInteger)platform;
- (void)yoFBHandleBindData:(NSDictionary *)result
                  platform:(NSInteger)platformNum;
- (void)yoFBUnBindPlatform:(NSInteger)platform;
- (void)yoFBApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

- (BOOL)yoFBApplication:(UIApplication *)app 
                openURL:(NSURL *)url
                options:(NSDictionary<NSString *,id> *)options;

- (void)yoFBApplicationDidBecomeActive;
- (void)yoFBShareImage:(UIImage *)image;
- (void)yoFBShareURL:(NSString *)URL;
- (BOOL)canFBShare;
#pragma mark ---- FBSDKAppEvents ----
+ (void)logEvent:(nonnull NSString *)event 
      parameters:(nonnull NSDictionary *)paraDict;


+ (void)logPurchase:(float)price 
           currency:(nonnull NSString *)currencyStr
         parameters:(nonnull NSDictionary *)paraDict;

#pragma mark ---- twitter ----

- (void)yoTWBindPlatform:(NSInteger)platform ;
- (void)yoTwHandleBindData:(NSDictionary *)result
                  platform:(NSInteger)platformNum;

- (void)yoTWLoginPlatform:(NSInteger)platform;


- (void)yoTWUnBindPlatform:(NSInteger)platform;

- (BOOL)yoTWApplication:(UIApplication *)app 
                openURL:(NSURL *)url
                options:(NSDictionary<NSString *,id> *)options;


#pragma mark ---- in apple purchase ----


- (void)pay:(id)payInfo;

///初始化时请求下服务器的商品列表
- (void)updateProductionListFromService;
- (void)deleteShopCache;
- (void)yoQuerySkuDetails:(NSString *)skusJson;

//- (void)yoReconfirmOrder;

- (void)initInAppPurchase;
- (void)createOrder:(nullable NSDictionary *)payParam
            success:(nullable void (^)(NSDictionary * _Nullable __strong))success
               fail:(nullable void (^)(NSDictionary * _Nullable __strong))fail;

#pragma mark ---- Adjust ----

+ (void)yoServerToServer:(NSString *)devToken
                  linkID:(NSString *)linkID
               eventName:(NSString *)appEventName
                   price:(NSString *)priceValue
            currencyCode:(NSString *)currencyCode;

+ (void)yoUserEvent:(NSString *)eventNameStr
      withParameter:(NSString  *)CallbackParameterStr;
/// 内部使用上报事件
/// @param eventType 事件名， 不能为空
/// @param propertyParam 参数
+ (void)yoInternalUpload:(NSString *)eventType
           propertyParam:(NSDictionary * _Nullable)propertyParam;
/// 内部使用上报事件
/// @param eventType 事件名， 不能为空
/// @param propertyParam 参数
/// @param extraParam 里面字段的优先级大于其他
+ (void)yoInternalUpload:(NSString *)eventType
           propertyParam:(NSDictionary * _Nullable)propertyParam
              extraParam:(NSDictionary * _Nullable)extraParam;


+ (void)yoRequestTrackingAuthorizationWithCompletionHandler:(void (^_Nullable)(NSUInteger status))completion;

+ (void)yoInitAdjust:(BOOL)isEnabled
               debug:(BOOL)isDebug
         adjustToken:(NSString *)adjustToken
        trackerToken:(NSString *)trackerToken
          initScript:(NSDictionary *)initScriptDict;
/// 获取adjust的adid
+ (void)yoAdjustADID;

+ (void)yoFetchData:(NSArray *)configArray;
+ (NSString *)yoQueryFirebaseRemoteConfig:(NSString *)configKey;

+ (void)yoFirstPurchaseEvent:(NSString *)orderId
                       price:(float)price
                   extraData:(NSString *)extraData
                 currentCode:(NSString *)currentCode
               propertyParam:(NSDictionary * _Nullable)propertyParam;
+ (void)firebaseConsent:(BOOL)consent;

+ (void)yoIAPEvent:(NSString *)orderId
             price:(float)price
     transactionId:(NSString * _Nullable)transactionIdentifier
       currentCode:(NSString * _Nullable)currentCode
     propertyParam:(NSDictionary * _Nullable)propertyParam;

+ (void)yoLoginActionEvent:(NSInteger)loginActionEvent;
+ (void)yoLoginActionEvent:(NSInteger)loginActionEvent
             propertyParam:(NSDictionary * _Nullable)propertyParam;
+ (void)yoAdjustDidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
#pragma mark ---- AIHelp ----


+ (void)yoShowAiHelpFAQs:(NSDictionary *)extraData;

+ (void)yoAIHelpInitForApiKey:(NSString *)apiKey
                   domainName:(NSString *)domainName
                        appID:(NSString *)appID;
+ (void)yoAiHelpDidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
@end

NS_ASSUME_NONNULL_END

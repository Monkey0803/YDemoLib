//
//  YoAdjustInterface.h
//  YoSDKAdjustKit
//
//  Created by Yostar on 2020/11/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoAdjustInterface : NSObject

+ (void)yoLoginActionEvent:(NSInteger)loginActionEvent;
+ (void)yoLoginActionEvent:(NSInteger)loginActionEvent
             propertyParam:(NSDictionary * _Nullable)propertyParam;
+ (void)logEvent:(NSString *)event
      parameters:(NSDictionary *)paraDict;

+ (void)logPurchase:(float)price
           currency:(NSString *)currencyStr
         parameters:(NSDictionary *)paraDict;


// init adjust
+ (void)yoInitAdjust:(BOOL)isEnabled
               debug:(BOOL)isDebug
         adjustToken:(NSString *)adjustToken
        trackerToken:(NSString *)trackerToken
          initScript:(NSDictionary *)initScriptDict;
/// adjust ADID
+ (void)yoAdjustADID;
//  SDKServerToServer
+ (void)yoServerToServer:(NSString *)devToken
                  linkID:(NSString *)linkID
               eventName:(NSString *)appEventName
                   price:(NSString *)priceValue
            currencyCode:(NSString *)currencyCode;
// userEvent
+ (void)yoUserEvent:(NSString *)eventNameStr
      withParameter:(NSString *)CallbackParameterStr;
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
+ (void)yoFetchData:(NSArray *)configArray;

+ (void)yoRequestTrackingAuthorizationWithCompletionHandler:(void (^_Nullable)(NSUInteger status))completion;


+ (void)yoIAPEvent:(NSString *)orderId
             price:(float)price
     transactionId:(NSString * _Nullable)transactionIdentifier
       currentCode:(NSString * _Nullable)currentCode
     propertyParam:(NSDictionary * _Nullable)propertyParam;

+ (void)yoFirstPurchaseEvent:(NSString *)orderId
                       price:(float)price
                   extraData:(NSString *)extraData
                 currentCode:(NSString * _Nullable)currentCode
               propertyParam:(NSDictionary * _Nullable)propertyParam;

+ (void)firebaseConsent:(BOOL)consent;

+ (void)yoAdjustDidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;

@end

NS_ASSUME_NONNULL_END

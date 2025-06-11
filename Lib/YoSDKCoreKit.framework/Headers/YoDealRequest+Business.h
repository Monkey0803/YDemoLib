//
//  YoDealRequest+Business.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2022/2/16.
//

#import <YoSDKCoreKit/YoSDKCoreKit.h>
#import "YoUtilits.h"

NS_ASSUME_NONNULL_BEGIN

@interface YoDealRequest (Business)

/// 设备登录
- (void)yoDeviceLoginPlatform:(NSInteger)platform;

/// 继承码登录验证
/// @param transcode 引继码
/// @param uid 对应的用户id
///
- (void)yoTransCodeLogin:(NSString *)transcode
                     uid:(NSString *)uid
                platform:(NSInteger)platform;
///日服 生成引继码
- (void)yoTranscodeCreateSuccess:(void (^)(NSString *))success
                    reqFailBlock:(YoResultBlock)fail;

    /// 设置生日
    /// @param birth 生日
    /// @param confirmed 是否确认设置生日(如果为false则会返回具体金额)
    /// @param success 成功回调
    /// @param fail 失败回调
- (void)yoSetBirth:(NSString *)birth
         confirmed:(BOOL)confirmed
      successBlock:(YoResultBlock)success
         failBlock:(YoResultBlock)fail;
///日服 设置生日
/// 设置通行证昵称
/// @param param
/// {
/// "Key": "Birthday" //要设置的属性    生日:"Birthday"; 通行证 "Nickname"
/// "Value": "20201001" //要设置属性的值  生日格式:YYYYMMDD
/// }
- (void)yoSetFunction:(NSDictionary *)param
         successBlock:(_Nullable YoResultBlock)success
            failBlock:(_Nullable YoResultBlock)fail;
- (void)yoCheckTextLegality:(NSString *)text;

- (void)summitLog:(const char *)func
             file:(const char *)file
             line:(NSInteger)line
             code:(NSInteger)code
         linkPath:(NSString *)linkPath;

/// 提交日志
/// @param func 函数名
/// @param file 文件名
/// @param line 调用行
/// @param code 错误码
/// @param linkPath 接口
/// @param extra 额外信息
- (void)summitLog:(const char *)func
             file:(const char *)file
             line:(NSInteger)line
             code:(NSInteger)code
         linkPath:(NSString *)linkPath
            extra:(id _Nullable)extra;
///协议信息
///@param paramArray 协议类型
///@param checkVersion 是否检查版本号
/**
日
user_agreement 用户协议
privacy_agreement 隐私协议
fund_settlement_algorithm 资金结算法
specific_commercial_transaction_act 特定商业交易法
韩

user_agreement 用户协议
credit_investigation 个人信息收集以及使用协议
refund_instructions 退款说明
refund_agreement 退款协议
minors_shop_agreement 未成年人商店协议
personal_information_handling_policy 个人信息处理方针
美

user_agreement 用户协议
privacy_agreement 隐私协议
*/
- (void)userAgreement:(NSArray<NSString *> *)paramArray
         checkVersion:(BOOL)checkVersion
              success:(void(^)(NSArray *array))success
               failed:(void(^)(NSArray *array))failed;
- (void)userAgreement:(NSArray<NSString *> *)paramArray
              success:(void(^)(NSArray *array))success
               failed:(void(^)(NSArray *array))failed;

///主动获取已经生成的继承码
- (void)getTranscode:(void (^)(NSString *))successBlock;

///验证请求
- (void)authRequest:(NSString *)url
           paramDic:(NSDictionary *)paramDic
            success:(_Nullable YoResultBlock)success
               fail:(_Nullable YoResultBlock)fail;

/// 账号删除
- (void)yoDeletedSuccess:(YoResultBlock)success
                    fail:(YoResultBlock)fail;

/// 账号恢复
- (void)yoRebornHeaderParam:(NSDictionary *)headerParam
                    success:(_Nullable YoResultBlock)success
                       fail:(_Nullable YoResultBlock)fail;

- (void)yoAddCreditcardParam:(NSDictionary *)paramDic
                     success:(_Nullable YoResultBlock)success
                        fail:(_Nullable YoResultBlock)fail;
- (void)yoGetCreditcardList:(_Nullable YoResultBlock)success
                       fail:(_Nullable YoResultBlock)fail;
- (void)yoDeleteCreditcardParam:(NSDictionary *)paramDic
                        success:(_Nullable YoResultBlock)success
                           fail:(_Nullable YoResultBlock)fail;

- (void)showAccountCenter:(_Nullable YoResultBlock)success
                     fail:(_Nullable YoResultBlock)fail;
- (void)getURLBy:(NSDictionary *)body
         success:(_Nullable YoResultBlock)success
            fail:(_Nullable YoResultBlock)fail;

- (void)tokenMigrateBody:(NSDictionary *)body
                 success:(YoResultBlock)success
                    fail:(YoResultBlock)fail;
- (void)KMC:(void(^)(NSString *_Nullable url))block;
@end

NS_ASSUME_NONNULL_END

//
//  YoBusinessUtil.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2023/11/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoBusinessUtil : NSObject
+ (NSString *)getUID;
+ (NSString *)getYostarID;

+ (NSString *)loginLogo:(NSInteger)platform;

+ (void)storeUserBirth:(NSString *)birth uid:(NSString *)uidStr;

    ///更新登录历史中的账号信息
    ///@param lastInfoDic 最新数据
+ (void)updateLoginHistory:(NSDictionary *)lastInfoDic;
+ (void)storeLoginHistory:(NSDictionary *)infoDic uid:(NSString *)uidStr;
    /// 删除登录历史对应的账号
    /// @param uidStr uid
    /// @param deleteToken 是否删除对应uid 的token
+ (void)deleteLoginHistoryByUID:(NSString *)uidStr
                    deleteToken:(BOOL)deleteToken;
    ///通过uid删除对应的登录历史
+ (void)deleteLoginHistoryByUID:(NSString *)uidStr;

+ (void)dealMigratePopup:(NSString *)uid
             bindedEmail:(BOOL)bindedEmail;
///根据错误码请求对应的错误信息
+ (NSString *)dealErrorCode:(NSInteger)errorCode;

    /// origin 后追加*
    /// - Parameter origin: origin
+ (NSString *)star:(NSString *)origin;
+ (NSAttributedString *)getStarAttriString:(NSString *)originStr;


    /// 转换GMO的支付方式
    /// - Parameter type: 参考 YoPayPortraitMethodType
+ (NSString *)payType:(NSInteger)type;
    /// 转换GMO的支付来源
    /// - Parameter type: 参考 YoPayPortraitMethodType
+ (NSString *)GMOPayPartner:(NSInteger)type;
+ (void)dealGMOPayCancel;
+ (void)dealGMOPayCancel:(NSString *)orderID;
@end

NS_ASSUME_NONNULL_END

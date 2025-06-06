//
//  YoConfigBusiness.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2023/3/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoConfigBusiness : NSObject


///Apple 支付币种黑名单, 货币数组
+ (NSArray *)appleCurrencyBlockList;
///验证码安全验证，返回值：未定义，true，false
+ (BOOL)GEETEST_ENABLE;
///验证码安全验证ID
+ (NSString *)GEETEST_ID;
///是否开启日志
+ (BOOL)debugEnable;
///对应app的 ID
+ (NSString *)AppleID;
///adjust 注册的事件集合
+ (NSDictionary *)adjustEvent;
///登录配置信息
+ (NSString *)loginConfigInfo;
+ (NSArray <NSString *> *)loginSort;
///客服是不是启用系统默认浏览器
+ (BOOL)customerUserSystemBrowser;
    ///是否在内置浏览器打开调查问卷
+ (BOOL)inWebviewOpenSurvey;
///阅读协议是不是启用系统默认浏览器 默认是系统浏览器
+ (BOOL)agreementPopSystemBrowser;
///韩服年龄
+ (NSString *)ageDesInKr;
///韩服登录最小年龄
+ (NSInteger)loginAgeLimitMin;
///是否显示年龄选项
+ (BOOL)ShowAgeInKr;
///SDK 服务器需要下发是否开启 - 邮箱绑定引导弹窗开关
+ (BOOL)migratePOP;
///detail 需要用到的apple的key
+ (NSString *)appleTypeKey;
///GMO 公钥
+ (NSString *)GMOCCKey;
///绑定方式 4.10.0
///"google",
///"apple_jp",
///"apple_hk",
///"apple",
///"facebook",
///"amazon",
///"steam"
+ (NSArray *)bindMethod;
/// 无感模式 创号方式：0手动点击创号（默认）、1无感创号 4.10.0
+ (NSInteger)guestCreateMethod;
///GMO 支持的支付方式
+ (NSArray *)GMOPayChannel;
///是否在欧盟区域
+ (BOOL)europeUnion;
///协议弹窗是否开启
+ (BOOL)enableAgreement;
///充值限额是否开启
+ (BOOL)rechargeLimitEnable;
@end

NS_ASSUME_NONNULL_END

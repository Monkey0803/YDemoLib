//
//  YoUtilits.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/6/22.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
NS_ASSUME_NONNULL_BEGIN

typedef void (^ YoResultBlock)(NSDictionary * _Nullable r);
typedef void (^ YoResultErrorBlock)(NSDictionary * _Nullable r, NSError * _Nullable e);

extern id DealMayEmpty(id object);
    ///是否是竖屏
extern void SupportOrientationType(void);
extern BOOL IsPortrait(void);
extern UIInterfaceOrientationMask InterfaceOrientationMaskLandscape(void);
extern UIInterfaceOrientationMask InterfaceOrientationMaskPortrait(void);
extern void YoAsyncMainQueue(dispatch_block_t block);
extern BOOL IsEmpty(id object);
///获取 resourceName 在bundle中的地址
FOUNDATION_EXPORT NSString * ResourcePathInBundle(NSString *resourceName);
@interface YoUtilits : NSObject

/// 获取 resourcesName 在 bundle 中的地址
/// - Parameter resourcesName: 资源名称
+ (NSString *)resourcePathInBundle:(NSString *)resourcesName;
+ (NSString *)yostarGetIDFA;

+ (NSString*)deviceType;
+ (BOOL)isEmpty:(id)object;
+ (NSString *)dealURL:(NSString *)url;
+ (BOOL)validURL:(NSString *)url;
    /// 移除原始字符串 首尾空字符
    /// @param origin 原始字符串
    /// @return result
+ (NSString *)removeWhiteSpace:(NSString *)origin;
//是否有账号缓存数据
+ (BOOL)hasCache;
//是否是游客账号 YES 游客账号
+ (BOOL) isGuestAccount;
//通过类名获取类实例
+ (_Nullable id)getInstanceBy:(NSString *)className;
//通过类名获取类
+ (_Nullable Class)getClassBy:(NSString *)className;



///用户协议 三服
+ (BOOL)showUserAgreement;
///隐私协议 美日服
+ (BOOL)showPrivacyAgreement;
///个人信息收集以及使用协议 韩服
+ (BOOL)showCreditInvestigationAgreement;
///同意用户协议 三服
+ (void)agreeUserAgreement;
///同意隐私协议 美日服
+ (void)agreePrivacyAgreement;
///同意个人信息收集以及使用协议 韩服
+ (void)agreeCreditInvestigationAgreement;

+ (NSDateFormatter *)getDateFormatter;
///获取手机当前语言
+ (NSString *)getDeviceCurrentUsedLanguage;
    /// 获取除了区域的语言
+ (NSString *)preferredLanguagesExceptArea;
+ (NSString *)timeDescription:(NSNumber *)loginTime;
+ (NSInteger)toIntegerPlatformBy:(NSString *)platformStr;
+ (NSString *)toStringPlatformBy:(NSInteger)platform;
///删除账号
///@param deletedUID 删除指定的账号 如果uid为空则删除当前登录的uid
///@param deleteHistory 是否需要删除快登中的历史记录
+ (void)deletedUID:(NSString * _Nullable)deletedUID
     deleteHistory:(BOOL)deleteHistory;
///根据平台获取平台明 6 -> apple
///@param platform 平台 YoLoginPlatform
+ (NSString *)loginPlatformName:(NSInteger)platform;
///登录方式排序
+ (NSNumber *)platformFromActionLoginPlatformName:(NSString *)platformName;
+ (NSString *)imageLocalPathFrom:(UIImage *)image;

/// 协议版本号的管理
/// @param version 协议版本号
+ (NSString *)agreementStore:(NSString *)version;

/// 组织log信息
/// @param func 函数
/// @param file 当前文件
/// @param code 错误码
/// @param extra 额外信息
/// @param linkPath 接口
/// @param line 代码调用行
+ (NSString *)logWith:(const char *)func file:(const char *)file line:(NSInteger)line code:(NSInteger)code linkPath:(NSString *)linkPath extra:(id _Nullable)extra;

/// 根据服务器语言格式返回对应的手机支持的语言格式 比如 kr -> ko, jp -> ja
/// @param serverLang 服务器语言
+ (NSString *)localLangFromServerLang:(NSString * _Nullable)serverLang;

+ (BOOL)canShare:(NSString * _Nullable)url
       imagePath:(NSString * _Nullable)imagePath;

///对象序列化成字符串
///@param object 被序列化的对象
///return 字符串 如果 object 为空、序列化失败 返回空字符串
+ (NSString *)objectToString:(id)object;
///字符串或者NSData返序列化
///@param object 字符串 或者 NSData
+ (id)toObject:(id)object;
/**
 四舍五入字符串

 @param round 小数位 eg: 2
 @param numberString 数字 eg 0.125
 @return 四舍五入之后的 eg: 0.13
 */
+ (NSDecimalNumber *)roundNumberStringWithRound:(NSInteger)round
                                   numberString:(NSString *)numberString;
    ///app 安装日期
+ (NSDate *)appInstallationDate;

    /// 返回 aihelp 显示的语言
+ (NSString *)aiHelpLanguage;

    /// 返回 极验 显示的语言
+ (NSString *)geeTestLanguage;

    /// 获取货币符号
+ (NSString *)getCurrencySymbol;

    /// 依据dateFormat把date转换为字符串
    /// - Parameters:
    ///   - date: 日期
    ///   - dateFormat: 日期格式
+ (NSString *)date:(NSDate *)date
            format:(NSString *)dateFormat;

    /// 在日服的情况下 dateFormat
+ (NSString *)dateFormatInJP;
@end

NS_ASSUME_NONNULL_END

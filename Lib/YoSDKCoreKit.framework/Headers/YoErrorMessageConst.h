//
//  YoErrorMessageConst.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2022/2/9.
//

#ifndef YoErrorMessageConst_h
#define YoErrorMessageConst_h
#import <Foundation/Foundation.h>

// Unity msg
FOUNDATION_EXPORT NSString * const UnknownMsg;// 未知错误
FOUNDATION_EXPORT NSString * const SuccessMsg;// 成功
FOUNDATION_EXPORT NSString * const DeviceBannedMsg;// 设备号被封禁
FOUNDATION_EXPORT NSString * const ValidFailMsg;// 验证失败，uid和token不匹配
/**
 用户注销功能未开启
 */
FOUNDATION_EXPORT NSString * const UserDeleteFunctionNotOpenMsg;
FOUNDATION_EXPORT NSString * const CreateFailedMsg;// 创建账号失败
FOUNDATION_EXPORT NSString * const BindFailedMsg;// 绑定账号失败
FOUNDATION_EXPORT NSString * const BindValidFailedMsg;// 绑定账号成功，验证失败，uid和token不匹配，获取Access Token失败
FOUNDATION_EXPORT NSString * const BindIPLimitMsg;// 绑定账号成功，IP访问被限制，获取Access Token失败
FOUNDATION_EXPORT NSString * const BindDeviceBannedMsg;// 绑定账号成功，设备号被封禁，获取Access Token失败
FOUNDATION_EXPORT NSString * const BindUIDBannedMsg;// 绑定账号成功，该UID已被封禁，获取Access Token失败
FOUNDATION_EXPORT NSString * const IPLimitMsg;// IP访问被限制
FOUNDATION_EXPORT NSString * const UIDBannedMsg;// 该UID已被封禁
FOUNDATION_EXPORT NSString * const USERRevoked;// 用户已注销
/// 用户手动关闭了登录视图
FOUNDATION_EXPORT NSString * const USERManuallyCloseLoginUI;
FOUNDATION_EXPORT NSString * const TokenErrorMsg;// accessToken验证错误
FOUNDATION_EXPORT NSString * const TranscodeNotMatchMsg;// 提供的uid和transcode不匹配
FOUNDATION_EXPORT NSString * const AlreadySetBirthMsg;// 用户已经设置过了生日
FOUNDATION_EXPORT NSString * const SurveyRequestErrorMsg;// 用户问卷请求错误
FOUNDATION_EXPORT NSString * const SurveyIDNotFindMsg;// 用户问卷id错误
FOUNDATION_EXPORT NSString * const BirtIsFuturehMsg;// 生日大于当前时间
FOUNDATION_EXPORT NSString * const BirthFormatErrorMsg;// 生日格式不正确
FOUNDATION_EXPORT NSString * const ThirdNotBindMsg;// 提供的twitter、FB或yostar账号并未绑定过游戏账号
FOUNDATION_EXPORT NSString * const CBTLoginRestricted;//CBT登录受限
FOUNDATION_EXPORT NSString * const ThirdValidFailMsg;// 提供的Yostar、twitter或FB的token及secret验证失败
FOUNDATION_EXPORT NSString * const ThirdAlreadyBoundMsg;// 提供的yostar、twitter或FB账号已经绑定过其它的Airi UID
FOUNDATION_EXPORT NSString * const UserLinkedOtherAccountMsg;// 该用户已绑定另一个三方账号
FOUNDATION_EXPORT NSString * const ThirdAlreadyNotRepeatedLinkMsg;//已绑定成功,不能重复绑定
FOUNDATION_EXPORT NSString * const ThirdBoundNotMatchMsg;// 提供的twitter或FB UID和该账户绑定过的不匹配
FOUNDATION_EXPORT NSString * const BindNotExistOrUnlinkedMsg;// 绑定关系不存在或已解绑
FOUNDATION_EXPORT NSString * const ThirdUnBoundFailMsg; // FB\TW 不可解绑，至少FB，TW，YoAccout至少绑定一个
///暂不支持此解绑操作
FOUNDATION_EXPORT NSString * const NotSupportedUnbindingMsg;
FOUNDATION_EXPORT NSString * const ThirdPlatformCancelMsg;// 操作被取消
FOUNDATION_EXPORT NSString * const FBAuthFailedMsg;// FB授权失败
FOUNDATION_EXPORT NSString * const TWAuthFailedMsg;// TW授权失败
FOUNDATION_EXPORT NSString * const UIDDeletedMsg; // 该UID已被用户删除
FOUNDATION_EXPORT NSString * const NoRepeatableMsg; // 不可重复删除
FOUNDATION_EXPORT NSString * const InitFailMsg;// init失败
FOUNDATION_EXPORT NSString * const CompletelyDeletedMsg; // 账号已经完全删除，恢复账号失败
FOUNDATION_EXPORT NSString * const NotDeletedMsg; // 账号没有删除记录，不可恢复
FOUNDATION_EXPORT NSString * const DeletedNotloginMsg; // 账号已经删除，不可登陆
FOUNDATION_EXPORT NSString * const NoLoginPermissionMsg; // 账号没有权限登陆
FOUNDATION_EXPORT NSString * const AppleInforIncorrectMsg; // 授权信息不符
FOUNDATION_EXPORT NSString * const AppleAuthFailedMsg; // 授权请求失败
FOUNDATION_EXPORT NSString * const AppleAuthInvalidResponseMsg; // 授权请求响应无效
FOUNDATION_EXPORT NSString * const AppleAuthNotHandledMsg; // 未能处理授权请求
FOUNDATION_EXPORT NSString * const AppleAuthUnknownMsg; // 授权请求失败未知原因
FOUNDATION_EXPORT NSString * const AppleAuthNotUseMsg; // 该系统版本不可用Apple登录
FOUNDATION_EXPORT NSString * const HasSendLimitMsg;// 邮箱发送频率上限，（1分钟1条，60分钟30条，24小时120条）
FOUNDATION_EXPORT NSString * const TranseCodeSendLimitMsg;
FOUNDATION_EXPORT NSString * const VerifyFailedMsg;// 验证失败，30分钟超时，或验证码不一致
FOUNDATION_EXPORT NSString * const VerifyManyFailedMsg;// 验证失败次数过多，失败10次，此验证码过期，请重新获取
FOUNDATION_EXPORT NSString * const AccountBannedMsg;// 账户被封禁

    /// 当前项目未配置迁移URL，不做迁移处理
FOUNDATION_EXPORT NSString * const TokenMigrateNotMigrateURLMsg;
    // 迁移失败 2.x服务不可用
FOUNDATION_EXPORT NSString * const TokenMigrate2XServiceUnavailableMsg;
    /// Token迁移失败，信息不匹配
FOUNDATION_EXPORT NSString * const TokenMigrateFailedByNotMatchMsg;

///通行证不存在
FOUNDATION_EXPORT NSString * const PassNotExitMsg;
///请先绑定邮箱后，再进行此操作(邮箱不存在)
FOUNDATION_EXPORT NSString * const EmailNotExistOnBindEmail;
///需要检查图形验证码
FOUNDATION_EXPORT NSString * const NeedCheckGraphicCaptchaMsg;
///图形验证码校验失败
FOUNDATION_EXPORT NSString * const GraphicVerificationFailedMsg;
FOUNDATION_EXPORT NSString * const TokenAuthFailedMsg;// token 授权失败
FOUNDATION_EXPORT NSString * const ClientParameterErrorMsg;// 客户端请求参数错误
FOUNDATION_EXPORT NSString * const ServerErrorMsg;// 服务器异常
FOUNDATION_EXPORT NSString * const RequestUnauthorizedMsg;// 请求未授权
FOUNDATION_EXPORT NSString * const ServerNotInWhitelist;//初始化URL在白名单中
FOUNDATION_EXPORT NSString * const NetErrorMsg;// 网络错误
FOUNDATION_EXPORT NSString * const PayNotBirthMsg;// 创建订单失败 - 用户生日未设置
FOUNDATION_EXPORT NSString * const PayUpperLimitMsg;// 创建订单失败 - 用户当月充值已超过保护上限
//FOUNDATION_EXPORT NSString * const PayConvenienceStoreCreateOrderFailed;//便利店创单失败
FOUNDATION_EXPORT NSString * const PayGMOCreateOrderFailed;//gmo创单失败
FOUNDATION_EXPORT NSString * const PayGoodsNotExistMsg;// 创建订单失败 - 订单信息有误/商品不存在
FOUNDATION_EXPORT NSString * const PayGoodsNotExistInServerMsg;// 创建订单失败 - 订单信息有误/商品在服务端不存在
FOUNDATION_EXPORT NSString * const PayGoodsNotExistInAppStoreMsg;// 创建订单失败 - 商品在 App Store不存在
/// 订单无法支付，当前 Apple 账号的支付币种，不支持在该游戏内使用
UIKIT_EXTERN NSString * const PayCurrencyNotSupportMsg;
///设备不支持支付
FOUNDATION_EXPORT NSString * const PayThisDeviceNotSupportPayMsg;
FOUNDATION_EXPORT NSString * const PayChannelNotExistMsg;// 创建订单失败 - 订单信息有误/付款渠道不存在
FOUNDATION_EXPORT NSString * const PayServerTagNotExistMsg;// 创建订单失败 - serverTag不存在
FOUNDATION_EXPORT NSString * const PayReceiptFailedMsg;// 支付收据验证失败
FOUNDATION_EXPORT NSString * const PayReceiptOrderDoNotMatchMsg;
FOUNDATION_EXPORT NSString * const PayIllegalPurchaseMsg;// 非法购买请求（用户token错误、订单、商品不存在等）
FOUNDATION_EXPORT NSString * const PayPurchaseFailedMsg;// 游戏服务端购买请求失败（游戏逻辑服务器认为购买非法）
FOUNDATION_EXPORT NSString * const PayPurchaseConfirmOrderRequestFrequent;// 确认订单请求过于频繁
FOUNDATION_EXPORT NSString * const PayClientPollingMsg;// 正在进行相关请求，时间较长，通知客户端进行轮询
FOUNDATION_EXPORT NSString * const PayOrderNotExistMsg;// 订单编号不存在
FOUNDATION_EXPORT NSString * const PayOrderStatusTimeoutMsg;// 查询订单状态超时
FOUNDATION_EXPORT NSString * const PayProductidNotExistMsg;// appstorepay 后台没有这个productid
FOUNDATION_EXPORT NSString * const PayAppStorePayFailedMsg;// appstorepay 失败
FOUNDATION_EXPORT NSString * const PayAppStorePayCancelMsg;// appstorepay 取消
FOUNDATION_EXPORT NSString * const PayAppStorePayRepeatMsg;// 重复创建订单
FOUNDATION_EXPORT NSString * const PayAppStorePayUnfinishedMsg;// 有未完成的订单
FOUNDATION_EXPORT NSString * const PayAppStorePayNotConfirmedMsg;// 你有必要的协议还没有确认
FOUNDATION_EXPORT NSString * const ShareFailMsg;// 分享失败
FOUNDATION_EXPORT NSString * const ProjectNotExistMsg;// 项目不存的
FOUNDATION_EXPORT NSString * const ProjectUpgradeMsg;// 项目升级维护中
FOUNDATION_EXPORT NSString * const ProjectOfflineMsg;// 项目已下线
///渠道不存在
FOUNDATION_EXPORT NSString * const ChannelNotExitMsg;
///此游戏版本已被停用
FOUNDATION_EXPORT NSString * const GameVersionDisabledMsg;
///该登陆方式未开启
FOUNDATION_EXPORT NSString * const LoginMethodNotEnabledMsg;
///uid和transcode不匹配
FOUNDATION_EXPORT NSString * const LoginUIDNotMatchTranscodeMsg;
#pragma mark ---- pass ----
///提供的三方账号已被其它通行证绑定
FOUNDATION_EXPORT NSString * const ThirdAccountBindedByOtherPassMsg;
///该通行证已绑定另一个三方账号,请先解绑
FOUNDATION_EXPORT NSString * const PassBindedByOtherThirdAccount;
///通行证昵称格式有误
FOUNDATION_EXPORT NSString * const PassNicknameFormatErrorMsg;
///通行证昵称非法
FOUNDATION_EXPORT NSString * const PassNicknameIsIllegalMsg;
///当前通行证昵称正在审核中，请稍后再试
FOUNDATION_EXPORT NSString * const PassNicknameIsReviewingMsg;
///该通行证已绑定其它用户,不支持与本用户进行绑定
FOUNDATION_EXPORT NSString * const PassBindByOtherNotSuppportBindErrorMsg;
///绑定关系不存在或已解绑
FOUNDATION_EXPORT NSString * const BindRelationshipNotExistOrUndoundMsg;
///通行证账号迁移失败，请联系客服
FOUNDATION_EXPORT NSString * const PassAccountMigrationFailedMsg;
///通行证不存在
FOUNDATION_EXPORT NSString * const PassNotExistMsg;
///文本审核调用失败：AppID is empty
FOUNDATION_EXPORT NSString * const TextModerationCallFailedMsg;
FOUNDATION_EXPORT NSString * const PIDInvaildMsg;
    /// 极验 验证失败
FOUNDATION_EXPORT NSString * const GeeTestFailedMsg;
    /// 极验 的token在服务器验证失败
FOUNDATION_EXPORT NSString * const GeeTestTokenInServiceVeryFailedMsg;
#endif /* YoErrorMessageConst_h */

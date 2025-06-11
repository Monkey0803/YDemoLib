//
//  YoHelperDefine.h
//  YostarSDK
//
//  Created by Yostar on 2018/7/18.
//

#ifndef YoHelperDefine_h
#define YoHelperDefine_h
#import <UIKit/UIKit.h>
//导入公用头文件
typedef NS_ENUM(NSUInteger, GMOPayMethod) {
    ///即时支付
    Instant = 0,
    ///预支付
    Prepaid
};
//NSString *creditcard = @"GMOCreditcard", *payPay = @"GMOPaypay", *au = @"GMOAu", *docomo = @"GMODocomo", *softbank = @"GMOSoftbank", *paypal = @"GMOPaypal";
/**
 public enum PaymentMode
    {
        All = 0,

        GMOCreditcard = 1,
        GMOPaypay = 2,
        GMOAu = 3,
        GMODocomo = 4,
        GMOSoftbank = 5,
        GMOPaypal = 6,
        //GMOCvs = 11, 便利店支付是单独的接口

        Paypal = 7,
        Stripe = 8,
        Toss = 9,
        Webmoney = 10,
    };
 */
typedef NS_ENUM(NSUInteger, PaymentMode) {
    All = 0,
    Creditcard,
    Paypay,
    Au,
    Docomo,
    Softbank,
    Paypal,
};

/**
 UNKNOW = -1，
         DEVICE = 0,     //设备登陆
         MIGRATIONCODE = 1,  //引继码登陆
         TWITTER = 2,    //twitter登陆
         FACEBOOK = 3,   //facebook登陆
         YOSTAR = 4,     //悠星账号
         GOOGLE = 5,     //Google账号登陆
         APPLE = 6,
     }
 */

typedef NS_ENUM(NSInteger, YoLoginPlatform){
    YoLoginPlatformUnknow = -1,
    YoLoginPlatformDevice = 0,
    YoLoginPlatformTranscode = 1,
    YoLoginPlatformTwitter = 2,
    YoLoginPlatformFacebook = 3,
    YoLoginPlatformYostar = 4,
    YoLoginPlatformGoogle = 5,
    ///apple新加坡
    YoLoginPlatformApple = 6,
        ///通行证
    YoLoginPlatformYostarPass = 9,
    YoLoginPlatformAmazon = 10,
    YoLoginPlatformSteam = 11,
    
    ///以下内部使用
    
    YoLoginPlatformRecoveryEmail = 100,
        ///apple香港
    YoLoginPlatformAppleHK = 101,
        ///apple日本
    YoLoginPlatformAppleJP = 102,
    
    YoLoginPlatformMore = 1000,
};

typedef NS_ENUM(NSUInteger, YoStarPayType) {
    ///IAP
    YoStarPayTypeSDK = 0,
    ///GMO线上支付(au、PayPal、paypay、softbank、docomo、信用卡)
    YoStarPayTypeGMOOnline,
    ///GMO线下支付(便利店)
    YoStarPayTypeGMOOffline,
};

///网络请求平台
typedef NS_ENUM(NSInteger, YoNetRequestPlatform){
    YoNetRequestPlatformSDK = 0,
    YoNetRequestPlatformPush = 1,
};



typedef NS_ENUM(NSInteger, YoErrorCode){
    YoErrorCodeUnknown = -1,  // 未知错误
    YoErrorCodeSuccess = 0,  // 成功
    YoErrorCodeDeviceBanned = 100100,  // 设备号被封禁
    YoErrorCodeValidFail = 100110,  // 验证失败，uid和token不匹配
    
//    YoErrorCodeBindFailed = 100112, // 绑定账号失败
//    YoErrorCodeBindValidFailed = 100113, // 绑定账号成功，验证失败，uid和token不匹配，获取Access Token失败
//    YoErrorCodeBindIPLimit = 100114, // 绑定账号成功，IP访问被限制，获取Access Token失败
//    YoErrorCodeBindDeviceBanned = 100115, // 绑定账号成功，设备号被封禁，获取Access Token失败
//    YoErrorCodeBindUIDBanned = 100116, // 绑定账号成功，该UID已被封禁，获取Access Token失败
    YoErrorCodeIPLimit = 100120,  // IP访问被限制
    YoErrorCodeUIDBanned = 100130,  // 该UID已被封禁(代表UID 被封禁，只删除自动登录缓存，快登记录不删除；但是当用户在快登界面手动删除一个账号时，遇到此code 需要同时删除自动登录缓存和快登记录缓存)
    YoErrorCodeGameUserInCoolDay = 100131,  // 游戏用户处于冷静期
    YoErrorCodeYostarPassInCoolDay = 100141,  // 通行证用户处于冷静期
    /// 用户主动关闭了登录视图
    YoErrorCodeUserCloseLoginUI = 100132,
        /// 用户年龄限制
    YoErrorCodeUserAgeLimit = 100133,
//    YoErrorCodeTokenError = 100140,  // accessToken验证错误
    YoErrorCodeTranscodeNotMatch = 100150,  // 提供的uid和transcode不匹配
    YoErrorCodeAlreadySetBirth = 100160,  // 用户已经设置过了生日
    YoErrorCodeBirthIsFuture = 100161,  // 生日不能大于当前时间
    YoErrorCodeThirdNotBind = 100180,  // 提供的twitter、FB或yostar账号并未绑定过游戏账号
    YoErrorCodeThirdValidFail = 100190,  // 提供的Yostar、twitter或FB的token及secret验证失败
    YoErrorCodeThirdAlreadyBound = 100200,  // 提供的yostar、twitter或FB账号已经绑定过其它的Airi UID
    YoErrorCodeUserLinkedOtherThirdAccount = 100201,  // 该用户已绑定另一个三方账号
    YoErrorCodeThirdBoundNotMatch = 100210,  // 提供的twitter或FB UID和该账户绑定过的不匹配
    YoErrorCodeThirdBoundNotExistOrUnliked = 100211,  // 绑定关系不存在或已解绑
    YoErrorCodeThirdPlatformCancel = 100220,  // 第三方平台登录取消
    YoErrorCodeFBAuthFailed = 100221,  // FB授权失败
    YoErrorCodeTWAuthFailed = 100222,  // TW授权失败
    YoErrorCodeNoRepeatable = 100229,    // 不可重复删除
    YoErrorCodeInitFail = 100230,  // init失败
    YoErrorCodeCompletelyDeleted = 100231,  // 账号已经完全删除，恢复账号失败
    YoErrorCodeNotDeleted = 100232,  // 账号没有删除记录，不可恢复
    /// 账号已经删除，不可登陆，可恢复账号
    YoErrorCodeGameDeletedNotlogin = 100233,
      /// 通行证账号已经删除，不可登陆， 可恢复账号
    YoErrorCodeYostarPassDeletedNotlogin = 101234,
        /// 通行证账号和游戏账号已经删除，不可登陆， 可恢复账号
    YoErrorCodeYostarPassAndGameDeletedNotlogin = 101235,
    YoErrorCodeDeletedFunctionNotOpen = 100235,
    ///    该登陆方式未开启(new)
    YoErrorCodeLoginMethodNotEnabled = 100236,
    
    //用户注销功能为开启
//    YoErrorCodeNoLoginPermission = 100234,  // 账号没有权限登陆
    YoErrorCodeAppleInforIncorrect = 100240,  // 授权信息不符
    YoErrorCodeAppleAuthFailed = 100242,  // 授权请求失败
    YoErrorCodeAppleAuthInvalidResponse = 100243,  // 授权请求响应无效
    YoErrorCodeAppleAuthNotHandled = 100244,  // 未能处理授权请求
    YoErrorCodeAppleAuthUnknown = 100245,  // 授权请求失败未知原因
    YoErrorCodeAppleAuthNotUse = 100246,  // 该系统版本不可用Apple登录
    /// 邮箱发送频率上限，（1分钟1条，60分钟30条，24小时120条）
    YoErrorCodeHasSendLimit = 100302,
    /// 验证失败，30分钟超时，或验证码不一致
    YoErrorCodeVerifyFailed = 100303,
//    YoErrorCodeVerifyManyFailed = 100304,  // 验证失败次数过多，失败10次，此验证码过期，请重新获取
    /// 账户被封禁
    YoErrorCodeAccountBanned = 100305,
    YoErrorCodeTranseCodeSendLimit = 100308,  // 引继码请求频率过快
    /// 极验 返回验证失败
    YoErrorCodeGeeTestFailed = 100310,
    /// 极验 的返回数据在服务器验证不通过
    YoErrorCodeGeeTestInServiceVeryFailed = 100311,
    YoErrorCodeClientParameterError = 100400,  // 客户端请求参数错误
    YoErrorCodeRequestUnauthFailed = 100401,  // 请求网络时未授权
    YoErrorCodeTokenAuthFailed = 100403,  // 请求网络时token过期
    YoErrorCodeNetError = 100404,  // 网络错误
    YoErrorCodeServerError = 100500,  // 请求网络时服务器异常
    YoErrorCodeServerNotInWhitelist = 100502,  //初始化URL在白名单中
    ///参数为空
    YoErrorCodeParamIsEmpty = 100600,
    ///传入的PID不合法
    YoErrorCodeParamPIDInvalid = 100601,
    YoErrorCodeCBTLoginRestricted = 100700,  // CBT登录受限
    YoErrorCodeNeedCheckCaptcha = 100710, // 需要检查图形验证码 need to check graphic captcha
    YoErrorCodeGraphicVerificationFailed = 100711, //图形验证码校验失败 Graphic verification code verification failed
    YoErrorCodeSurveyFetchError = 100801,//问卷请求错误
    YoErrorCodeSurveySurveyNotFound = 100802,//问卷ID没有找到
    YoErrorCodeNotSupportThisFunction = 101600, //不支持此功能
    YoErrorCodeSetBirthFailed = 101601, //设置生日失败
    YoErrorCodeManualDetectNotEnable = 101602, //手动检测功能未开启
    
    ///The current project does not have a migration URL configured and will not be migrated.
    YoErrorCodeNotMigrateURL = 110404,  // 当前项目未配置迁移URL，不做迁移处理
    ///Login failed 2.x service is unavailable
    YoErrorCode2XServiceUnavailable = 110110,  // 登录失败 2.x服务不可用
    ///Token migration failed, information does not match
    YoErrorCodeMigrateFailedByNotMatch = 110130,  // Token迁移失败，信息不匹配
    
    
    YoErrorCodePayNotBirth = 200100,  // 创建订单失败 - 用户生日未设置
    YoErrorCodePayUpperLimit = 200110,  // 创建订单失败 - 用户当月充值已超过保护上限
    YoErrorCodePayGoodsNotExistInServer = 200120,  // 创建订单失败 - 订单信息有误/商品在服务端不存在
    YoErrorCodePayGoodsNotExistInAppStore = 200350,  // 创建订单失败 - 商品在App Store不存在
    YoErrorCodePayChannelNotExist = 200130,  // 创建订单失败 - 订单信息有误/付款渠道不存在
    YoErrorCodePayServerTagNotExist = 200140,  // 创建订单失败 - serverTag不存在
    YoErrorCodePayCurrencyNotSupport = 200141,  // 订单无法支付，当前 Apple 账号的支付币种，不支持在该游戏内使用
    YoErrorCodePayReceiptFailed = 200150,  // 支付收据验证失败
    YoErrorCodePayReceiptOrderDoNotMatch = 200151,  // 收据和订单不匹配
    YoErrorCodeOrderPayedButRenewConfirm = 200152,  // 订单已完成支付,不能重新确认订单
    YoErrorCodeOrderCreateFailedInGMO = 200153,  // gmo创单失败
//    YoErrorCodeOrderCreateFailedInConvenienceStore = 200154,  // 便利店创单失败
    YoErrorCodePayIllegalPurchase = 200160,  // 非法购买请求（用户token错误、订单、商品不存在等）
    YoErrorCodePayPurchaseFailed = 200170,  // 游戏服务端购买请求失败（游戏逻辑服务器认为购买非法）
    YoErrorCodePayClientPolling = 200180,  // 正在进行相关请求，时间较长，通知客户端进行轮询
    YoErrorCodePayWaitForOfflinePay = 200181,  // 等待玩家线下支付
    YoErrorCodePayPaymentMethodNotTurnedOn = 201182,  // 支付方式未开启
    YoErrorCodePayOrderNotExist = 200190,  // 订单编号不存在
    YoErrorCodePayConfirmOrderRequestFrequent = 200429,  // 确认订单请求过于频繁
    YoErrorCodePayOrderStatusTimeout = 200200,  // 查询订单状态超时
    YoErrorCodePayProductidNotExist = 200210,  // appstorepay 后台没有这个productid
    YoErrorCodePayAppStorePayFailed = 200220,  // appstorepay 失败
    YoErrorCodePayAppStorePayCancel = 200230,  // appstorepay 取消
    YoErrorCodePayThisDeviceNotSupportPay = 201232,  // 设备不支持appstorepay
    YoErrorCodePayAppStorePayRepeat = 200370,  // 重复创建订单
    YoErrorCodePayAppStorePayNotConfirmed = 200380,  // 你有必要的协议还没有确认
    YoErrorCodePayAppStorePayUnfinished = 200390, //有未完成的支付
    YoErrorCodeShareFail = 300100,  //分享失败
    YoErrorCodeNotificationPermissionNotTrunOn = 301000,  //通知权限未开启
    YoErrorCodeLocalNotificationCreateFailed = 301001,  //本地通知创建失败
    YoErrorCodeShareFuncNotTrunOn = 300101,  //分享功能未开启
    YoErrorCodeShareAppNotInDevice = 300102,  //未安装该APP
    YoErrorCodeShareCancel = 300103,  //分享取消
    YoErrorCodeProjectNotExist = 300200,  //项目不存的
    YoErrorCodeProjectUpdateMaintenance = 300201,  //项目升级维护中
    YoErrorCodeProjectOffline = 300202,  //项目已下线
    YoErrorCodeChannelNotExist = 300203,  //渠道不存在
    ///此游戏版本已被停用
    YoErrorCodeThisGameVersionDisabled = 300204,
    ///通行证昵称格式有误
    YoErrorCodePassNickNameFormatError = 400131,
    ///请先绑定邮箱后，再进行此操作(邮箱不存在)
    YoErrorCodeEmailNotExistOnBindEmail = 400132,
    /// 暂不支持此解绑操作
    YoErrorCodeNotSupportedUnbind = 400133,
    ///绑定关系不存在或已解绑
    YoErrorCodeBindNotExistOrUnbinded = 400134,
    ///400135 通行证昵称非法
    YoErrorCodePassNicknameIsIllegal = 400135,
    ///400136 当前通行证昵称正在审核中，请稍后再试
    YoErrorCodePassNicknameReviewing = 400136,
    ///文本审核调用失败：AppID is empty
    YoErrorCodeTextModerationFailed = 400141,
    ///提供的三方账号已被其它通行证绑定
    YoErrorCodeThirdAccountBindedByOtherPass = 400200,
    ///该通行证已绑定另一个三方账号,请先解绑
    YoErrorCodePassBindedByOtherThirdAccount = 400201,
    ///已绑定成功,不能重复绑定
    YoErrorCodeRepeatLink = 400202,
    ///无法解除绑定，至少绑定一个第三方帐户
    YoErrorCodeThirdUnBoundFail = 400213,
    ///400214 通行证不存在
    YoErrorCodePassNotExist = 400214,
    
    ///该通行证已绑定其它用户,不支持与本用户进行绑定
    YoErrorCodePassBindByOtherNotSuppportBind = 400215,
    ///通行证账号迁移失败，请联系客服
    YoErrorCodePassAccountMigrationFailed = 400400

     
    
};

// Unity 回调参数
UIKIT_EXTERN char * const UNITYCALLBACKCLASS;
UIKIT_EXTERN char * const UNITYCALLBACKMETHOD;

// Unity method
UIKIT_EXTERN NSString * const InitMethod;
UIKIT_EXTERN NSString * const LoginMethod;
UIKIT_EXTERN NSString * const LogoutMethod;
UIKIT_EXTERN NSString * const SwitchAreaMethod;
UIKIT_EXTERN NSString * const LinkMethod;
UIKIT_EXTERN NSString * const UnLinkMethod;
UIKIT_EXTERN NSString * const TranscodeMethod;
UIKIT_EXTERN NSString * const SetBirthMethod;
/**
 用户问卷
 */
UIKIT_EXTERN NSString * const UserSurveyMethod;
UIKIT_EXTERN NSString * const BuyMethod;
UIKIT_EXTERN NSString * const QuerySkuDetailsMethod;
UIKIT_EXTERN NSString * const SysShareMethod;
UIKIT_EXTERN NSString * const ClearSDKCacheMethod;
UIKIT_EXTERN NSString * const AccountRegisterMethod;
UIKIT_EXTERN NSString * const VerificationCodeMethod;
UIKIT_EXTERN NSString * const DeleteUIDMethod;
UIKIT_EXTERN NSString * const RebornUIDMethod;
UIKIT_EXTERN NSString * const GetAgreementNotifyMethod;
UIKIT_EXTERN NSString * const GetShopAgreementNotifyMethod;
UIKIT_EXTERN NSString * const GetUnderAgeAgreementNotifyMethod;
UIKIT_EXTERN NSString * const QueryTextLegalityNotifyMethod;
UIKIT_EXTERN NSString * const PushMsgReceivedMethod;
/// 本地通知构建
UIKIT_EXTERN NSString * const LocalNotificationBuildMethod;
UIKIT_EXTERN NSString * const AccountCenterMethod;
UIKIT_EXTERN NSString * const UniversalLinkMethod;
UIKIT_EXTERN NSString * const FetchDeviceTrackingIDMethod;
// 保存用户数据key
UIKIT_EXTERN NSString * const PAYKEY;

///当前登录账号的token
UIKIT_EXTERN NSString * const TOKENKEY;
///当前登录账号的uid
UIKIT_EXTERN NSString * const UIDKEY;
///游客的token
UIKIT_EXTERN NSString * const GUESTTOKENKEY;
///游客的uid
UIKIT_EXTERN NSString * const GUESTUIDKEY;
///当前登录账号的信息
UIKIT_EXTERN NSString * const CurrentLoginUserKEY;
UIKIT_EXTERN NSString * const ISGUESTKEY;
UIKIT_EXTERN NSString * const CREATENEWKEY;
UIKIT_EXTERN NSString * const PLATFORMNEWKEY;
UIKIT_EXTERN NSString * const DEVICEIDKEY;
UIKIT_EXTERN NSString * const STOREIDKEY;
UIKIT_EXTERN NSString * const RESULTKEY;
UIKIT_EXTERN NSString * const TRANSCODEKEY;
UIKIT_EXTERN NSString * const FBUIDKEY;
UIKIT_EXTERN NSString * const FBUSERNAMEKEY;
UIKIT_EXTERN NSString * const FBTOKENKEY;
UIKIT_EXTERN NSString * const TWTOKENKEY;
UIKIT_EXTERN NSString * const TWSECRETKEY;
UIKIT_EXTERN NSString * const TWUSERNAMEKEY;
UIKIT_EXTERN NSString * const TWIDKEY;
UIKIT_EXTERN NSString * const BIRTHKEY;
UIKIT_EXTERN NSString * const ACCOUNTKEY;
UIKIT_EXTERN NSString * const CODEKEY;
UIKIT_EXTERN NSString * const YOSTARUIDKEY;
UIKIT_EXTERN NSString * const YOSTARTOKENKEY;
UIKIT_EXTERN NSString * const YOSTARUSERNAMEKEY;
///存储当前登录的账号信息
UIKIT_EXTERN NSString * const CACHEINFORDICTKEY;
UIKIT_EXTERN NSString * const CHANNELIDPARAMKEY;
UIKIT_EXTERN NSString * const CHANNELIDPARAMVALUE;

// Unity callback 字段
UIKIT_EXTERN NSString * const CHANNELIDKEY;
UIKIT_EXTERN NSString * const METHODKEY;
UIKIT_EXTERN NSString * const RCODEKEY;
UIKIT_EXTERN NSString * const RMSGKEY;
UIKIT_EXTERN NSString * const NUID;
UIKIT_EXTERN NSString * const AllLoginUserHistory;
UIKIT_EXTERN NSString * const CHECKAGE;
UIKIT_EXTERN NSString * const AgeVerifyMethod;
///保存七日是否需要显示pop
UIKIT_EXTERN NSString * const SevenDaysNotShowKey;
///当前区服
UIKIT_EXTERN NSString * const CURRENTAREA;
UIKIT_EXTERN NSString * const ISNEW;
UIKIT_EXTERN NSString * const LOGINUIDKEY;
UIKIT_EXTERN NSString * const LOGINUID2KEY;
UIKIT_EXTERN NSString * const LOGINTOKENKEY;
UIKIT_EXTERN NSString * const LOGINNAMEKEY;
UIKIT_EXTERN NSString * const NACCESSTOKEN;
UIKIT_EXTERN NSString * const NSDKNAME;
UIKIT_EXTERN NSString * const GOOGLENAME;
UIKIT_EXTERN NSString * const NBIRTH;
UIKIT_EXTERN NSString * const NTRANSCODE;
UIKIT_EXTERN NSString * const ISBINDGUESTKEY;
UIKIT_EXTERN NSString * const PLATFORMKEY;
UIKIT_EXTERN NSString * const LINKPLATFORMKEY;
UIKIT_EXTERN NSString * const SOCAILNAMEKEY;
UIKIT_EXTERN NSString * const FACEBOOKNAMEKEY;
UIKIT_EXTERN NSString * const TWITTERNAMEKEY;
///Apple新加坡
UIKIT_EXTERN NSString * const APPLENAMEKEY;
    ///Apple香港
UIKIT_EXTERN NSString * const APPLENAMEHKKEY;
    ///Apple日本
UIKIT_EXTERN NSString * const APPLENAMEJPKEY;
UIKIT_EXTERN NSString * const AMAZONNAMEKEY;
UIKIT_EXTERN NSString * const STEAMNAMEKEY;
UIKIT_EXTERN NSString * const EXTRADATAKEY;
UIKIT_EXTERN NSString * const ORDERIDKEY;
UIKIT_EXTERN NSString * const AgreementsKEY;
UIKIT_EXTERN NSString * const SHOPAGREEMENTKEY;
UIKIT_EXTERN NSString * const OperationingDeleteHistoryKey;

    ///支付的商品的信息
UIKIT_EXTERN NSString * const PayInfoObject;
///支付的商品id
UIKIT_EXTERN NSString * const PayedProductId;
///支付的回调URL
UIKIT_EXTERN NSString * const PayedNotifyUrl;
///支付的附带数据
UIKIT_EXTERN NSString * const PayedExtraData;


///账号删除回调地址
UIKIT_EXTERN NSString * kAccountDeleteNotifyUrl;
///账号恢复回调地址
UIKIT_EXTERN NSString * kAccountRecoveredNotifyUrl;
    ///账号删除、恢复额外信息
UIKIT_EXTERN NSString * kAccountExtraData;
//删除是否有冷静期， 类型bool
UIKIT_EXTERN NSString * const HasCoolDays;
//删除时的时间戳，单位毫秒
UIKIT_EXTERN NSString * const RDeleteTime;
// 用户删除等待天数
UIKIT_EXTERN NSString * const RCoolWaitDay;
UIKIT_EXTERN NSString * const RDeleteFormatTime;
UIKIT_EXTERN NSString * const RYostarPassDeleteFormatTime;
UIKIT_EXTERN NSString * const ConfirmedVersion;
UIKIT_EXTERN NSString * const UnconfirmedVersion;
//美服接受游戏资讯
UIKIT_EXTERN NSString * const AcceptGameInfoInEN;
///韩服年龄
UIKIT_EXTERN NSString * const UnderAge14;
///错误码版本管理
UIKIT_EXTERN NSString * const ErrorCodeVersion;

#pragma mark ---- 第三方账号接口 ----
    ///MARK: --- game role info

UIKIT_EXTERN NSString * const kGameServerIDKey;
UIKIT_EXTERN NSString * const kGameRoleIDKey;
UIKIT_EXTERN NSString * const kGameRoleNameKey;
UIKIT_EXTERN NSString * const kGameRoleTagsKey;
UIKIT_EXTERN NSString * const kGameCustomFieldKey;

#pragma mark ---- Plist Key ----

//错误码
UIKIT_EXTERN NSString * const CODEDATAPLISTKEY;
//用户数据
UIKIT_EXTERN NSString * const USERDATAPLISTKEY;
//初始化数据
UIKIT_EXTERN NSString * const INITDATAPLISTKEY;

UIKIT_EXTERN NSString * const AllCacheInforDictKey;
#pragma mark ---- 协议 ----
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
//用户协议
UIKIT_EXTERN NSString * const USERAGREEMENTTYPE;
//隐私协议
UIKIT_EXTERN NSString * const PRIVACYAGREEMENTTYPE;
//个人信息收集以及使用协议
UIKIT_EXTERN NSString * const CREDITINVERSTIGATIONTTYPE;
///个人信息处理方针
UIKIT_EXTERN NSString * const PERSONALINFOMATIONHANDLPOLICYTYPE;
//退款说明
UIKIT_EXTERN NSString * const REFUNDINSTRUCTIONTYPE;
//退款协议
UIKIT_EXTERN NSString * const REFUNDAGREEMENTTYPE;
//未成年人商店协议
UIKIT_EXTERN NSString * const MINORSSHOPAGREEMENTTYPE;
//资金结算法
UIKIT_EXTERN NSString * const FUNDSETTLEMENTTYPE;
//特定商业交易法
UIKIT_EXTERN NSString * const SPECIFICCOMMERICALTYPE;

///协议版本管理
///日美
UIKIT_EXTERN NSString * const USERAGREEMENTVersion;
UIKIT_EXTERN NSString * const PRIVACYAGREEMENTVersion;
///韩服
UIKIT_EXTERN NSString * const CREDITINVESTIGATIONVersion;

UIKIT_EXTERN NSString * const THIRDACCOUNTFACEBOOKKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTTWITTERKEY;
///新加坡
UIKIT_EXTERN NSString * const THIRDACCOUNTAPPLEKEY;
///香港
UIKIT_EXTERN NSString * const THIRDACCOUNTAPPLEHKKEY;
///日本
UIKIT_EXTERN NSString * const THIRDACCOUNTAPPLEJPKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTRecoveryEmailKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTYOSTARKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTAMAZONKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTSTEAMKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTDEVICEKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTGOOGLEKEY;
UIKIT_EXTERN NSString * const THIRDACCOUNTTRANSCODEKEY;
#pragma mark ---- 参数key ----

UIKIT_EXTERN NSString * const PARAMTYPEKEY;
UIKIT_EXTERN NSString * const PARAMOPENIDKEY;
UIKIT_EXTERN NSString * const PARAMUSERNAMEKEY;
UIKIT_EXTERN NSString * const PARAMSECRETKEY;
UIKIT_EXTERN NSString * const PARAMCHECKACCOUNTEKEY;
///通行证ID
UIKIT_EXTERN NSString * const YostarPassID;
///游戏角色信息
UIKIT_EXTERN NSString * const GameRoleInfoCollection;
    ///美服
UIKIT_EXTERN NSString * const APPSERVICEEN;
///日服
UIKIT_EXTERN NSString * const APPSERVICEJP;
///韩服
UIKIT_EXTERN NSString * const APPSERVICEKR;
///台服
UIKIT_EXTERN NSString * const APPSERVICETW;
    ///美服2
UIKIT_EXTERN NSString * const APPSERVICEMN;

UIKIT_EXTERN NSString * const kDebugStatusKey;

///平台 appstore
UIKIT_EXTERN NSString * PayStoreId;
///AIHelp url 日服跳转到指定URL
UIKIT_EXTERN NSString * AIHelpURL;
///AIHelp 的 domain
UIKIT_EXTERN NSString * Aihelp_Domain;
///AIHelp 的 AppID
UIKIT_EXTERN NSString * Aihelp_Appid;
///AIHelp 的 api key
UIKIT_EXTERN NSString * Aihelp_Api_Key;
///Kakao 的 api key
UIKIT_EXTERN NSString * KaKao_Key;
///pid
UIKIT_EXTERN NSString * PID;

///切换区服是否可用
UIKIT_EXTERN BOOL YoChange_Server_Enable;
UIKIT_EXTERN UIEdgeInsets  DeviceSafeAreaInset;
///APP 当前区服 ja、en、kr
UIKIT_EXTERN NSString * APPGL;
/// APP 当前使用的语言
UIKIT_EXTERN NSString *APPCurrentUsedLanguage;
/// APP 当前使用的协议语言
UIKIT_EXTERN NSString *APPCurrentAgreementLanguage;
///SDK 的版本号
UIKIT_EXTERN NSString * YoSDKVersion;

///在初始化接口中，需要客户端新增入参游戏服地址，支持检测游戏延迟情况
UIKIT_EXTERN NSString * GameServerUrl;

///firebase 是否可用
UIKIT_EXTERN BOOL ISFIREBASE;

///通行证title
UIKIT_EXTERN NSString *YOSTAR_POPUP_TEXT;
///在以后中心是否可以编辑通行证昵称
UIKIT_EXTERN BOOL Can_Edit_Yostar_NickName_In_UserCenter;
///登录账号是否是测试账号
UIKIT_EXTERN BOOL Is_Test_Account;
///是否开启 - 邮箱绑定引导弹窗
UIKIT_EXTERN BOOL Show_Migrate_POPUP;
///辅助邮箱信息
UIKIT_EXTERN NSDictionary *RecoveryEmailInfo;
///默认通行证昵称
UIKIT_EXTERN NSString *YOSTAR_default_Nickname;
///当前登录的账号的通行证昵称
UIKIT_EXTERN NSString *YOSTAR_Current_Login_Nickname;

UIKIT_EXTERN NSString * const kShopListKey;

UIKIT_EXTERN BOOL initFlag;
UIKIT_EXTERN NSString * const kPushExtraMsgKey;
UIKIT_EXTERN BOOL FacebookLimitedLogin;


#pragma mark ---- 字体 ----

UIKIT_EXTERN NSString * const kPingFangSCRegular;
UIKIT_EXTERN NSString * const kPingFangSCUltralight;
UIKIT_EXTERN NSString * const kPingFangSCThin;
UIKIT_EXTERN NSString * const kPingFangSCLight;
UIKIT_EXTERN NSString * const kPingFangSCMedium;
UIKIT_EXTERN NSString * const kPingFangSCSemibold;

#pragma mark ----- share ----

UIKIT_EXTERN NSString * const kShareFacebook;
UIKIT_EXTERN NSString * const kShareInstagram;
UIKIT_EXTERN NSString * const kShareTwitter;

#pragma mark ---- 通知 ----
///更新用户中心数据
UIKIT_EXTERN NSString * const kUpdateUserCenterDataNotification;
///更新用户历史数据
UIKIT_EXTERN NSString * const kUpdateHistoryAccountDataNotification;


    ///MARK: --- Pay
UIKIT_EXTERN NSString * const kPayGMOOnLinePayCapture;
UIKIT_EXTERN NSString * const kPayGMOOnLinePayAuth;

#endif /* YoHelperDefine_h */

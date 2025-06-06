//
//  YoConfigObject.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2022/1/17.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    ///信用卡
    YoPayPortraitMethodTypeCard = 0,
    YoPayPortraitMethodTypePaypal,
    YoPayPortraitMethodTypeDocomo,
    YoPayPortraitMethodTypeSoftbank,
    YoPayPortraitMethodTypeAupay,
    YoPayPortraitMethodTypePaypay,
    ///便利店
    YoPayPortraitMethodTypeConvenience,
} YoPayPortraitMethodType;

typedef enum : NSUInteger {
    /**
     阅读完所有信息，才可以同意协议
     */
    YoAgreementLookUpTypeReadAll,
    /**
     协议更新后需要重新阅读并同意
     */
    YoAgreementLookUpTypeReadUpdateInfo,
    /**
     只是显示协议的内容
     */
    YoAgreementLookUpTypeReadOnly,
    /**
     登录后显示, 需要勾选协议同意框
     */
    YoAgreementLookUpTypeLoginedShow,
    ///韩服未成年人购买
    YoAgreementLookUpTypeUnder14Buy,
} YoAgreementLookUpType;

typedef enum : NSUInteger {
    /**
     用户协议 美、日、韩
     */
    YoAgreementTypeUserAgreement,
    /**
     隐私协议 美、日
     */
    YoAgreementTypePrivacyAgreement,
    /**
     资金结算法 日
     */
    YoAgreementTypeFundsSettlementMethod,
    /**
     特定商业交易法 日
     */
    YoAgreementTypeSpecifiedCommercialTransactionsAct,
    /**
     个人信息收集以及使用协议 韩
     */
    YoAgreementTypePersonalCreditRequisitionAgreement,
    /**
     退款协议 韩
     */
    YoAgreementTypeRefundAgreement,
    /**
     未成年人商店协议 韩
     */
    YoAgreementTypeMinorStoreAgreement,
    /**
     个人信息处理方针 韩
     */
    YoAgreementTypePersonalInformationHandlingPolicyAgreement
} YoAgreementType;

typedef enum : NSUInteger {
    YoToastLevelDefault,
    YoToastLevelWarn,
    YoToastLevelError,
} YoToastLevel;

typedef enum : NSUInteger {
    ///换绑的验证
    YoAuthCodeTypeUpdateEmail,
    ///绑定主邮箱的逻辑
    YoAuthCodeTypeBindEmail,
//    绑定辅助邮箱时先验证主邮箱
    YoAuthCodeTypeVerifyPrimaryEmail,
    ///绑定辅助邮箱的逻辑
    YoAuthCodeTypeBindRecoveryEmail,
} YoAuthCodeType;

typedef enum : NSUInteger {
    YoUserCenterActionTypeLookTranscode = 0,
    YoUserCenterActionTypeCheckAgreement,
    YoUserCenterActionTypeDeleteAccount,
    YoUserCenterActionTypeCustomService,
    YoUserCenterActionTypeSwitchAccount,
    YoUserCenterActionTypeBindEmail,
    ///绑定辅助邮箱
    YoUserCenterActionTypeBindRecoveryEmail,
    YoUserCenterActionTypeUpdateEmail,
    YoUserCenterActionTypeBindThirdAccount,
    ///切换区服
    YoUserCenterActionTypeChangeServer,
    ///修改通行证昵称
    YoUserCenterActionTypeModifyYostarNickname,
    ///多设备管理
    YoUserCenterActionTypeManageToken,
    ///设置生日
    YoUserCenterActionTypeSetBirth
} YoUserCenterActionType;


typedef enum : NSUInteger {
    /**
     勾选
     */
    YoDeleteViewTypeChoice = 0,
    /**
     输入 delete
     */
    YoDeleteViewTypeInputDelete,
    /**
     删除完成后弹出tips
     */
    YoDeleteViewTypeDeleteDoneTips,
    /**
     登录时出现的tips
     */
    YoDeleteViewTypeLoginTips,
} YoDeleteViewType;

typedef enum : NSUInteger {
    ///只是但是的修改昵称
    YoPassTypeOnlyModify,
    ///新用户第一次修改昵称，完成后进入游戏
    YoPassTypeIntoGame,
    ///从用户中心修改
    YoPassTypeModifyFromUserCenter,
} YoPassType;

@interface YoConfigObject : NSObject
@property (nonatomic, assign) YoToastLevel toastLevel;
@property (nonatomic, copy) NSString *toastInfo;

@property (nonatomic, assign) YoAgreementLookUpType agreementLookUpType;
@property (nonatomic, copy) NSString *agreement;
///查询的协议列表
@property (nonatomic, copy) NSArray *agreementList;
///是否显示其他登录方式
@property (nonatomic, assign) BOOL showOtherLoginStyle;


@end

NS_ASSUME_NONNULL_END

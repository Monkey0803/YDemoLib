//
//  YoUIUtils+Show.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2022/1/17.
//

#import "YoUIUtils.h"
//#import <Foundation/Foundation.h>
NS_ASSUME_NONNULL_BEGIN
extern void ShowToast(NSString *info);
extern void ShowToastWithLevel(NSString *info, NSUInteger level);
extern void ShowCommon(NSInteger errorCode);
@interface YoUIUtils (Show)
/// 显示toast
/// @param info 信息
/// @param level 参考 YoToastLevel
- (void)showToastView:(NSString *)info
                level:(NSUInteger)level;
- (void)showCommon:(NSInteger)errorCode;
- (void)showLoading;
- (void)hiddenLoading;
/**
 欢迎弹窗
 */
- (void)showWelcome;

/// 网络检测视图
/// - Parameter gameURL: 游戏URL
- (void)showNetworkView:(NSString *)gameURL;

/**
 通行证
 */
- (__kindof UIView *)showPass;
///显示通行证
///@param passType 参考 YoPassType
- (__kindof UIView *)showPass:(NSUInteger)passType;
- (void)showNetNotice:(NSString *)info;
- (__kindof UIView *)showWarnView;


/// 分享视图
/// @param url 分享链接
/// @param imagePath 图片地址
- (void)showShareView:(NSString * _Nullable)url
            imagePath:(NSString * _Nullable)imagePath;
/// 分享视图
/// @param url 分享链接
/// @param imagePath 图片地址
/// @param screenshot 是否是截屏
- (void)showShareView:(NSString * _Nullable)url
            imagePath:(NSString * _Nullable)imagePath
           screenshot:(BOOL)screenshot;

- (void)showLoginView:(BOOL)push;

///显示邮箱登录
///@param push 显示方式
///@param showOtherLoginStyle 是否包含其他的了方式 YES  包含
-       (void)showEmail:(BOOL)push
 containOtherLoginStyle:(BOOL)showOtherLoginStyle;

- (void)showMore:(BOOL)push;
- (void)showTrancode:(BOOL)push;
- (void)showAgreementConfirm:(BOOL)push;
- (void)showAgreementConfirm:(BOOL)push
                  hiddenBack:(BOOL)hiddenBack;

///@param mode  参考 YoAgreementLookUpType
///@param agreementType 协议的类型
///@param push VC 的方式
- (__kindof UIView *)showAgreementReadMode:(NSUInteger)mode
                             agreementType:(NSString *)agreementType
                                      push:(BOOL)push;
///@param mode  参考 YoAgreementLookUpType
///@param agreementType 协议的类型
///@param push VC 的方式
///@param hiddenBack 是否隐藏返回按钮
- (__kindof UIView *)showAgreementReadMode:(NSUInteger)mode
                             agreementType:(NSString *)agreementType
                                      push:(BOOL)push
                                hiddenBack:(BOOL)hiddenBack;
- (void)showLinkInfo:(BOOL)push;
///竖屏支付视图
- (void)showPayView:(BOOL)push;

/// 便利店支付
/// - Parameter push: push
- (void)showPayConvenienceView:(BOOL)push;

    /// 信用卡
    /// - Parameter push: push
- (void)showPayCreditCardView:(BOOL)push;

    /// 支付结果
    /// - Parameter push: push
    /// - Parameter dataArray: 数据
- (void)showPayResultView:(BOOL)push
                             dataArray:(NSArray *)dataArray;
///设备管理
- (void)showTokenManageView;

- (void)        showUserCenter:(BOOL)push
    withAccountDeleteNotifyUrl:(NSString * _Nullable)accountDeleteNotifyUrl
 withAccountRecoveredNotifyUrl:(NSString * _Nullable)accountRecoveredNotifyUrl
                 withExtraData:(NSString * _Nullable)extraData;

- (void)showAgreementList:(BOOL)push;
- (__kindof UIView *)showCommonPop:(BOOL)push;
- (void)showInitFailedView:(NSInteger)errorCode;
- (void)showGenerateTranscode:(BOOL)push;
- (__kindof UIView *)showBirth:(BOOL)push;
- (void)showHistory:(BOOL)push;
- (__kindof UIView *)showLinkEmail:(BOOL)push
                        hiddenBack:(BOOL)hiddenBack;
- (__kindof UIView *)showLoginLinkEmail;

/// 显示删除的视图
/// @param type 参考 YoDeleteViewType
/// @param push VC 的方式
/// @param hiddenBack 是否隐藏 返回键
- (__kindof UIView *)showDelete:(NSUInteger)type
                           push:(BOOL)push
                     hiddenBack:(BOOL)hiddenBack;
- (__kindof UIView *)showBirthKR;
- (__kindof UIView *)showNotice:(BOOL)push;
@end

NS_ASSUME_NONNULL_END

//
//  YoUIUtils.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2021/12/30.
//

#import <UIKit/UIKit.h>
//@class YoConfigObject;
#import "YoConfigObject.h"
/**
 针对UI的工具类
 */
NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    /**
     顶部边框
     */
    YoViewBorderTypeTop,
    /**
     左侧边框
     */
    YoViewBorderTypeLeft,
    /**
     底部边框
     */
    YoViewBorderTypeBottom,
    /**
     右侧边框
     */
    YoViewBorderTypeRight,
    
} YoViewBorderType;

@interface YoUIUtils : NSObject

@property (nonatomic, strong) YoConfigObject *configObject;

+ (instancetype)shareUIManager;


- (BOOL)canPush;
- (UIWindow *)currentWindow;
- (UIInterfaceOrientation)getCurrentInterfaceOrientation;
- (UIViewController *)currentViewController;
- (nullable UIViewController *)findBelongViewControllerForView:(UIView *)view;
/**
 绘制单侧边框
 @param view 需要绘制的视图
 @param border 边框类型 YoViewBorderType
 @param borderWidth 边框宽度
 @param borderColor 边框颜色
 */
- (void)drawBorder:(UIView *)view
            border:(YoViewBorderType)border
       borderWidth:(CGFloat)borderWidth
       borderColor:(UIColor *)borderColor;
/**
 根据条件生成一个 CAShapeLayer
 corners 默认 UIRectCornerAllCorners
 CGSize  默认 CGSizeMake(kDimension_4, kDimension_4)
 @param bounds 视图的bounds CGRect
 */
- (CAShapeLayer *)pathLayer:(CGRect)bounds;
/**
 根据条件生成一个 CAShapeLayer
 @param bounds CGRect
 @param corners UIRectCorner
 @param cornerRadii CGSize
 */
- (CAShapeLayer *)pathLayer:(CGRect)bounds
          byRoundingCorners:(UIRectCorner)corners
                cornerRadii:(CGSize)cornerRadii;

- (void)viewStyle:(UIView *)view;
- (void)viewStyle:(UIView *)view
     cornerRadius:(CGFloat)cornerRadius
      borderWidth:(CGFloat)borderWidth
      borderColor:(UIColor * _Nullable)borderColor;
///设置button不同状态下边框的颜色
///默认 颜色 Nomarl 0x000000
/// Highlighted 0x000000 透明度80%
/// Selected 0x000000
/// Disabled 0xE1E1E1

- (void)buttonBorderStyleState:(UIButton *)sender;
///设置button不同状态下边框的颜色
///@param sender button
///@param borderNomarlColor Nomarl
///@param borderHighlightedColor Highlighted
///@param borderSelectedColor Selected
///@param borderDisabledColor Disabled
- (void)buttonBorderStyleState:(UIButton *)sender
             borderNomarlColor:(UIColor *)borderNomarlColor
        borderHighlightedColor:(UIColor *)borderHighlightedColor
           borderSelectedColor:(UIColor *)borderSelectedColor
           borderDisabledColor:(UIColor *)borderDisabledColor;

- (void)shadowDefault:(UIView * _Nonnull)view;

- (void)shadow:(UIView * _Nonnull)view
   shadowOffset:(CGSize)shadowOffset
    shadowColor:(UIColor * _Nonnull)shadowColor
   shadowRadius:(CGFloat)shadowRadius;

- (void)changeWhiteWithOutlineButtonStyleBy:(UIButton *)sender;

#pragma mark ---- 业务 ----
- (BOOL)vaildEmail:(NSString *)email;
- (BOOL)vaildCode:(NSString *)code
        withEmail:(NSString *)email;


/// 添加子视图组 到 父视图
/// @param supView 父视图
/// @param subViews 视图组
- (void)addToView:(UIView * _Nonnull)supView
         subViews:(NSArray<__kindof UIView *> * _Nonnull)subViews;
/// 判断是否包含登录视图
- (BOOL)isIncludeLoginView;
@end

NS_ASSUME_NONNULL_END

//
//  YoSDKCommonTool.h
//  UIDemo
//
//  Created by Yostar on 2020/10/15.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface YoSDKCommonTool : NSObject



+ (void)registerFitnessFont;


+ (BOOL)validEmail:(NSString *)email;
+ (BOOL)vaildTransCode:(NSString *)code;
+ (BOOL)vaildUID:(NSString *)uidStr;
+ (BOOL)vaildPID:(NSString *)pid;
/**
 验证固定长度的纯数字
 */
+ (BOOL)pureNumberVaild:(NSString *)str length:(NSInteger)length;

///验证正则表达式
///@param evaluateStr 需要验证的内容
///@param regularStr 正则表达式
+ (BOOL)predicateVaild:(NSString *)evaluateStr
            regularStr:(NSString *)regularStr;



@end

NS_ASSUME_NONNULL_END

//
//  YoSDKLogin.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/6/22.
//

#import <Foundation/Foundation.h>
#import "YoUtilits.h"
#import "YoUserRequestObject.h"
NS_ASSUME_NONNULL_BEGIN

@interface YoSDKLogin : NSObject
+ (void)yoLogin:(YoUserRequestObject *)requestInfo;
+ (void)yoSession:(YoUserRequestObject *)requestInfo;
+ (void)yoSession:(YoUserRequestObject *)requestInfo
          success:(nullable YoResultBlock)success
             fail:(nullable YoResultBlock)fail;

///请求用户详情数据，请求成功后发起通知，更新UI
///kUpdateUserCenterDataNotification
///绑定解绑、修改昵称时调用
+ (void)requestUserDetail;

///在快登列表删除账号时使用
+ (void)requestUserDetail:(NSDictionary *)bodyParam
              headerParam:(NSDictionary *)headerParam
                 platform:(NSInteger)platform
                  success:(nullable YoResultBlock)success
                     fail:(nullable YoResultBlock)fail;
@end

NS_ASSUME_NONNULL_END

//
//  YoHttpRequest.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2024/4/19.
//

#import <Foundation/Foundation.h>
#import "YoSDKCoreKit.h"
#import "YoUtilits.h"
NS_ASSUME_NONNULL_BEGIN

@interface YoHttpRequest : NSObject
///当前请求网络的URL
@property (nonatomic, copy) NSString *baseURL;
///高防URL
@property (nonatomic, copy) NSString *baseHighDefendURL;
///代理URL
@property (nonatomic, copy) NSString *baseAgentURL;
///当前推送URL
@property (nonatomic, copy) NSString *basePushURL;
///高防推送URL
//@property (nonatomic, copy) NSString *baseHighDefendPushURL;
/////代理推送URL
//@property (nonatomic, copy) NSString *baseAgentPushURL;
///高防URL重试次数
@property (nonatomic, assign) NSInteger highDefendCount;
///代理URL重试次数
@property (nonatomic, assign) NSInteger agentCount;
///高防推送URL重试次数
//@property (nonatomic, assign) NSInteger highDefendPushCount;
/////代理推送URL重试次数
//@property (nonatomic, assign) NSInteger agentPushCount;

///url path
@property (nonatomic, copy) NSString *path;
///请求头
@property (nonatomic, copy) NSDictionary *header;
///请求体
@property (nonatomic, copy) NSDictionary *body;

@property (nonatomic, assign) YoNetRequestPlatform netPlatform;
@property (nonatomic, copy) YoResultBlock success;
@property (nonatomic, copy) YoResultErrorBlock fail;
///请求结果需要再哪个sel下处理
@property (nonatomic) SEL sel;
///是否停止重试
@property (nonatomic, assign) BOOL stopRetry;
@property (nonatomic, assign) BOOL needRetry;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)initWithPath:(NSString * _Nullable)path;

- (instancetype)initWithPath:(nullable NSString *)path
                      header:(nullable NSDictionary *)header;

- (instancetype)initWithPath:(nullable NSString *)path
                      header:(nullable NSDictionary *)header
                        body:(nullable NSDictionary *)body;

- (instancetype)initWithPath:(nullable NSString *)path
                      header:(nullable NSDictionary *)header
                        body:(nullable NSDictionary *)body
                         sel:(nullable SEL)sel;

- (instancetype)initWithPath:(nullable NSString *)path
                      header:(nullable NSDictionary *)header
                        body:(nullable NSDictionary *)body
                         sel:(nullable SEL)sel
                 netPlatform:(YoNetRequestPlatform)netPlatform;

- (instancetype)initWithPath:(NSString *)path
                      header:(NSDictionary *)header
                        body:(NSDictionary *)body
                         sel:(SEL)sel
                 netPlatform:(YoNetRequestPlatform)netPlatform
                   needRetry:(BOOL)needRetry;

- (instancetype)initWithPath:(nullable NSString *)path
                     success:(nullable YoResultBlock)success
                        fail:(nullable YoResultErrorBlock)fail;
- (instancetype)initWithPath:(nullable NSString *)path
                        body:(nullable NSDictionary *)body
                     success:(nullable YoResultBlock)success
                        fail:(nullable YoResultErrorBlock)fail;
- (instancetype)initWithPath:(nullable NSString *)path
                      header:(nullable NSDictionary *)header
                        body:(nullable NSDictionary *)body
                     success:(nullable YoResultBlock)success
                        fail:(nullable YoResultErrorBlock)fail;

- (instancetype)initWithPath:(nullable NSString *)path
                      header:(nullable NSDictionary *)header
                        body:(nullable NSDictionary *)body
                         sel:(nullable SEL)sel
                 netPlatform:(YoNetRequestPlatform)netPlatform
                   needRetry:(BOOL)needRetry
                     success:(nullable YoResultBlock)success
                        fail:(nullable YoResultErrorBlock)fail;

@end

NS_ASSUME_NONNULL_END

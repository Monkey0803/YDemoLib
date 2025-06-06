//
//  YoUserRequestObject.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2024/5/15.
//

#import <Foundation/Foundation.h>
#import "YoUtilits.h"
NS_ASSUME_NONNULL_BEGIN

@interface YoUserRequestObject : NSObject

@property (nonatomic, strong, nullable) NSDictionary *body;
@property (nonatomic, strong, nullable) NSDictionary *header;
@property (nonatomic, assign) NSInteger platform;
@property (nonatomic, assign) BOOL geeTestEnable;
@property (nonatomic, assign) BOOL fromLogin;
@property (nonatomic, assign) BOOL quickLogin;
@property (nonatomic, assign) BOOL isNewUser;
///日服
@property (nonatomic, assign) BOOL checkAccount;
@property (nonatomic, assign) BOOL refreshUserInfo;
@property (nonatomic, copy, nullable) YoResultBlock success;
@property (nonatomic, copy, nullable) YoResultBlock failed;
- (void)geeTest:(SEL)selector;
@end

NS_ASSUME_NONNULL_END

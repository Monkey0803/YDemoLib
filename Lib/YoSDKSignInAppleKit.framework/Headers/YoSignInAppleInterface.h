//
//  YoSignInAppleInterface.h
//  YoSDKSignInAppleKit
//
//  Created by Yostar on 2020/11/2.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoSignInAppleInterface : NSObject
- (void)yoSignInAppleLoginPlatform:(NSInteger)platform;


- (void)yoSignInAppleBindPlatform:(NSInteger)platform;

- (void)yoSignInAppleHandleBindData:(NSDictionary *)result
                           platform:(NSInteger)platformNum;

- (void)yoSignInAppleUnBindPlatform:(NSInteger)platform;
@end

NS_ASSUME_NONNULL_END

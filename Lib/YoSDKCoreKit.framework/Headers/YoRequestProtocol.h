//
//  YoRequestProtocol.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2022/2/15.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol YoRequestProtocol <NSObject>

- (void)defaultDealResult:(id)response;

- (void)googleService:(id)response;
- (void)serviceShopList:(id)response;

- (void)pushService:(id)response;

@end

NS_ASSUME_NONNULL_END

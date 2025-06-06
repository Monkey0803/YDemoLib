//
//  YoDealRequest.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2022/2/11.
//

#import <Foundation/Foundation.h>
#import "YoHelperDefine.h"
@class YoHttpRequest;

NS_ASSUME_NONNULL_BEGIN
#define SuppressPerformSelectorLeakWarning(Stuff) \
    do { \
        _Pragma("clang diagnostic push") \
        _Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
        Stuff; \
        _Pragma("clang diagnostic pop") \
    } while (0)


@interface YoDealRequest : NSObject
+ (instancetype)defaultRequest;

- (void)postRequest:(YoHttpRequest *)request;

@end

NS_ASSUME_NONNULL_END

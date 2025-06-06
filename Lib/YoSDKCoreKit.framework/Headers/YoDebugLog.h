//
//  YoDebugLog.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/6/22.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define YoDebugLogLevel(level, fmt, ...) \
[YoDebugLog logLevel:level file:__FILE__ function:__PRETTY_FUNCTION__ line:__LINE__ format:(fmt), ##__VA_ARGS__]

#define YoDebugLog(fmt, ...) \
YoDebugLogLevel(YoDebugLogLevelInfo, (fmt), ##__VA_ARGS__)

#define YoDebugWarningLog(fmt, ...) \
YoDebugLogLevel(YoDebugLogLevelWarning, (fmt), ##__VA_ARGS__)

#define YoDebugErrorLog(fmt, ...) \
YoDebugLogLevel(YoDebugLogLevelError, (fmt), ##__VA_ARGS__)

typedef NS_ENUM(NSUInteger, YoDebugLogLevel) {
    YoDebugLogLevelInfo = 1,
    YoDebugLogLevelWarning,
    YoDebugLogLevelError
};

@interface YoDebugLog : NSObject

+ (BOOL)isDebugLogEnabled;

+ (void)enableDebugLog:(BOOL)enableLog;

+ (void)logLevel:(NSInteger)level
            file:(const char *)file
        function:(const char *)function
            line:(NSUInteger)line
          format:(NSString *)format, ...;

@end

NS_ASSUME_NONNULL_END

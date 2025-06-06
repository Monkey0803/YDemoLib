//
//  YoSDKUNLink.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/12/24.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoSDKUNLink : NSObject
+ (void)yoUnLinkParam:(NSDictionary *)paramDict
             platform:(NSInteger)platform
             username:(NSString *)username;
@end

NS_ASSUME_NONNULL_END

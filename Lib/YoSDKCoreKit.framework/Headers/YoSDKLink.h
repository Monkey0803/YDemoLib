//
//  YoSDKLink.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2020/12/24.
//

#import <Foundation/Foundation.h>
#import "YoUtilits.h"
NS_ASSUME_NONNULL_BEGIN

@interface YoSDKLink : NSObject
+ (void)yoLink:(NSDictionary *)param
      platform:(NSInteger)platform
      username:(NSString *)userName;

+ (void)yoLink:(NSDictionary *)param
      platform:(NSInteger)platform
      username:(NSString *)userName
       success:(_Nullable YoResultBlock)success
          fail:(_Nullable YoResultBlock)fail;
@end

NS_ASSUME_NONNULL_END

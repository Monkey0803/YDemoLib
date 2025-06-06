//
//  ShareImage.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2022/10/21.
//

#import <Foundation/Foundation.h>
#import "BaseShareContent.h"

NS_ASSUME_NONNULL_BEGIN

@interface ShareImage : NSObject<BaseShareContent>
+ (instancetype)shareImage:(NSString *)imagePath;
- (NSString *)getImagePath;
@end

NS_ASSUME_NONNULL_END

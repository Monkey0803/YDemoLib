//
//  YoFBInterface.h
//  YoSDKFBKit
//
//  Created by Yostar on 2020/11/2.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoFBInterface : NSObject
- (void)yoFBLoginPlatform:(NSInteger)platform;

- (void)yoFBBindPlatform:(NSInteger)platform;
- (void)yoFBHandleBindData:(NSDictionary *)result
                  platform:(NSInteger)platformNum;
- (void)yoFBUnBindPlatform:(NSInteger)platform;
- (void)yoFBApplication:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;
- (BOOL)yoFBApplication:(UIApplication *)app
                openURL:(NSURL *)url
                options:(NSDictionary<NSString *,id> *)options;
- (void)yoFBApplicationDidBecomeActive;

- (void)yoFBShareImage:(UIImage *)image;
- (void)yoFBShareURL:(NSString *)URL;
- (BOOL)canFBShare;
@end

NS_ASSUME_NONNULL_END

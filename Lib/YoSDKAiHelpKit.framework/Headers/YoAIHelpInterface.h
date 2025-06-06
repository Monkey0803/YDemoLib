//
//  YoAIHelpInterface.h
//  YoSDKAiHelpKit
//
//  Created by Yostar on 2020/11/3.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoAIHelpInterface : NSObject

+ (void)yoShowAiHelpFAQs:(NSDictionary *)extraData;

+ (void)yoAIHelpInitForApiKey:(NSString *)apiKey
                   domainName:(NSString *)domainName
                        appID:(NSString *)appID;
+ (void)yoAiHelpDidRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
@end

NS_ASSUME_NONNULL_END

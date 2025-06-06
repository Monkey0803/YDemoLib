//
//  YoStoreTool.h
//  YoSDKCoreKit
//
//  Created by Yostar on 2022/2/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef enum : NSUInteger {
    YoStoreFileNameLoginHistory,
    YoStoreFileNameConfig,
    YoStoreFileNameUserInfo,
    YoStoreFileNameInitData,
    YoStoreFileNameErrorCode,
    YoStoreFileNamePush,
    YoStoreFileNameCommon,
} YoStoreFileName;
FOUNDATION_EXPORT NSString * const CommonServerArea;
@interface YoStoreTool : NSObject
+ (instancetype)shareStore;
- (void)writeToFile:(YoStoreFileName)file
              value:(_Nullable id)value
             forKey:(nonnull NSString *)key;
- (void)writeToFile:(YoStoreFileName)file
         serverArea:(NSString *)serverArea
              value:(_Nullable id)value
             forKey:(NSString *)key;

- (id)readFromFile:(YoStoreFileName)file
            forKey:(nonnull NSString *)key;

- (id)readFromFile:(YoStoreFileName)file
        serverArea:(NSString *)serverArea
            forKey:(nonnull NSString *)key;
///删除file下的一个key
- (void)deleteFromFile:(YoStoreFileName)file
                forKey:(nonnull NSString *)key;
- (void)deleteFromFile:(YoStoreFileName)file
            serverArea:(NSString *)serverArea
                forKey:(nonnull NSString *)key;
///删除整个文件
- (void)deleteFile:(YoStoreFileName)file;
- (void)deleteFile:(YoStoreFileName)file
        serverArea:(NSString *)serverArea;

    ///MARK: --- 处理2.x SDK 版本数据
- (id)readInfoFrom2_XSDKForKey:(NSString *)key;
- (void)cleanInfoFrom2_XSDKForKey:(NSString *)key;

- (NSString *)readCurrentArea;
- (void)writeCurrentArea:(NSString *)area;
@end

NS_ASSUME_NONNULL_END

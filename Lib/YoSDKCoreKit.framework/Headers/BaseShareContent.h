//
//  BaseShareContent.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2022/10/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol BaseShareContent <NSObject>
@property (nonatomic, copy) NSString *url;
@property (nonatomic, copy) NSString *imagePath;
@end

NS_ASSUME_NONNULL_END

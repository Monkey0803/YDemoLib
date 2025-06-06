//
//  YoHttpResponse.h
//  YoSDKCoreKit
//
//  Created by 胡晓辉 on 2024/4/19.
//

#import <Foundation/Foundation.h>
#import "YoHttpRequest.h"
NS_ASSUME_NONNULL_BEGIN

@interface YoHttpResponse : NSObject

@property (nonatomic, strong) YoHttpRequest *httpRequest;
@property (nonatomic, strong) NSData *data;
@property (nonatomic, strong) NSURLResponse *response;
@property (nonatomic, strong) NSURLRequest *urlRequest;
@property (nonatomic, strong) NSError *error;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;
- (BOOL)retryRequest;
- (instancetype)initWithReuqest:(YoHttpRequest *)request
                           data:(NSData * _Nullable)data
                       response:(NSURLResponse * _Nullable)response
                        request:(NSURLRequest * _Nonnull)urlRequest
                          error:(NSError * _Nullable)error;

@end

NS_ASSUME_NONNULL_END

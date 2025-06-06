//
//  YoIAPInterface.h
//  YoSDKIAPKit
//
//  Created by Yostar on 2020/11/4.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YoIAPInterface : NSObject
//初始化apple内购实例，添加内购事务的代理
- (void)initInAppPurchase;



- (void)pay:(id)payInfo;

- (void)updateProductionListFromService;
- (void)deleteShopCache;
//- (void)yoReconfirmOrder;

// 查询支付账号对应商品的货币价格
- (void)yoQuerySkuDetails:(NSString *)skusJson;

- (void)createOrder:(nullable NSDictionary *)payParam
            success:(nullable void (^)(NSDictionary * _Nullable __strong))success
               fail:(nullable void (^)(NSDictionary * _Nullable __strong))fail;

@end

NS_ASSUME_NONNULL_END

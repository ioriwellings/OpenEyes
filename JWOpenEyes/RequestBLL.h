//
//  RequestBLL.h
//  JWOpenEyes
//
//  Created by GuShengTang on 16/6/2.
//  Copyright © 2016年 https://github.com/evenCoder. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AFNetworking.h"

/** 网络请求 */
@interface RequestBLL : NSObject

/**
 * POST请求
 */
+ (void)requestPOST:(NSString *)url
                    params:(NSDictionary *)params
                   success:(void (^)(id response))success
                   failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

/**
 * GET请求
 */
+ (void)requestGET:(NSString *)url
           success:(void (^)(id response))success
           failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

/**
 * 更新图片请求
 */
+ (void)requestUploadImage:(NSString *)url
                    params:(NSDictionary *)params
               uploadImage:(UIImage *)image
                   success:(void (^)(id response))success
                   failure:(void (^)(AFHTTPRequestOperation *operation, NSError *error))failure;

@end

//
//  YHNetUnility.h
//  YHNetSDK
//
//  Created by zxl on 2018/2/1.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSString * const YHNetUserAgent;//USERAGENT Flag
FOUNDATION_EXPORT NSTimeInterval YHNetTimeoutInterval;

typedef void(^YHSuccessed)(id obj);

typedef void(^YHFailed)(NSError *error);

typedef void(^YHUploadProgress)(float uploadProgress);

//手势锁定时间间隔
#define NSTimeIntervalSinceEnterBackground  -60.0

@interface YHNetUnility : NSObject


/**
 getRequest

 @param url url
 @param successed success
 @param failed failed
 */
+(void)getRequestWithUrl:(NSString *)url withSuccessed:(YHSuccessed)successed withFailed:(YHFailed)failed;


/**
 postRequest

 @param url url
 @param parameters 参数
 @param successed successed
 @param failed failed
 */
+(void)postRequestWithUrl:(NSString *)url withParameters:(NSDictionary *)parameters withSuccessed:(YHSuccessed)successed withFailed:(YHFailed)failed;


/**
 postRequest(AFHTTPRequestSerializer)
 
 @param url url
 @param parameters 参数
 @param successed successed
 @param failed failed
 */
+(void)postHTTPRequestWithUrl:(NSString *)url withParameters:(NSDictionary *)parameters withSuccessed:(YHSuccessed)successed withFailed:(YHFailed)failed;


/**
 postRequestWithUploadFile
 
 @param url url
 @param parameters 参数
 @param files 文件，数组里为：NSURL对象或YHUploadFileModel对象
 @param progress 进度回调
 @param successed 成功回调
 @param failed 失败回调
 */
+(void)postRequestWithUrl:(NSString *)url withParameters:(NSDictionary *)parameters withFiles:(NSArray *)files uploadProgress:(YHUploadProgress)progress withSuccessed:(YHSuccessed)successed withFailed:(YHFailed)failed;

/**
 设置UA

 @param userAgentValue str
 */
+(void)setUserAgent:(NSString *)userAgentValue;

@end

//
//  YHUploadFileModel.h
//  YHNetSDK
//
//  Created by Jagtu on 2018/6/7.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YHUploadFileModel : NSObject

@property(nonatomic,strong)NSString *name;

@property(nonatomic,strong)NSString *fileName;

@property(nonatomic,strong)NSString *mimeType;

@property(nonatomic,strong)NSData *fileData;

@property(nonatomic,strong)NSURL *fileURL;

@end

//
//  YHNetProtocol.h
//  YHNetSDK
//
//  Created by zxl on 2018/2/1.
//  Copyright © 2018年 YH. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol YHNetProtocol <NSObject>

-(void)netByDP:(id)dataProvider doWhenSuccess:(id) obj;

-(void)netByDP:(id)dataProvider doWhenFailed:(id)obj;

@end


@protocol YHUploadNetProtocol <YHNetProtocol>

-(void)netByDP:(id)dataProvider uploadProgress:(float) uploadProgress;

@end

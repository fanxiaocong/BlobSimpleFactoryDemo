//
//  Factory.h
//  BlobSimpleFactoryDemo
//
//  Created by 樊小聪 on 2019/9/9.
//  Copyright © 2019 樊小聪. All rights reserved.
//

/*
 *  备注：工厂类，负责创建具体的目标实例 🐾
 */

#import <Foundation/Foundation.h>
#import "AbstractTarget.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, TargetType) {
    /// 目标 A
    TargetTypeA = 0,
    /// 目标 B
    TargetTypeB
};

@interface Factory : NSObject

/**
 *  根据 type 值来获取我们想要的目标实例
 *
 *  @param type 目标实例的类型
 */
+ (id<AbstractTarget>)getTarget:(TargetType)type;

@end

NS_ASSUME_NONNULL_END

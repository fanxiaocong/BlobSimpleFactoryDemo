//
//  Factory.m
//  BlobSimpleFactoryDemo
//
//  Created by 樊小聪 on 2019/9/9.
//  Copyright © 2019 樊小聪. All rights reserved.
//

/*
 *  备注：工厂类，负责创建具体的目标实例 🐾
 */

#import "Factory.h"
#import "TargetA.h"
#import "TargetB.h"

@implementation Factory

+ (id<AbstractTarget>)getTarget:(TargetType)type
{
    switch (type){
        case TargetTypeA:
            return [TargetA new];   // 返回目标A的实例
        case TargetTypeB:
            return [TargetB new];   // 返回目标B的实例
    }
}

@end

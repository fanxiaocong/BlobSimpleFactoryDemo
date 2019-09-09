//
//  TargetA.m
//  BlobSimpleFactoryDemo
//
//  Created by 樊小聪 on 2019/9/9.
//  Copyright © 2019 樊小聪. All rights reserved.
//

/*
 *  备注：目标类A 🐾
 */

/* 🐖 ***************************** 🐖  */

#import "TargetA.h"

@interface TargetA ()<AbstractTarget>

@end

@implementation TargetA

#pragma mark - 💉 👀 AbstractTarget 👀

- (void)doSomething
{
    NSLog(@"TargetA 的 doSomething 被调用");
}

@end

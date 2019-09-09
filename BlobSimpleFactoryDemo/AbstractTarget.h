//
//  AbstractTarget.h
//  BlobSimpleFactoryDemo
//
//  Created by 樊小聪 on 2019/9/9.
//  Copyright © 2019 樊小聪. All rights reserved.
//

/*
 *  备注：目标抽象类，这里使用协议来声明公共的接口 🐾
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AbstractTarget <NSObject>

@required
/**
 *  声明一个公共的接口，遵守了协议的类去实现它
 */
- (void)doSomething;

@end

NS_ASSUME_NONNULL_END

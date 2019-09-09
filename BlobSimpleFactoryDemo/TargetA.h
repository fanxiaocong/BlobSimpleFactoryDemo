//
//  TargetA.h
//  BlobSimpleFactoryDemo
//
//  Created by 樊小聪 on 2019/9/9.
//  Copyright © 2019 樊小聪. All rights reserved.
//

/*
 *  备注：具体目标对象，实现了 AbstractTarget 协议🐾
 */

#import <Foundation/Foundation.h>
#import "AbstractTarget.h"

NS_ASSUME_NONNULL_BEGIN

@interface TargetA : NSObject<AbstractTarget>

@end

NS_ASSUME_NONNULL_END

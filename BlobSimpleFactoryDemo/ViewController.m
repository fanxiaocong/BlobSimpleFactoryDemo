//
//  ViewController.m
//  BlobSimpleFactoryDemo
//
//  Created by 樊小聪 on 2019/9/9.
//  Copyright © 2019 樊小聪. All rights reserved.
//

#import "ViewController.h"
#import "Factory.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
}

#pragma mark - 🎬 👀 Action Method 👀

- (IBAction)clickAction:(id)sender
{
    /// 调用工厂类的静态方法，根据类型来获取指定的目标实例
    id<AbstractTarget> target = [Factory getTarget:TargetTypeB];
    /// 消费实例（调用目标实例的方法）
    [target doSomething];
}

@end

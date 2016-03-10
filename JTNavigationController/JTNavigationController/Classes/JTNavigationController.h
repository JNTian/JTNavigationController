//
//  JTNavigationController.h
//  JTNavigationController
//
//  Created by Tian on 16/1/23.
//  Copyright © 2016年 TianJiaNan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIViewController+JTNavigationExtension.h"

@interface JTNavigationController : UINavigationController

@property (nonatomic, assign) BOOL fullScreenPopGestureEnabled;
@property (nonatomic, copy, readonly) NSArray *jt_viewControllers;

@end
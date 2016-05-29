//
//  VTExtensionProtocal.h
//  VTMagic
//
//  Created by tianzhuo on 15/7/11.
//  Copyright (c) 2015年 tianzhuo. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol VTExtensionProtocal <NSObject>

@required
/**
 *  当前页面索引
 */
- (NSInteger)currentPage;
/**
 *  当前页面索引的setter方法
 *
 *  @param currentIndex 当前页面索引
 */
- (void)setCurrentPage:(NSInteger)currentPage;

/**
 *  当前页面控制器
 */
- (UIViewController *)currentViewController;
/**
 *  当前页面控制器的setter方法
 *
 *  @param currentViewController 当前页面控制器
 */
- (void)setCurrentViewController:(UIViewController *)currentViewController;

@end

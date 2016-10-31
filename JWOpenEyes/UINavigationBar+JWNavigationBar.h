//
//  UINavigationBar+JWNavigationBar.h
//  iOS上滑隐藏下滑显示导航栏
//
//  Created by 黄进文 on 2016/10/31.
//  Copyright © 2016年 evenCoder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UINavigationBar (JWNavigationBar)

/**
 设置scrollview的透明度 随着滑动  透明度改变
 
 @param alpha 透明度
 */
- (void)jw_setScrollViewAlpha:(CGFloat)alpha;


/**
 设置Bar偏移
 
 @param translationY 偏移量
 */
- (void)jw_setTranslationY:(CGFloat)translationY;

@end

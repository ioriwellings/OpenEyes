//
//  UINavigationBar+JWNavigationBar.m
//  iOS上滑隐藏下滑显示导航栏
//
//  Created by 黄进文 on 2016/10/31.
//  Copyright © 2016年 evenCoder. All rights reserved.
//

#import "UINavigationBar+JWNavigationBar.h"

@implementation UINavigationBar (JWNavigationBar)

/**
 _leftViews
 _rightViews
 _titleView
 UINavigationItemView
 这几个属性都是UINavigationBar的属性，如果不知道这几个属性 是可以通过runtime得到这几个属性的
 */
- (void)jw_setTranslationY:(CGFloat)translationY {
    
    // 设置NavigationBar的偏移
    self.transform = CGAffineTransformMakeTranslation(0, translationY);
}

- (void)jw_setScrollViewAlpha:(CGFloat)alpha {
    
    // 遍历UINavigationBar
    [[self valueForKey:@"_leftViews"] enumerateObjectsUsingBlock:^(UIView *view, NSUInteger idx, BOOL * _Nonnull stop) {
        
        view.alpha = alpha;
    }];
    [[self valueForKey:@"_rightViews"] enumerateObjectsUsingBlock:^(UIView *view, NSUInteger idx, BOOL * _Nonnull stop) {
        
        view.alpha = alpha;
    }];
    
    UIView *titleView = [self valueForKey:@"_titleView"];
    titleView.alpha = alpha;
    [[self subviews] enumerateObjectsUsingBlock:^(__kindof UIView * _Nonnull obj, NSUInteger idx, BOOL * _Nonnull stop) {
        
        if ([obj isKindOfClass:NSClassFromString(@"UINavigationItemView")]) {
            
            obj.alpha = alpha;
            *stop = YES;
        }
    }];
    
}

@end





































//
//  ImageContentView.h
//  JWOpenEyes
//
//  Created by GuShengTang on 16/6/3.
//  Copyright © 2016年 https://github.com/evenCoder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ContentView;
@class TodayModel;

@interface ImageContentView : UIView

@property (nonatomic, strong) UIImageView *picture;

- (instancetype)initWithFrame:(CGRect)frame width:(CGFloat)width model:(TodayModel *)model color:(UIColor *)color;

/**
 * 图片偏移量
 */
- (void)imageOffset;

@end

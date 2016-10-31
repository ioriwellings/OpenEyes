//
//  CustomView.h
//  JWOpenEyes
//
//  Created by GuShengTang on 16/6/2.
//  Copyright © 2016年 https://github.com/evenCoder. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomView : UIView

@property (nonatomic, strong) UIButton *button;

@property (nonatomic, strong) UILabel  *label;

- (instancetype)initWithFrame:(CGRect)frame width:(CGFloat)width LabelString:(id)labelString collor:(UIColor *)collor;

- (void)setTitle:(id)title;

- (void)setColor:(UIColor *)color;

@end

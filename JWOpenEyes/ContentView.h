//
//  ContentView.h
//  JWOpenEyes
//
//  Created by GuShengTang on 16/6/2.
//  Copyright © 2016年 https://github.com/evenCoder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CustomView;
@interface ContentView : UIView

@property (nonatomic, strong) UIImageView *imageView;

@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, strong) UILabel *littleLabel;

@property (nonatomic, strong) UILabel *descriptionLabel;

@property (nonatomic, strong) UIView *lineView;

@property (nonatomic, strong) CustomView *collectionCustom;

@property (nonatomic, strong) CustomView *shareCustom;

@property (nonatomic, strong) CustomView *cacheCustom;

@property (nonatomic, strong) CustomView *replyCustom;

- (instancetype)initWithFrame:(CGRect)frame
                        width:(CGFloat)width
                        model:(TodayModel *)model
                        color:(UIColor *)color;

- (void)setData:(TodayModel *)model;

@end

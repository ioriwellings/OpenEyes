//
//  JWTodayTableViewController.h
//  JWOpenEyes
//
//  Created by GuShengTang on 16/6/1.
//  Copyright © 2016年 https://github.com/evenCoder. All rights reserved.
//

#import <UIKit/UIKit.h>
@class PictureView;

@interface JWTodayTableViewController : UIViewController

@property (nonatomic, strong) PictureView *pictureView;

@property (nonatomic, strong) UIImageView *blurredView;

@property (nonatomic, strong) NSArray *array;

@property (nonatomic, strong) NSIndexPath *currentIndexPath;

@end

//
//  JWBaseViewController.m
//  JWOpenEyes
//
//  Created by GuShengTang on 16/6/1.
//  Copyright © 2016年 https://github.com/evenCoder. All rights reserved.
//

#import "JWBaseViewController.h"
#import "JWTodayTableViewController.h"
#import "JWBaseNavigationViewController.h"

@interface JWBaseViewController ()

@property (strong, nonatomic) JWTodayTableViewController *todayVC;

@end

@implementation JWBaseViewController

- (void)viewDidLoad {
    
    [super viewDidLoad];
   
    self.todayVC = [[JWTodayTableViewController alloc] init];
    JWBaseNavigationViewController *baseNav = [[JWBaseNavigationViewController alloc] initWithRootViewController:self.todayVC];
    baseNav.navigationBar.translucent = NO;
    [self addChildViewController:baseNav];
    [self.view addSubview:baseNav.view];
    
}

@end

//
//  EveryDayModel.m
//  JWOpenEyes
//
//  Created by GuShengTang on 16/6/2.
//  Copyright © 2016年 https://github.com/evenCoder. All rights reserved.
//

#import "EveryDayModel.h"

@implementation EveryDayModel

- (void)setValue:(id)value forUndefinedKey:(NSString *)key {
    
    if ([key isEqualToString:@"description"]) {
        
        self.descrip = value;
    }
    
    if ([key isEqualToString:@"id"]) {
        
        self.ID = [value stringValue];
    }
}

- (void)setValue:(id)value forKey:(NSString *)key {
    
    [super setValue:value forKey:key];
    
    if ([key isEqualToString:@"duration"]) {
        
        self.duration = [value stringValue];
    }
}

@end

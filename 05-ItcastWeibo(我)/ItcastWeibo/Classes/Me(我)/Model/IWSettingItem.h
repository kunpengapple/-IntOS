//
//  IWSettingItem.h
//  ItcastWeibo
//
//  Created by apple on 14-5-23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^IWSettingItemOperation)();

@interface IWSettingItem : NSObject
@property (nonatomic, copy) NSString *icon;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *badgeValue;

@property (nonatomic, copy) IWSettingItemOperation operation;

+ (instancetype)itemWithIcon:(NSString *)icon title:(NSString *)title;
+ (instancetype)itemWithTitle:(NSString *)title;
+ (instancetype)item;
@end

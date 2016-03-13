//
//  IWSettingCell.h
//  ItcastWeibo
//
//  Created by apple on 14-5-23.
//  Copyright (c) 2014年 itcast. All rights reserved.
//

#import <UIKit/UIKit.h>
@class IWSettingItem;
@interface IWSettingCell : UITableViewCell

@property (strong, nonatomic) IWSettingItem *item;
@property (nonatomic, strong) NSIndexPath *indexPath;
+ (instancetype)cellWithTableView:(UITableView *)tableView;
@end

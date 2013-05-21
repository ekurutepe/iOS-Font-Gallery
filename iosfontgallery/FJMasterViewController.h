//
//  MPDMasterViewController.h
//  iosfontgallery
//
//  Created by Engin Kurutepe on 15.05.13.
//  Copyright (c) 2013 Moped Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FJDetailViewController;

@interface FJMasterViewController : UITableViewController

@property (strong, nonatomic) FJDetailViewController *detailViewController;

@end

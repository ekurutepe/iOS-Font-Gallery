//
//  MPDMasterViewController.h
//  iosfontgallery
//
//  Created by Engin Kurutepe on 15.05.13.
//  Copyright (c) 2013 Moped Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MPDDetailViewController;

@interface MPDMasterViewController : UITableViewController

@property (strong, nonatomic) MPDDetailViewController *detailViewController;

@end

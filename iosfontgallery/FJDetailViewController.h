//
//  MPDDetailViewController.h
//  iosfontgallery
//
//  Created by Engin Kurutepe on 15.05.13.
//  Copyright (c) 2013 Moped Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FJDetailViewController : UITableViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) NSString * fontFamilyName;
@property (strong, nonatomic) NSArray * fontNames;
@property (weak, nonatomic) IBOutlet UISlider *fontSizeSlider;

- (IBAction)sizeSliderValueChanged:(UISlider *)sender;
@end

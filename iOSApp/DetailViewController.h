//
//  DetailViewController.h
//  iOSApp
//
//  Created by Administrator on 21/08/12.
//  Copyright (c) 2012 Administrator. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

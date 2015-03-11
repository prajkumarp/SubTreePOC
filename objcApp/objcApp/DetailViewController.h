//
//  DetailViewController.h
//  objcApp
//
//  Created by Panneerselvam, Rajkumar on 3/10/15.
//  Copyright (c) 2015 Panneerselvam, Rajkumar. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

- (IBAction)push:(id)sender;

@end


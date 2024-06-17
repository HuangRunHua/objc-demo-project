//
//  ViewController.m
//  hello-developer-ht
//
//  Created by Runhua Huang on 2024/6/17.
//

#import "ViewController.h"

@interface ViewController ()
@property(strong, nonatomic) UILabel *label;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor whiteColor];
    self.label = [[UILabel alloc] initWithFrame:CGRectZero];
    self.label.text = @"Hello World!";
    self.label.textColor = [UIColor blackColor];
    self.label.font = [UIFont systemFontOfSize:20.0];
    [self.label sizeToFit];
    
    // Center the label in the view
    self.label.center = CGPointMake(self.view.bounds.size.width / 2, self.view.bounds.size.height / 2);
    
    // Add the label to the view
    [self.view addSubview:self.label];
}


@end

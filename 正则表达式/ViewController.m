//
//  ViewController.m
//  正则表达式
//
//  Created by 启微时代 on 2017/3/20.
//  Copyright © 2017年 启微时代. All rights reserved.
//

#import "ViewController.h"
#import "Check.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    NSLog(@"%d",[Check checkUserName:@"1355015506z"]);
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end

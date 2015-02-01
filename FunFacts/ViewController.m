//
//  ViewController.m
//  FunFacts
//
//  Created by Peter Dorsaneo on 1/3/15.
//  Copyright (c) 2015 Peter Dorsaneo. All rights reserved.
//

#import "ViewController.h"
#import "FactBook.h"
#import "ColorWheel.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    
    self.factBook = [[FactBook alloc]init];
    self.colorArray = [[ColorWheel alloc]init];
    
    
    self.funFactLabel.text = [self.factBook randomFact];
    
    UIColor *randomColor = [self.colorArray randomColor];
    self.view.backgroundColor = randomColor;
    self.buttonLabel.tintColor = randomColor;
    
    [self.buttonLabel setTitle:@"Stop touching me!" forState:UIControlStateHighlighted];

    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)showFunFact:(id)sender {
    
    self.funFactLabel.text = [self.factBook randomFact];
    
    UIColor *randomColor = [self.colorArray randomColor];
    self.view.backgroundColor = randomColor;
    self.buttonLabel.tintColor = randomColor;
    
    
    
    
}

@end

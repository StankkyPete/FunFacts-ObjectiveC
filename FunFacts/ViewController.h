//
//  ViewController.h
//  FunFacts
//
//  Created by Peter Dorsaneo on 1/3/15.
//  Copyright (c) 2015 Peter Dorsaneo. All rights reserved.
//

#import <UIKit/UIKit.h>
@class FactBook;
@class ColorWheel;


@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *funFactLabel;

//for changing the fun fact buttons text when tapped
@property (strong, nonatomic) IBOutlet UIButton *buttonLabel;

//property for accessing FactBook class implementatiion
@property(strong,nonatomic) FactBook *factBook;

//property for accessing ColorWheel class implementation
@property(strong,nonatomic)ColorWheel *colorArray;




@end


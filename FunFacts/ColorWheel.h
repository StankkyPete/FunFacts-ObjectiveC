//
//  ColorWheel.h
//  FunFacts
//
//  Created by Peter Dorsaneo on 1/4/15.
//  Copyright (c) 2015 Peter Dorsaneo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong,nonatomic) NSArray *colors;

-(UIColor *)randomColor;

@end

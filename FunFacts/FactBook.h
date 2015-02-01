//
//  FactBook.h
//  FunFacts
//
//  Created by Peter Dorsaneo on 1/3/15.
//  Copyright (c) 2015 Peter Dorsaneo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *factBook;

-(NSString *)randomFact;

@end

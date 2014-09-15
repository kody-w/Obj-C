//
//  BNRPerson.h
//  BMITime
//
//  Created by kody on 4/9/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BNRPerson : NSObject


@property (nonatomic) float heightInMeters;
@property (nonatomic) int weightInKilos;


//BNRPerson has a method that calculates the Body Mass Index
-(float)bodyMassIndex;


@end

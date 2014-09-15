//
//  BNRPerson.m
//  BMITime
//
//  Created by kody on 4/9/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import "BNRPerson.h"

@implementation BNRPerson


- (float)bodyMassIndex
{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h*h);
}

@end

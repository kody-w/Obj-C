//
//  BNREmployee.m
//  BMITime
//
//  Created by kody on 4/15/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import "BNREmployee.h"

@implementation BNREmployee

-(double)yearsOfEmployment
{
     // Do I have a non-nil hireDate?
    if(self.hireDate) {
        // NSTimeInterval is the same as double
        NSDate *now = [NSDate date ];
        NSTimeInterval secs = [now timeIntervalSinceDate:self.hireDate];
        return secs / 31557600.0; // Seconds per year
    }else{
        return 0;
    }
}



@end

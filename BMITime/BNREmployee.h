//
//  BNREmployee.h
//  BMITime
//
//  Created by kody on 4/15/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BNRPerson.h"

@interface BNREmployee : BNRPerson


@property (nonatomic) unsigned int employeeID;
@property (nonatomic) unsigned int officeAlarmCode;
@property (nonatomic) NSDate *hireDate;
-(double)yearsOfEmployment;



@end

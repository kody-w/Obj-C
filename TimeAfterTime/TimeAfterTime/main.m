//
//  main.m
//  TimeAfterTime
//
//  Created by kody on 4/1/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        
        
        
        //NSDate *now = [NSDate date];
        NSDate *now = [[NSDate alloc] init];
        NSLog(@"This NSDate object lives at %p", now);
        NSLog(@"The date is %@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since the start of 1970.", seconds);
        
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@", later);

        NSCalendar *cal = [NSCalendar currentCalendar];
        NSLog(@"My calendar is %@", [cal calendarIdentifier]);
        
        unsigned long day = [cal ordinalityOfUnit:NSDayCalendarUnit
                                           inUnit:NSMonthCalendarUnit
                                           forDate:now];
        NSLog(@"This is day %lu of the month", day);
        
        
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        [comps setYear: 1990];
        [comps setMonth:4];
        [comps setDay:30];
        [comps setHour:13];
        [comps setMinute:10];
        [comps setSecond:0];
        
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dateOfBirth = [g dateFromComponents:comps];
        
        double secondsSinceEarlierDate = [now timeIntervalSinceDate: dateOfBirth];
        
        NSLog(@"It has been %.2f", secondsSinceEarlierDate);
        
    }
    return 0;
}


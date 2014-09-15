//
//  main.m
//  Groceries
//
//  Created by kody on 4/8/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSMutableArray *groceryList = [NSMutableArray array];
        
        [groceryList addObject:@"Loaf of bread"];
        [groceryList addObject:@"Container of milk"];
        [groceryList addObject:@"Stick of butter"];
        NSLog(@"Here are my groceries:");
        for (NSString *d in groceryList) {
            NSLog(@"%@", d);
        }
        
    }
    return 0;
}


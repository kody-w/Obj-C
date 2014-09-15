//
//  main.m
//  Chapter13Challenge
//
//  Created by kody on 4/1/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSHost *me = [NSHost currentHost];
        NSString *string = [me localizedName];
        
        NSLog(@"The user is %@", string);
    }
    return 0;
}


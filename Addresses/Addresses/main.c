//
//  main.c
//  Addresses
//
//  Created by kody on 3/31/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    int i = 17;
    int *addressOfI = &i;
    float f = 1.213;
    float *addressOff = &f;
    printf("i stores its value at %p\n", addressOfI);
    *addressOfI = 89;
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(i));
    printf("A pointer is %zu bytes\n", sizeof(addressOfI));
    
    printf("A float is %zu bytes\n", sizeof(f));
    
    return 0;
}


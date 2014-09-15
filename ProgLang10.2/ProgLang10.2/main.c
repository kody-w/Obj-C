//
//  main.c
//  ProgLang10.2
//
//  Created by kody on 4/24/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#include <stdio.h>

void inc(int* x){
    *x++;
}



int main(int argc, const char * argv[])
{
    
    int x = 5;
    
    
    
    printf("\n%d", x);
    
    inc(&x);
    
    printf("\n%d", &x);
    
}

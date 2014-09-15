//
//  main.c
//  ProgLangChap8
//
//  Created by kody on 4/1/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#include <stdio.h>
enum Disc {IsInt, IsReal};

struct IntOrReal {
    enum Disc which;
    union {
    int i;
    double r;
    } val;
    
};



int main(int argc, const char * argv[])
{

    struct IntOrReal x;
    
    x.which = IsReal;
    
    x.val.r = 2.3;

    
    if (x.which == IsInt) printf("%d\n", x.val.i);
    else printf("%g\n", x.val.r);
    
    
    
}



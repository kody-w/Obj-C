//
//  main.cpp
//  Chap8Assign6_pg356
//
//  Created by kody on 4/3/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#include <iostream>

struct {
    char x;
    int y;
} d, e;



int main(int argc, const char * argv[])
{

    d = e;
    e = d;
}


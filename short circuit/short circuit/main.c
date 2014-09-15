//
//  main.c
//  short circuit
//
//  Created by kody on 4/15/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#include <stdio.h>


int and (int a, int b){
    return a ? b : 0;
}



int main(int argc, const char * argv[])
{

    int x, y;
    
    x = 0;
    
    
 //   if (((x != 0)&&(y % x == 0)) != 1){
 //      printf("True\n");
 //      return 0;
 //   }
    
    if (((y % x == 0)&&(x != 0)) != 1){
       printf("True");
        return 0;
   }
    
}


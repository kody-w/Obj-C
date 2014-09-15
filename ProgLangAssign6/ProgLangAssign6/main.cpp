//
//  main.cpp
//  ProgLangAssign6
//
//  Created by kody on 4/11/14.
//  Copyright (c) 2014 kody.wf. All rights reserved.
//

#include <iostream>
#include <exception>

using namespace std;
using std::cout;
using std::cin;
using std::endl;


class NumberIsGreaterThan100 {
public:
    NumberIsGreaterThan100()
    {}
};

class NumberIsLessThanNegative100 {
public:
    NumberIsLessThanNegative100()
    {}
    


};

class SumOverflow {
public:
    SumOverflow()
    {}
};

int square(int num){
    
    if(num  > 100) {
        throw NumberIsGreaterThan100();
    }
    
    if(num < -100) {
        throw NumberIsLessThanNegative100();
    }

    num = num * num;
    
    return num;
}

int main(int argc, const char * argv[])
{
    
    int num1 = 0;
    int j = 1;
    int sizeOfArray;
    
    cout <<"How many numbers do you have?"<< endl;
    cin >> sizeOfArray;
    
    while (j) {
        
        try{
            
            
            int numTotal = 0;
            
            int *myNumber = new int[sizeOfArray];
            
            for(int i = 0; i < sizeOfArray; i++){
                cout << endl<< "Enter a number:" << endl;
                cin >> myNumber[i];
                num1 = square(myNumber[i]);
                numTotal += num1;
                
                if(numTotal > 2147483647){
                    cerr<<"Error: There was a sum overflow"<< endl;
                    return 0;
                    
                }

            }
            
            cout << "The sum of the numbers is " << numTotal << "." << endl;
            
        }catch(NumberIsGreaterThan100 ex){
            
                    cerr<<"The number is greater than 100";
            
        }catch(NumberIsLessThanNegative100 ex){
        
                    cerr<<"The number is less than -100";
        }
    }
}


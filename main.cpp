//
//  main.cpp
//  Factorial03
//
//
//  Created by Asher Abrams on 2018/12/2.
//  Copyright © 2018 Asher Abrams. All rights reserved.
//
//  Returns factorials and their reciprocals.
//
// PREPROCESSOR
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

// DECLARATIONS
long int x=1;
long int y;
double func01(double);
double z;
// DEFINITIONS
double func01(double x)
{
    for(y = 1; y < 16; y++)
    {
        x = x*y;
        z = double(1/x);
        cout << y << '\n';
        cout << x << '\n';
        cout << z << '\n';
        cout << '\n';
    }
    return x;
}


// MAIN
int main() {
    func01(x);
    cout << '\n';
    return 0;
}




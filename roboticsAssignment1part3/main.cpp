//
//  main.cpp
//  roboticsAssignment1part3
//
//  Created by Riley Woo on 11/14/14.
//  Copyright (c) 2014 Riley Woo. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool primes[100];
    primes[1] = false;
    primes[2] = true;
    int n = 2;
    
    for (int x = 3; x <= 100; x++)
    {
        while (n <= sqrt(x))
        {
            if (x % n == 0)
            {
                primes[x] = false;
            }
            n += 1;
        }
        primes[x] = true;
    }
    return 0;
}

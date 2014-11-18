//
//  main.cpp
//  roboticsAssignment1
//
//  Created by Riley Woo on 11/12/14.
//  Copyright (c) 2014 Riley Woo. All rights reserved.
//
//  Intakes 2 integers and will add/subtract/multiply/divide them based on user input

#include <iostream>
#include <string>
using namespace std;

int main()
{
    float a, b, answer;
    string simpleOperator;
    
    cout << "My life is Riley." << endl;
    cout << "First number pls: ";
    cin >> a;
    cout << "Do you wish to add, subtract, multiply, or divide now? ";
    cin >> simpleOperator;
    cout << "Second number pls: ";
    cin >> b;
    if (simpleOperator == "add")
    {
        answer = a + b;
        cout << a << " + " << b << " = " << answer << endl;
    }
    else if (simpleOperator == "subtract")
    {
        answer = a - b;
        cout << a << " - " << b << " = " << answer << endl;
    }
    else if (simpleOperator == "multiply")
    {
        answer = a*b;
        cout << a << " x " << b << " = " << answer << endl;
    }
    else if (simpleOperator == "divide")
    {
        answer = a/b;
        cout << a << " / " << b << " = " << answer << endl;
    }
}

/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Tim Phung
*/
#include "std_lib_facilities.h"

using namespace std;

int main()
{
    int number = 0;

    cout << "Enter an integer ";
    if (cin >> number)
    {
        if((number%2) == 1)
            cout << "The value " << number << " is an odd number";
        else
            cout << "The value " << number << " is an even number";
    }
    else
        cout << "Invalid input";
    return 0;
}

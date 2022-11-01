// Online C++ compiler to run C++ program online

// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include <iostream>
#include <math.h>
// reverse a number
using namespace std;
int main()
{
    // Write C++ code here
    int number;
    cout << "enter decimal number";
    cin >> number;
    int answer = 0;
    int i = 0;

    while (number != 0)
    {
        int remainder = number % 10;
        answer = (answer * 10) + remainder;
        number = number / 10;
        i++;
    }

    // just this loop can give you runtime error
    // we need to add max and min condition
    cout << answer;

    return 0;
}
// converting decimal into binary
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <climits>
using namespace std;
int main()
{
    int decimal;
    cout << "Enter decimal number " << endl;
    cin >> decimal;
    int answer = 0;
    int i = 0;
    while (decimal != 0)
    {
        int remainder = 0;
        remainder = decimal % 2;

        // if ((INT_MIN / 10 > answer) || (INT_MAX / 10 < answer))
        // {
        //     return 0;
        // }
        answer = (remainder * pow(10, i)) + answer;
        decimal = decimal / 2;
        i++;
    }
    cout << answer << endl;
    return answer;
}

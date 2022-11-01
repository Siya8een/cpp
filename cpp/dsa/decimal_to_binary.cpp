// Online C++ compiler to run C++ program online
#include <iostream>
#include <math.h>

using namespace std;
int main() {
    // Write C++ code here
    int number;
    cout<<"enter decimal number";
    cin>>number;
    int answer=0;
    int i=0;
    while(number!=0){
         int bit = number%2;
         answer=(bit*pow(10,i))+answer;
         number=number/2;
         i++;
    }
    cout<<answer;

    return 0;
}
// sum of all array elements

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "number of elements" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter elements";
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
    return 0;
}
// reverse an arr
#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    cout << "number of elements" << endl;
    cin >> n;
    int arr[n];
    cout << "enter elements" << endl;
    for (i = 0; i <= (n - 1); i++)
    {

        cin >> arr[i];
    }

    for (i = 0; i <= (n - 1); i++)
    {

        cout << arr[i] << endl;
    }

    cout << "reverse the array" << endl;
    for (i = (n - 1); i >= 0; i--)
    {

        cout << arr[i];
    }
}
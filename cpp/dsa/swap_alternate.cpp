#include <iostream>
using namespace std;

int main()
{
    // searching an array

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

    for (i = 0; i <= (n - 2); i++)
    {

        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
    for (i = 0; i <= (n - 1); i++)
    {

        cout << arr[i];
    }

    return 0;
}

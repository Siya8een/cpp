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

    for (i = 0; i <= (n - 1); i++)
    {

        cout << arr[i];
    }

    int k;
    cout << "enter the elements to be searched" << endl;
    cin >> k;

    for (i = 0; i <= (n - 1); i++)
    {
        if (arr[i] == k)
        {
            cout << "element is present" << endl;

            cout << index;

            cout << i;
            break;
        }
    }
    return 0;
}

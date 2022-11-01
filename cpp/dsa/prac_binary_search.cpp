#include <iostream>
using namespace std;
int main()
{
    cout << "enter the size of the array" << endl;
    int n;
    cin << n;
    int *arr = NULL;
    *arr = (int *)malloc((n + 1) * sizeof(int));
    cout << "Enter the elements" << endl;
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    // search the term

    int search;
    cout << "Enter the term to be searched: " << endl;
    cin >> search;
    while ()
}
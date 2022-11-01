#include <iostream>
#include <stdlib.h>
#include <malloc.h>
using namespace std

    int
    main()
{
    int size;
    cout << "enter size";
    cin >> size;
    int element;
    cout << "enter element";
    cin >> element;
    int arr[size];
    int i = 0;
    for (i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        else
        {
            cout << "not present";
        }
    }
    return 0;
}

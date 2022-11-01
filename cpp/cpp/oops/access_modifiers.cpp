#include <iostream>

using namespace std;
class num
{
private: // can't be accessed outside class
    int number;

public: // can be accessed outside and inside class
    char level;
};

int main()
{
    num n1;
    cout << sizeof(n1);
    return 0;
}
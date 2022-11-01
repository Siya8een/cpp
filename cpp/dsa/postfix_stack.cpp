// newly inserted element should be topmost element of the stack
#include <iostream>
#include <math.h>

using namespace std;

#define MAX 106 // indicate max size of array

int stack_arr[MAX]; // global declaration

int top = -1; // global declaration also tell stack is empty

// push function increament top by and store value at the top index

void push(int data)
{
    if (top == MAX - 1)
    {
        cout << "stack overflow" << endl;
        return; // so that next two lines are not evaluated
    }
    top = top + 1;
    stack_arr[top] = data;
}

void print()
{
    int i;
    if (top == -1)
    {
        cout << "stack underflow";
        return;
    }
    for (i = top; i >= 0; i--)
    {
        cout << stack_arr[i];
        cout << endl;
    }
}

// pop: decreamenting of top variable

void pop()
{
    int value;

    if (top == -1)
    {
        printf("stack underflow");
        exit(1); // termination of the programme with failure
    }
    value = stack_arr[top];

    top = top - 1;
    return value;
}

int main()
{
    int data; // another variable to store deleted data

    int n;

    push(4);
    push(7);
    push(9);
    print();

    return 0;
}
// array implementation of stack
// in array we can do insertion and deletion at any place but want it to behave as a stack insertion and deletion must be at end
// TOP will keep track of the "last inserted element" or the topmost element in an array
//  to indicate stack empty we will put -1 in the variable top
// if top is 0 the stack has single element

// to push TOP is incremented by 1
// new element is pushed at position top

// overflow stage no new element can be pushed

// pop

// for the pop operation the element at at the top needs to be deleted
// top is decremented by 1.
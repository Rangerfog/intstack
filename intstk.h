#include<iostream>
using namespace std;
#define size 10
void push();

int push(int value);
int top=-1;
int a[size];

void push(int value)
{
    if (top = size-1)
    {
        cout << "stack is full" << endl;
    }
    else
    {
        top++;
        a[top] = value;
    }
}



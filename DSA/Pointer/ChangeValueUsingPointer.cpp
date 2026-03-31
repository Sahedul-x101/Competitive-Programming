#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=5;
    int* p = &n;

    *p = *p * 2;
    cout << n << endl;

    return 0;
}

/*Que:
Problem 2: Change Value Using Pointer
Task

Take a number and double it using pointer.

Input
5
Output
10
*/
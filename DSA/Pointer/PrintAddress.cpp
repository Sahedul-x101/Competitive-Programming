#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* p = &n;

    cout << n << endl;
    cout << &n << endl;
    cout << p << endl;
    cout << *p << endl;

    return 0;
}

/*Que:
Problem 1: Print Address
Task

Take an integer and print:

value
address
pointer value
value using pointer
Example

Input

5

Output

5
1000
1000
5
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=2,m=5;

    int* a = &n;
    int* b = &m;
    
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << *a << endl << *b << endl;

    return 0;
}

//Que: Problem 3: Swap Two Numbers Using Pointer
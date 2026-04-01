#include <bits/stdc++.h>
using namespace std;

void swapNum(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    cin >> a >> b;
    int* x = &a;
    int* y = &b;
    swapNum(x,y);
    cout << a << " " << b;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void swapThreeNum(int* x, int* y, int* z)
{
    if(*x > *y)
    {
        int temp = *x;
        *x = *y;
        *y = temp;
    }
    if(*x > *z)
    {
        int temp = *x;
        *x = *z;
        *z = temp;
    }
    if(*y > *z)
    {
        int temp = *z;
        *z = *y;
        *y = temp;
    }
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    swapThreeNum(&a,&b,&c);
    cout << a << " " << b << " " << c;

    return 0;
}

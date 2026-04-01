#include <bits/stdc++.h>
using namespace std;

void swapValue(int &x, int &z)
{
    int temp = x;
    x = z;
    z = temp;
}

int main()
{
    int a,b;
    cin >> a >> b;  

    swapValue(a,b);
    cout << a << " " << b;

    return 0;
}
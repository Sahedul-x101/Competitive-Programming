#include <bits/stdc++.h>
using namespace std;

void evenOrOdd(int x){
    if(x%2==0)
    {
        cout << "Even\n";
    }
    else{
        cout << "Odd\n";
    }
}

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    if(a >= b && a >=c)
    {
        cout << a << " ";
        evenOrOdd(a);
    }
    else if(b>=a && b>=c)
    {
        cout << b << " ";
        evenOrOdd(b);
    }
    else{
        cout << c << " ";
        evenOrOdd(c);
    }

    return 0;
}
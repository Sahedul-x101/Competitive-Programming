#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = n/2;
    int sum = k*(k+1);
    cout << sum << endl;

    int newSum = 0;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            newSum += i;
        }
    }
    cout << newSum;
    return 0;
}
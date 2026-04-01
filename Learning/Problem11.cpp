#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            int sum = i+j;
            if(sum%3==0)
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
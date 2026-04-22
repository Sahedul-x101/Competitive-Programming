#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n+1];

    for(int i=1; i<n+1; i++)
    {
        cin >> arr[i];
    }

    int cnt = 0;

    for(int i=1; i<n+1; i++)
    {
        if(arr[k] <= arr[i] && arr[i] > 0)
        {
            cnt++;
        }
    }

    cout << cnt;


    return 0;
}
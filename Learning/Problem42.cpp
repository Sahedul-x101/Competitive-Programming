#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    cin >> k;
    for(int i=0; i<=n-k; i++)
    {
        int max_val = arr[i];
        for(int j=1; j<k; j++)
        {
            if(max_val < arr[i+j]){
                max_val = arr[i+j];
            }
        }
        cout << max_val << " ";
    }
    return 0;
}
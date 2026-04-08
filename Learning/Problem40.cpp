#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int k = 3;
    int sum = 0;

    for(int i=0; i<k; i++)
    {
        sum += arr[i];
    }

    cout << sum << " ";

    for(int i=k; i<n; i++)
    {
        sum = sum - arr[i-k] + arr[i];
        cout << sum << " ";
    }

    return 0;
}
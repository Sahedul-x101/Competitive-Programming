#include <bits/stdc++.h>
using namespace std;

void swapArray(int* p, int i, int j)
{
    int temp = *(p + i);
    *(p + i) = *(p + j);
    *(p + j) = temp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int i,j; cin >> i >> j;

    int* p = arr;

    swapArray(p,i,j);

    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
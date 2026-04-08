#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int* arr = new int[n];

    int* p = arr;

    for(int i=0; i<n; i++)
    {
        cin >> *(p+i);
    }

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum = *(p+i) + sum;
    }
    cout << sum;

    delete[] arr;

    return 0;
}
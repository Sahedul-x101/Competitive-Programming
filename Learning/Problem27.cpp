#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n]; // allocate heap memory
    int* p = arr;
    
    for(int i=0; i<n; i++)
    {
        cin >> *(p+i);
    }

    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += *(p+i);
    }

    cout << sum;

    delete[] arr;
    return 0;
}
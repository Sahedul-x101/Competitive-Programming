#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int* arr = new int[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int* p = arr;

    int* start = p;
    int* end = p+n-1;

    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    for(int i=0; i<n; i++)
    {
        cout << *p << " ";
        p++;
    }

    delete[] arr;
    return 0;
}
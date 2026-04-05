#include <bits/stdc++.h>
using namespace std;

int arrSum(int* a, int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += *(a+i);
    }
    return sum;
}

int maxValue(int* a, int n)
{
    int max = *a;

    for(int i=1; i<n; i++)
    {
        if(max < *(a+i))
        {
            max = *(a+i);
        }
    }
    return max;
}

void ReverseArr(int* a, int n)
{
    
    for(int i=0; i<n/2; i++)
    {
        int* start = a+i;
        int* end = a + (n-1-i);

        int temp = *start;
        *start = *end;
        *end = temp;
    }
}

int main()
{
    int n;
    cin >> n;

    int* arr = new int[n];
    int* p = arr;

    for(int i=0; i<n; i++)
    {
        cin >> *(p+i);
    }

    cout << "Sum: "<< arrSum(p,n) << endl;

    cout << "Max: "<< maxValue(p,n) << endl;

    ReverseArr(p,n);

    cout << "Reversed: ";
    for(int i=0; i<n; i++)
    {
        cout << *(p+i) << " ";
    }

    delete[] arr;

    return 0;
}
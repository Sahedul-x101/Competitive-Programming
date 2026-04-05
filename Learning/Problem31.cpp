#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* arr = new int[n];
    int* p = arr;

    if(n==0)
    {
        cout << "Sum: 0\nMax:N/A\nReversed: ";
    }
    else{
        for(int i=0; i<n; i++)
        {
            cin >> *(p+i);
        }
        int sum = 0;
        int max = *p;

        for(int i=0; i<n; i++)
        {
            sum += *(p+i);
            if(max < *(p+i))
            {
                max = *(p+i);
            }
        }
        for(int i=0; i<n/2; i++)
        {
            int* start = p+i;
            int* end = p + (n-1-i);

            int temp = *start;
            *start = *end;
            *end = temp;
        }

        cout << "Sum: " << sum << endl << "Max: " << max << endl << "Reversed: ";
        for(int i=0; i<n; i++)
        {
            cout << *(p+i) << " ";
        }
        
    }

    if(arr) delete[] arr;
    return 0;
}
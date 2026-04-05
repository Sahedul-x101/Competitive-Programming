#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if(n==0)
    {
        cout << "Sum: 0\n";
        cout << "Max: N/A\n";
    }
    else
    {
        int* arr = new int[n];
        int* p = arr;

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

        cout << "Sum: " << sum << endl << "Max: " << max << endl;

        delete[] arr;
    }

    return 0;
}
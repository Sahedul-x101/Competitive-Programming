#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2,1,3,4,6,2,5,1};
    int n = 8;
    int k = 3;


    for(int i=0; i<=n-k; i++) 
    {
        int max_val = arr[i]; 
        for(int j=1; j<k; j++) 
        {
            if(arr[i+j] > max_val)
            {
                max_val = arr[i+j];
            }
        }
        cout << max_val << " ";
    }
    return 0;
}

//Problem: sum of Maximums in windows
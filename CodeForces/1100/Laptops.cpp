#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], b[n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i] >> b[i]; // price --> qulity
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i], a[j]);
                swap(b[i], b[j]);
            }
        }
    }
    

    for(int i=0; i<n-1; i++)
    {
        if(a[i] < a[i+1] && b[i] > b[i+1] )
        {
            cout << "Happy Alex";
            return 0;
        }
    }
    
    cout << "Poor Alex";

    return 0;
}
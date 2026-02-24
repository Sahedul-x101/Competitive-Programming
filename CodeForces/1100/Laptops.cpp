#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int price[n], qulity[n];

    for(int i=0; i<n; i++)
    {
        cin >> price[i] >> qulity[i];
    }

    //bubble sort

    // for(int i=0; i<n-1; i++) // Time limit exceeded :<
    // { 
    //     for(int j=0; j<n-i-1; j++)
    //     {
    //         if(price[j] > price[j+1])
    //         {
    //             int temp = price[j];
    //             price[j] = price[j+1];
    //             price[j+1] = temp;

    //             temp = qulity[j];
    //             qulity[j] = qulity[j+1];
    //             qulity[j+1] = temp;
    //         }
    //     }
    // }

    

    for(int i=0; i<n-1; i++)
    {
        if(qulity[i] > qulity[i+1])
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }


    cout << "Poor Alex" << endl;

    return 0;
}
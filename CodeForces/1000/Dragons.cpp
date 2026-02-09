#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,n;
    cin >> s >> n;

    int dragon[1005][2];

    for(int i=0; i<n; i++)
    {
        cin >> dragon[i][0] >> dragon[i][1];
    }

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(dragon[j][0] > dragon[j+1][0])
            {
                int temp = dragon[j][0];
                dragon[j][0] = dragon[j+1][0];
                dragon[j+1][0] = temp;
 
                temp = dragon[j][1];
                dragon[j][1] = dragon[j + 1][1];
                dragon[j + 1][1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        if(s > dragon[i][0])
        {
            s += dragon[i][1];
        }
        else{
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}

// Tags: Greedy, Sortings
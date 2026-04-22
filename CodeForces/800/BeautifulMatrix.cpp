#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6][6];
    pair<int,int> p;
    for(int i=1; i<6; i++){
        for(int j=1; j<6; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1)
            {
                p = {i,j};
            }
        }
    }

    int moves = 0;
    int a=0,b=0;
    if((p.first - 3) < 0)
    {   
        a = (p.first-3)*-1;
    }
    else{
        a = p.first -3;
    }

    if((p.second - 3) < 0)
    {
        b = (p.second - 3) * -1;
    }
    else{
        b = p.second -3;
    }

    moves = a+b;
    
    // int moves = abs(p.first -3) + abs(p.second -3);
    cout << moves << endl;


    return 0;
}
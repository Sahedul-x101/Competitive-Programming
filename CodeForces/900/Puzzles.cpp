#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    int f[m];

    for(int i=0; i<m; i++){
        cin >> f[i];
    }

    sort(f,f+m);

    if(n==m){
        cout << 0 << endl;
        return 0;
    }

    int a = 0, b = 0;
    int mv = m - n;
    int j = m-1;
    for(int i=0; i<m;){
        int RigVal = f[j] - f[j-1];
        int LefVal = f[i+1] - f[i];
        if(RigVal > LefVal){
            j--;
            mv--;
        }
        else if(LefVal > RigVal){
            i++;
            mv--;
        }
        else if(LefVal == RigVal){
            j--;
            mv--;
        }
        a = i;
        b = j;

        if(mv == 0){
            break;
        }
    }

    int mn = f[b]-f[a];
    cout << mn << endl;

    return 0;
}
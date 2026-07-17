#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        long long prev = 0;
        bool ok = true;

        for(int i=0; i<n; i++){
            long long need = prev + 1;
            
            if(a[i] < need){
                ok = false;
                break;
            }

            long long extra = a[i] - need;
            if(i+1 < n){
                a[i+1] += extra;
            }
            prev = need;
        }

        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
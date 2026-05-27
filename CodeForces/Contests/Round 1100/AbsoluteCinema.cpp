#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        
        long long sum = 0;
        int mx = 0;

        for(int i=0; i<n; i++){
            int s = min(a[i],b[i]);
            int g = max(a[i],b[i]);

            sum += s;
            mx = max(mx,g);
        }

        cout << sum + mx << endl;
    }

    return 0;
}
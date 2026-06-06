#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        sort(a,a+n);

        int mid = n/2;
        
        int cnt = 0;
        int j = 1;
        for(int i=0; i<n/2; i++){
            if(a[i] != a[mid] || a[n-j] != a[mid])
            {
                cnt++;
            }
            j++;
        }

        cout << cnt << endl;
    }   

    return 0;
}
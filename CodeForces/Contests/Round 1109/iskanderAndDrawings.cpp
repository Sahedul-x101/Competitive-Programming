#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        string s;
        cin >> s;
        int mx = 0;
        int cnt = 0;

        for (char c : s) {
            if (c == '#') {
                cnt++;
                mx = max(mx, cnt);
            } else {
                cnt = 0;
            }
        }

        cout << (mx + 1) / 2 << endl;
    }

    return 0;
}
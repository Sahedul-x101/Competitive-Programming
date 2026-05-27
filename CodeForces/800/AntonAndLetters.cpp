#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,b;
    getline(cin,s);

    int n = s.length();

    for(int i=0; i<n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            b += s[i];
        }
    }

    int cnt = 0;
    int m = b.length();
    for(int i=0; i<m; i++){
        for(int j=i+1; j<m; j++){
            if(b[i] == b[j]){
                cnt++;
                break;
            }
        }
    }
    int ans = m - cnt;
    cout << ans;

    return 0;
}
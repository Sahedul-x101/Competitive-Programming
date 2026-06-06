#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int l = s.length();

        int a1 = s[0]+s[1]+s[2];
        int a2 = s[l-1]+s[l-2]+s[l-3];
        if(a1==a2){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
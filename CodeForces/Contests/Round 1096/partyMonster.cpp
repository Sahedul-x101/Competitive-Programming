#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; cin >> n;
        string s;
        cin >> s;

        int b1 = 0;
        int b2 = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '(')
            {
                b1++;
            }

            if(s[i] == ')'){
                b2++;
            }
        }

        if(b1 == b2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
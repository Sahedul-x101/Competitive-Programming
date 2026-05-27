#include <bits/stdc++.h>
using namespace std;

int main(){
    string s,t;
    cin >> s >> t;

    int n = s.length();

    if(s.length() != t.length()){
        cout << "NO";
        return 0;
    }

    int j = n-1;
    for(int i=0; i<(int)s.length(); i++){
        if(s[j] != t[i])
        {
            cout << "NO";
            return 0;
        }
        j--;
    }

    cout << "YES" << endl;

    return 0;
}
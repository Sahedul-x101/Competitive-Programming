#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin >> a >> b >> c;

    int n = a.length() + b.length();
    if(n != (int)c.length()){
        cout << "NO";
        return 0;
    }

    string d = a+b;

    sort(d.begin(), d.end());
    sort(c.begin(), c.end());

    for(int i=0; i<(int)c.length(); i++){
        if(c[i] != d[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
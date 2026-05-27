#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin >> a >> b;

    string p;
    for(int i=0; i<(int)a.length(); i++){
        if(a[i] == '0' && b[i] == '0' || a[i] == '1' && b[i] == '1'){
            p += '0';
        }
        else{
            p += '1';
        }
    }

    cout << p;
    return 0;
}
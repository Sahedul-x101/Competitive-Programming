#include <bits/stdc++.h>
using namespace std;

int main(){
    string p;
    cin >> p;

    int n = p.size();

    for(int i=0; i<n; i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){
            cout << "YES" ;
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
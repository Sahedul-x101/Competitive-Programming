#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> s(n);

    for(int i=0; i<n; i++){
        cin >> s[i];
    }

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(s[i] == "Tetrahedron"){
            cnt = cnt + 4;
        }
        else if(s[i] == "Cube"){
            cnt = cnt + 6;
        }
        else if(s[i] == "Octahedron"){
            cnt = cnt + 8;
        }
        else if(s[i] == "Dodecahedron"){
            cnt = cnt + 12; 
        }
        else if(s[i] == "Icosahedron"){
            cnt = cnt + 20;
        }
    }

    cout << cnt;

    return 0;
}
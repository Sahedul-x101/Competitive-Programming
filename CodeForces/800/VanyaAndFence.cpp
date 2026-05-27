#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,h;
    cin >> n >> h;
    int o=0;

    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        if(a[i] > h){
            o = o+2;
        }
        else{
            o++;
        }
    }

    cout << o;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void solve(int n){
    if(n%3){
        cout << "First\n";
    }
    else{
        cout << "Second\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
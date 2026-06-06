#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k; //3,3:42
    cin >> n >> k;

    int time = 0;
    int cnt = 0;

    for(int i=1; i<=n; i++){
        time += 5*i;
        if(k+time <= 240){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
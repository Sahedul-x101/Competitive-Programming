#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,aa,b,bb;
        cin >> a >> aa >> b >> bb;

        int winA,loseA,winB,loseB;

        if(a>aa){
            winA = a; //6
            loseA = aa; //5
        }
        else{
            winA = aa;
            loseA = a;
        }
    
        if(b>bb){
            winB = b; //3
            loseB = bb; //2
        }
        else{
            winB = bb;
            loseB = b;
        }

        if(winA < loseB){ // 6 not less then 2
            cout << "NO" << endl;
            continue;
        }

        if(winB < loseA){ // 3 is less then 5
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

    return 0;
}
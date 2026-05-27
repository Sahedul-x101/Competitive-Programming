#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    
    while(true){
        y++;

        bool u = true;

        string s = to_string(y);
        int n = s.length();
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(s[i] == s[j])
                {
                    u = false;
                    break;
                }
            }
            if(u == false){
                break;
            }
        }
        if(u == true){
            cout << y;
            break;
        }
    }

    return 0;
}
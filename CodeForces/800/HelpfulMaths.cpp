#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    if(s.length() == 1){
        cout << s;
        return 0;
    }

    int j=0;
    for(int i=0; s[i] != '\0'; i++){
        if(s[i] != '+'){
            s[j] = s[i];
            j++;
        }
    }

    s.resize(j);

    for(int i=0; i<(int)s.length(); i++){
        for(int j=0; j<(int)s.length()-1; j++){
            if(s[j] > s[j+1]){
                int temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    for(int i=0; i<(int)s.length(); i++){
        cout << s[i];
        if(i!=(int)s.length()-1)
        {
            cout << "+";
        }
    }

    return 0;
}
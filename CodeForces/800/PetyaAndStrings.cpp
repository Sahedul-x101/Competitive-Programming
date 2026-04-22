#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1;
    string s2;
    cin >> s1 >> s2;

    int a = s1.length(), b = s2.length();

    if(a<b){
        cout<< "-1";
        return 0;
    }
    else if (a>b){
        cout << "1";
        return 0;
    }

    for(int i=0; i<a; i++)
    {
        if(s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] -32;
        }
        if(s2[i] >= 'a' && s2[i] <= 'z')
        {
            s2[i] = s2[i] - 32;
        }
    }

    if(s1 == s2){
        cout << "0"; 
    }
    else if(s1 < s2){
        cout << "-1";
    }
    else{
        cout << "1";
    }

    return 0;
}
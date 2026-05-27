#include <bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<string,int>mp;

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        string key;
        int value;
        cin >> key >> value;

        mp[key] = value;
    }

    string target;
    cin >> target;

    for(auto x:mp){
        if(x.first == target){
            cout << x.second;
            return 0;
        }
    }

    cout << "Not Found\n";

    return 0;
}
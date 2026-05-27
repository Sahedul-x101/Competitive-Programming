#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int mx = arr[0];
    int mn = arr[0];

    int point = 0;
    for(int i=1; i<n; i++){
        if(arr[i] > mx){
            mx = arr[i];
            point++;
        }

        if(arr[i] < mn){
            mn = arr[i];
            point++;
        }
    }

    cout << point;

    return 0;
}
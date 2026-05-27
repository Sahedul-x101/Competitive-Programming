#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w; // k=dollars that need to pay ,n=amount of dollars ,w=number of banana, 
    //output: b = borrowed money

    cin >> k >> n >> w;
    int price = 0;
    for(int i=1; i<=w; i++){
        price += i*k;
    }

    if(price < n){
        cout << "0";
    }
    else{
        cout << price -n;
    }
    


    return 0;
}
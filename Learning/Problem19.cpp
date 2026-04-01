#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 10;
    int* p = &x;

    cout << *p << endl;
    *p = 25;
    cout << *p << endl;


    return 0;
}
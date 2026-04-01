#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n; //if n=10 then 3,6,9 for 3 and 5,10 for 5 which sum is 33

    int k3 = n/3;
    int k5 = n/5;
    int k15 = n/15;

    int sum3 = 3 * k3 * (k3+1)/2;
    int sum5 = 5 * k5 * (k5+1)/2;
    int sum15 = 15 * k15* (k15+1)/2;

    int totalSum = sum3+sum5-sum15;
    cout << totalSum;

    return 0;
}
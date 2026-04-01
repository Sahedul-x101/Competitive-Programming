#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k4 = n/4;
    int k6 = n/6;
    int k12 = n/12;

    int sum4 = 4 * k4 * (k4+1)/2;
    int sum6 = 6 * k6 * (k6+1)/2;
    int sum12 = 12 * k12 * (k12+1)/2;

    int totalsum = sum4+sum6-sum12;
    return 0;
}
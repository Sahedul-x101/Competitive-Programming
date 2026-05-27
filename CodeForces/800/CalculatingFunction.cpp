#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long c = 0;

    if (n % 2 == 0) {
        c = n / 2;
    } else {
        c = -(n + 1) / 2;
    }

    cout << c;

    return 0;
}
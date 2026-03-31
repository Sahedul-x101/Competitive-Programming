#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += *(arr+i);
    }

    cout << sum << endl;
    return 0;
}

/*Que:
Problem 4 (Important for FAANG)

Find sum of array using pointer.

Input

5
1 2 3 4 5

Output

15

Hint:

*(arr + i)

*/
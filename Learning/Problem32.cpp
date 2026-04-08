#include <bits/stdc++.h>
using namespace std;

int main()
{
    int** arr = new int*[3];
    for(int i=0; i<3; i++)
    {
        arr[i] = new int[3];
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int i=0; i<3; i++)
    {
        int sum = 0;
        for(int j=0; j<3; j++)
        {
            sum += arr[i][j];
        }
        cout << "Row: " << i << " sum: " << sum << endl;
    }

    for(int i=0; i<3; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
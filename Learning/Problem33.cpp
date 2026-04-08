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
        cout << "Row -> " << i << " -> Sum: " << sum << endl;
    }
    /* 
    c=colum
    c c c
    2 3 5 ->row 
    2 2 4 ->row
    6 3 1 ->row
    */

    for(int j=0; j<3; j++)
    {
        int max_val = arr[0][j];
        for(int i=1; i<3; i++)
        {
            if(arr[i][j] > max_val)
            {
                max_val = arr[i][j];
            }
        }
        cout << "col -> " << j << " -> Max: " << max_val << endl;
    }
    

    for(int i=0; i<3; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}
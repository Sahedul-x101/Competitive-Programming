#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin >> n;

    string s[n];
    cin.ignore();

    int cnt = 0;

    for(int i=0; i<n; i++)
    {
        getline(cin, s[i]);
    }

    for(int i=0; i<n; i++)
    {
        if(s[i] == "++X")
        {
            cnt++;
        }
        else if(s[i] == "X++")
        {
            cnt++;
        }
        else if(s[i] == "--X")
        {
            cnt--;
        }
        else if(s[i] == "X--")
        {
            cnt--;
        }
    }

    cout << cnt << endl;

    return 0;
}
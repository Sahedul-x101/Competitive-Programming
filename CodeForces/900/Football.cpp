#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int flag = 0;

    int one = 0;
    int zero = 0;
    for(int i=0; i<(int)s.length(); i++)
    { 
        if(s[i] == '1')
        {
            one++;
        }
        if(s[i] == '0')
        {
            one = 0;
        }
        if(one == 7)
        {
            flag = 1;
            break;
        }
    }
    for(int i=0; i<(int)s.length(); i++)
    { 
        if(s[i] == '0')
        {
            zero++;
        }
        if(s[i] == '1')
        {
            zero = 0;
        }
        if(zero == 7)
        {
            flag = 1;
            break;
        }
    }

    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}

// Tags: implementation, Strings
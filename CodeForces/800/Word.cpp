#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int upperCase = 0, lowerCase = 0;

    for(int i=0; i<(int)s.length(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            lowerCase++;
        }
        else{
            upperCase++;
        }
    }

    if(lowerCase >= upperCase)
    {
        //lowerCase
        for(int i=0; i<(int)s.length(); i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s[i] = s[i]+32;
            }
        }
    }
    else
    {
        //upperCase
        for(int i=0; i<(int)s.length(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z')
            {
                s[i] = s[i]-32;
            }
        }
    }

    cout << s;

    return 0;
}
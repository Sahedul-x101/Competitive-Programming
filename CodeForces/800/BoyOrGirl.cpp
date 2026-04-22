#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;

    int cnt = 0;

    for(int i=0; i<(int)s.length()-1; i++)
    {
        for(int j=i+1; j<(int)s.length(); j++)
        {
            if(s[i]!=s[j])
            {
                cnt++;
            }
        }
    }

    if(cnt % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }



    return 0;
}
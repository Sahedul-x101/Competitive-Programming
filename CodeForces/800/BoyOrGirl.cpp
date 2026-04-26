#include <bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin >> s;


    for(int i=0; s[i] !='\0'; i++)
    {
        for(int j=i+1; s[j] !='\0';)
        {
            if(s[i] == s[j]){
                for(int k=j; s[k] != '\0'; k++){
                    s[k] = s[k+1];
                }
            }
            else{
                j++;
            }
        }
        
    }


    int cnt = 0;
    for(int i=0; s[i] != '\0'; i++)
    {
        cnt++;
    }
 
    if(cnt%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }

    return 0;
}
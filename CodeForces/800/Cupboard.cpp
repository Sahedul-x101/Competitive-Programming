#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> vp;

    int cnt = 0;
    for(int i=0; i<n; i++)
    {
        int l,r;
        cin >> l >> r;
        vp.push_back({l,r});
    }

    int LeftOpen = 0, RightOpen = 0, LeftClose = 0, RightClose = 0;
    for(auto p:vp){
        if(p.first == 1) // 1 open -- 0 close
        {
            LeftOpen++;
        }
        else if(p.first == 0)
        {
            LeftClose++;
        }

        if(p.second == 1)
        {
            RightOpen++;
        }
        else if(p.second == 0)
        {
            RightClose++;
        }
    }
    if(LeftOpen > LeftClose) // 1
    {
        for(auto p:vp)
        {
            if(p.first != 1)
            {
                cnt++;
            }
        }
    }
    else if(LeftOpen < LeftClose) // 0
    {
        for(auto p:vp)
        {
            if(p.first != 0)
            {
                cnt++;
            }
        }
    }
    else if(LeftOpen == LeftClose)
    {
        for(auto p:vp)
        {
            if(p.first != 0)
            {
                cnt++;
            }
        }
    }

    if(RightOpen > RightClose) // 1
    {
        for(auto p:vp)
        {
            if(p.second != 1)
            {
                cnt++;
            }
        }
    }
    else if(RightOpen < RightClose) // 0
    {
        for(auto p:vp)
        {
            if(p.second != 0)
            {
                cnt++;
            }
        }
    }
    else if(RightOpen == RightClose)
    {
        for(auto p:vp)
        {
            if(p.second != 0)
            {
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}
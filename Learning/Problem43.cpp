#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> dq;

    dq.push_back(5);   // [5]
    dq.push_back(3);   // [5,3]
    dq.push_front(7);  // [7,5,3]

    dq.pop_back();     // [7,5]
    dq.pop_front();    // [5]

    dq.front();        // 5
    dq.back();         // 5
        
    
    return 0;
}
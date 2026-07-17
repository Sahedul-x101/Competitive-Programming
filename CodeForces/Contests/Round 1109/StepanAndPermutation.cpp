#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;

        vector<int> p(n+1);
        for (int i = 1; i <= n; i++)
            cin >> p[i];

        vector<vector<int>> graph(n+1);

        for(int i = 1; i+x <= n; i++){
            graph[i].push_back(i+x);
            graph[i + x].push_back(i);
        }

        for(int i = 1; i+y <= n; i++){
            graph[i].push_back(i+y);
            graph[i + y].push_back(i);
        }

        vector<int> comp(n+1, 0);
        int id = 0;

        for(int i = 1; i <= n; i++){
            if(comp[i]) continue;

            id++;
            stack<int> st;
            st.push(i);
            comp[i] = id;

            while(!st.empty()){
                int u = st.top();
                st.pop();

                for(int v : graph[u]){
                    if(!comp[v]){
                        comp[v] = id;
                        st.push(v);
                    }
                }
            }
        }

        bool ok = true;

        for(int i = 1; i <= n; i++){
            if(comp[i] != comp[p[i]]){
                ok = false;
                break;
            }
        }

        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
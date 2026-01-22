#include <bits/stdc++.h>
using namespace std;


void bfs(const vector<vector<int>>& v,int start,int node){
    queue<int> q;

    vector<bool> visit(node+1,false);

    q.push(start);
    visit[start] = true;

    while(q.size() != 0){
        int current = q.front();
        q.pop();
        cout << current << ' ';

        for(int i=0;i<v[current].size();i++){
            int target = v[current][i];
            if(visit[target]==false){
                q.push(target);
                visit[target]=true;
            }
        }
        
    }
}

void dfs(const vector<vector<int>>& v,int start,int node){
    stack<int> q;

    vector<bool> visit(node+1,false);

    q.push(start);

    while(q.size() != 0){
        int current = q.top();
        q.pop();

        if(visit[current]==true){
            continue;
        }
        visit[current]=true;
        cout << current << ' ';

        for(int i=v[current].size()-1 ; i >= 0 ; i--){
            int target = v[current][i];
            if(visit[target]==false){
                q.push(target);
            }
        }
        
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int node, edge, start;
    int a,b;

    cin >> node >> edge >> start;

    vector<vector<int>> v(node+1);

    while(edge--){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i = 1; i <= node; i++) {
        sort(v[i].begin(), v[i].end());
    }

    dfs(v,start,node);

    cout << '\n';

    bfs(v,start,node);
    
    
    return 0;
}
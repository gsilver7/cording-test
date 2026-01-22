#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& v, vector<bool>& visit, int m){
    queue<int> q;
    visit[m]=true;

    q.push(m);

    while(q.size() != 0){
        int mm = q.front();
        q.pop();

        for(int i=0;i<v[mm].size();i++){
            int target = v[mm][i];
            if(visit[target] == false){
                visit[target] = true;
                q.push(target);
            }
        }
    }
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    int start,end;

    int answer = 0;

    cin >> m >> n;

    vector<vector<int>> v(m+1); //간선
    vector<bool> visit(m+1,false);    //방문

    while(n--){
        cin >> start >> end;
        v[start].push_back(end);
        v[end].push_back(start);
    }

    for(int i=1;i<=m;i++){
        if(visit[i]==false){
            bfs(v,visit,i);
            answer++;
        }
    }

    cout << answer;

    return 0;
}
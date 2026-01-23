#include <bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>& v, vector<bool>& visit, int m){
    queue<int> q;
    visit[m]=true;
    int answer = 0;

    q.push(m);

    while(q.size() != 0){
        int mm = q.front();
        q.pop();

        for(int i=0;i<v[mm].size();i++){
            int target = v[mm][i];
            if(visit[target] == false){
                visit[target] = true;
                answer ++;
                q.push(target);
            }
        }
    }

    cout << answer;
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


    bfs(v,visit,1);

    

    return 0;
}
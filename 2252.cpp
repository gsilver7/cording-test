#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;

    cin >> m >> n;

    vector<vector<int>> v(m+1); // 간선 그래프

    vector<int> degree(m+1,0);   // 차수 그래프

    int start,end;

    while(n--){
        cin >> start >> end;
        v[start].push_back(end);
        degree[end]++;
    }

    queue<int> q;
    for(int i=1;i<m+1;i++){
            if(degree[i]==0){
                q.push(i);
                degree[i]--;
            }
        } //큐에 넣기

    

    while(q.size() != 0){
        int cur = q.front();
        cout << cur << " ";
        for(int j=0;j < v[cur].size();j++){
            int target = v[cur][j];
            degree[target]--;
            if(degree[target] == 0){
                q.push(target);
            }
        }
        q.pop();
    }
    

    return 0;
}
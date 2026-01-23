#include <bits/stdc++.h>
using namespace std;

struct grid{
    int x;
    int y;
};

int bfs(vector<string>& v, int m,int n){
    queue<grid> q;

    vector<vector<int>> dist(m+1,vector<int>(n+1,0));

    q.push({1,1});
    v[1][1] = '0';
    dist[1][1] = 1;

    while(q.size() != 0){
        int xxx = q.front().x;
        int yyy = q.front().y;

        q.pop();

        if (xxx < n && v[yyy][xxx+1] == '1'){
            q.push({xxx+1,yyy});
            v[yyy][xxx+1] = '0';
            dist[yyy][xxx+1] = dist[yyy][xxx] + 1;
        }
        if (yyy < m && v[yyy+1][xxx] == '1'){
            q.push({xxx,yyy+1});
            v[yyy+1][xxx] = '0';
            dist[yyy+1][xxx] = dist[yyy][xxx] + 1;
        }
        if (xxx > 1 && v[yyy][xxx-1] == '1'){
            q.push({xxx-1,yyy});
            v[yyy][xxx-1] = '0';
            dist[yyy][xxx-1] = dist[yyy][xxx] + 1;
        }
        if (yyy > 1 && v[yyy-1][xxx] == '1'){
            q.push({xxx,yyy-1});
            v[yyy-1][xxx] = '0';
            dist[yyy-1][xxx] = dist[yyy][xxx] + 1;
        }
        if(dist[m][n] != 0){
            return dist[m][n];
        }
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    cin >> m >> n;
    string k;

    vector<string> v(m+1); //미로 배열

    for(int i=1;i<=m;i++){
        cin >> k;
        v[i] = '0' + k;
    }

    int answer = bfs(v,m,n);

    cout << answer;
    return 0;
}
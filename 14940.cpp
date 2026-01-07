#include <bits/stdc++.h>
using namespace std;

struct Node {
    int x;
    int y;
};


void bfs(vector<vector<int>>& v,vector<vector<int>>& ans,int row,int hi,int m,int n){
    queue<Node> q;

    q.push({row,hi});
    v[hi][row] = 0;

    while(q.size() > 0){
        int xx;
        int yy;
        xx = q.front().x;
        yy = q.front().y;
        q.pop();

        if (xx-1 >= 0 && v[yy][xx-1] != 0){ // 왼쪽 방향으로
            q.push({xx-1,yy});
            v[yy][xx-1] = 0;
            ans[yy][xx-1] = ans[yy][xx] + 1;
        }
        if (yy-1 >= 0 && v[yy-1][xx] != 0){ // 위쪽 방향으로
            q.push({xx,yy-1});
            v[yy-1][xx] = 0;
            ans[yy-1][xx] = ans[yy][xx] + 1;
        }
        if (xx+1 < n && v[yy][xx+1] != 0){ // 오른쪽 방향으로
            q.push({xx+1,yy});
            v[yy][xx+1] = 0;
            ans[yy][xx+1] = ans[yy][xx] + 1;
        }
        if (yy+1 < m && v[yy+1][xx] != 0){ // 아래쪽 방향으로
            q.push({xx,yy+1});
            v[yy+1][xx] = 0;
            ans[yy+1][xx] = ans[yy][xx] + 1;
        }
    }
}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    
    int m,n;

    int row, hi; //목표지점 좌표
                 // row 가로 hi 세로

    cin >> m >> n; // 세로 m 가로 n
    // 목표 bfs 거리 출력

    vector<vector<int>> v(m, vector<int>(n, 0));

    vector<vector<int>> ans(m, vector<int>(n, 0));

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> v[i][j];
            if(v[i][j] == 2){
                row = j;
                hi = i;
            }
        }
    }

    bfs(v,ans,row,hi,m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(v[i][j] == 1){
                ans[i][j] = -1;
            }
        }
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << ans[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
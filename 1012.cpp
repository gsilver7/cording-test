#include <bits/stdc++.h>
using namespace std;

struct grid{
    int x;
    int y;
};

void bfs(vector<vector<int>>& v,int xx,int yy,int m,int n){
    queue<grid> q;

    q.push({xx,yy});
    v[yy][xx] = 0;

    while(q.size() != 0){
        int xxx = q.front().x;
        int yyy = q.front().y;
        q.pop();

        if (xxx+1 < m && v[yyy][xxx+1] == 1){
            q.push({xxx+1,yyy});
            v[yyy][xxx+1] = 0;
        }
        if (yyy+1 < n && v[yyy+1][xxx] == 1){
            q.push({xxx,yyy+1});
            v[yyy+1][xxx] = 0;
        }
        if (xxx > 0 && v[yyy][xxx-1] == 1){
            q.push({xxx-1,yyy});
            v[yyy][xxx-1] = 0;
        }
        if (yyy > 0 && v[yyy-1][xxx] == 1){
            q.push({xxx,yyy-1});
            v[yyy-1][xxx] = 0;
        }
    }

}



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    
    int m, n, total;
    int xx,yy;

    cin >> num;

    while(num--){
        int ans = 0;
        cin >> m >> n >> total;
        vector<vector<int>> v(n, vector<int>(m, 0));
        while(total--){
            cin >> xx >> yy;
            v[yy][xx] = 1;
        }

        for(int i=0;i<n;i++){     //y 좌표
            for(int j=0;j<m;j++){ //x 좌표
                if (v[i][j] == 1){
                    bfs(v,j,i,m,n);
                    ans++;
                }
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
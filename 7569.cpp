#include <bits/stdc++.h>
using namespace std;

struct grid {
    int x;
    int y;
    int z;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int h,m,n;
    int ans = 0;

    cin >> m >> n >> h;

    vector<vector<vector<int>>> v(h, vector<vector<int>>(n, vector<int>(m, 0)));

    queue<grid> q;
    int qq;

    for(int i=0;i<h;i++){ // 높이
        for(int k=0;k<n;k++){ // y 세로
            for(int j=0;j<m;j++){ // x 가로
                cin >> qq;
                v[i][k][j] = qq;
                if (qq == 1){
                    q.push({j,k,i});
                }
            }
        }
    }
    
    while(1){
        queue<grid> q2;

        while(q.size() != 0){
            int xx = q.front().x;
            int yy = q.front().y;
            int zz = q.front().z;
            q.pop();

            if (xx+1 < m && v[zz][yy][xx+1] == 0){
                q2.push({xx+1,yy,zz});
                v[zz][yy][xx+1] = 1;
            }
            if (yy+1 < n && v[zz][yy+1][xx] == 0){
                q2.push({xx,yy+1,zz});
                v[zz][yy+1][xx] = 1;
            }
            if (xx > 0 && v[zz][yy][xx-1] == 0){
                q2.push({xx-1,yy,zz});
                v[zz][yy][xx-1] = 1;
            }
            if (yy > 0 && v[zz][yy-1][xx] == 0){
                q2.push({xx,yy-1,zz});
                v[zz][yy-1][xx] = 1;
            }
            if (zz+1 < h && v[zz+1][yy][xx] == 0){
                q2.push({xx,yy,zz+1});
                v[zz+1][yy][xx] = 1;
            }
            if (zz > 0 && v[zz-1][yy][xx] == 0){
                q2.push({xx,yy,zz-1});
                v[zz-1][yy][xx] = 1;
            }
        }


        if (q2.size() == 0){
            break;
        }
        else{
            q = q2;
        }
        ans++;

    }


    for(int i=0;i<h;i++){ // 높이        
        for(int k=0;k<n;k++){ // y 세로
            for(int j=0;j<m;j++){ // x 가로
                if (v[i][k][j] == 0){
                    ans = -1;
                }
            }
        }
    }

    cout << ans;

    return 0;
}
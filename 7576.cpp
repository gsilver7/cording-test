#include <bits/stdc++.h>
using namespace std;

struct grid{
    int x;
    int y;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    int k;
    int ans = 0;

    cin >> m >> n;

    vector<vector<int>> v(n, vector<int>(m, 0));

    queue<grid> q1;
    

    for(int i=0;i<n;i++){     //y 좌표
        for(int j=0;j<m;j++){ //x 좌표
            cin >> k;
            v[i][j] = k;
            if (k == 1){
                q1.push({j,i});
            }
        }
    }
    while(1){
        queue<grid> q2;

        while(q1.size() != 0){
            int xx = q1.front().x;
            int yy = q1.front().y;
            q1.pop();

            if (xx+1 < m && v[yy][xx+1] == 0){
                q2.push({xx+1,yy});
                v[yy][xx+1] = 1;
            }
            if (yy+1 < n && v[yy+1][xx] == 0){
                q2.push({xx,yy+1});
                v[yy+1][xx] = 1;
            }
            if (xx > 0 && v[yy][xx-1] == 0){
                q2.push({xx-1,yy});
                v[yy][xx-1] = 1;
            }
            if (yy > 0 && v[yy-1][xx] == 0){
                q2.push({xx,yy-1});
                v[yy-1][xx] = 1;
            }
        }
        
        if (q2.size() == 0){
            break;
        }
        else{
            q1 = q2;
        }
        ans++;
    }
    


    for(int i=0;i<n;i++){     //y 좌표
        for(int j=0;j<m;j++){ //x 좌표
            if (v[i][j] == 0){
                ans = -1;
                break;
            }
        }
    }
    
    cout << ans;

    return 0;
}
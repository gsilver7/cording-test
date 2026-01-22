#include <bits/stdc++.h>
using namespace std;

struct grid{
    int x;
    int y;
};

void bfs(int i,int j,vector<string>& v,int k) {
    char target = v[i][j];
    queue<grid> q;

    char as = 'Y';
    if (target == 'R' || target == 'G'){
        as = 'X';
    }

    v[i][j] = as;
    q.push({i,j});

    while(q.size() != 0){
        int xx = q.front().x;
        int yy = q.front().y;
        q.pop();

        if(xx+1<k && v[xx+1][yy] == target){
            v[xx+1][yy] = as;
            q.push({xx+1,yy});
        }
        if(yy+1<k && v[xx][yy+1] == target){
            v[xx][yy+1] = as;
            q.push({xx,yy+1});
        }
        if(yy>0 && v[xx][yy-1] == target){
            v[xx][yy-1] = as;
            q.push({xx,yy-1});
        }
        if(xx>0 && v[xx-1][yy] == target){
            v[xx-1][yy] = as;
            q.push({xx-1,yy});
        }
    }
}

void bfs2(int i,int j,vector<string>& v,int k) {
    char target = v[i][j];
    queue<grid> q;

    v[i][j] = 'Z';
    q.push({i,j});

    while(q.size() != 0){
        int xx = q.front().x;
        int yy = q.front().y;
        q.pop();

        if(xx+1<k && v[xx+1][yy] == target){
            v[xx+1][yy] = 'Z';
            q.push({xx+1,yy});
        }
        if(yy+1<k && v[xx][yy+1] == target){
            v[xx][yy+1] = 'Z';
            q.push({xx,yy+1});
        }
        if(yy>0 && v[xx][yy-1] == target){
            v[xx][yy-1] = 'Z';
            q.push({xx,yy-1});
        }
        if(xx>0 && v[xx-1][yy] == target){
            v[xx-1][yy] = 'Z';
            q.push({xx-1,yy});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vector<string> v(k);

    for(int i=0;i<k;i++){
        cin >> v[i];
    }

    int ans1 = 0;
    int ans2 = 0;
    

    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(v[i][j] != 'X' && v[i][j] != 'Y'){
                bfs(i,j,v,k);
                ans1++;
            }
        }
    }

    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            if(v[i][j] != 'Z'){
                bfs2(i,j,v,k);
                ans2++;
            }
        }
    }

    cout << ans1 << ' ' << ans2;

    return 0;
}

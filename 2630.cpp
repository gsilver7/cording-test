#include <bits/stdc++.h>
using namespace std;

int white = 0;
int blue = 0;

void gg(vector<vector<int>>& v,int k,int x,int y){

    int temp = v[y][x];
    int flag = 0;

    for(int i=y;i<y+k;i++){
        for(int j=x;j<x+k;j++){
            if(temp != v[i][j]){
                flag = 1;
            }
        }
    }

    if(flag == 1){
        gg(v,k/2,x,y);
        gg(v,k/2,x+k/2,y);
        gg(v,k/2,x,y+k/2);
        gg(v,k/2,x+k/2,y+k/2);
    }
    else if (temp == 1){
        blue++;
    }
    else if (temp == 0){
        white++;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vector<vector<int>> v(k, vector<int>(k));

    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cin >> v[i][j];
        }
    }

    gg(v,k,0,0);

    cout << white << '\n' << blue;

    return 0;
}
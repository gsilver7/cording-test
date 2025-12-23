#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int col,row;
    cin >> row >> col;
    int k;
    
    vector<vector<int>> v(row, vector<int>(col));
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> v[i][j];
        }
        
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> k;
            v[i][j] +=k;
        }        
    }



    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout << v[i][j] << " ";
        }
        cout << '\n';
    }
    
    return 0;
}

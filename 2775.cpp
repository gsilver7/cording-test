#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<vector<int>> v(15,vector<int>(15,0));

    v[0] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};

    for (int i = 1;i<15;i++){ //층수
        for (int j = 1;j<15;j++){
            v[i][j] = v[i][j-1] + v[i-1][j];
        }
    }

    int k;
    cin >> k;

    while(k--){
        int floor,ho;
        cin >> floor >> ho;

        cout << v[floor][ho] << '\n';
    }

    return 0;
}
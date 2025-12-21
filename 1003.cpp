#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int k, a;
    cin >> k;
    vector<int> k1(41);
    vector<int> k0(41);

    k0[0] = 1;
    k1[0] = 0;
    k0[1] = 0;
    k1[1] = 1;
    
    for(int i=2;i<=40;i++){
        k0[i]=k0[i-1]+k0[i-2];
        k1[i]=k1[i-1]+k1[i-2];
    }

    for(int i=0;i<k;i++){
        cin >> a;
        cout << k0[a] << ' ' << k1[a] << '\n';
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int k;
    
    cin >> k;

    vector<int> dp(12);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;

    for(int i=4;i<11;i++){
        dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
    }

    int a;

    while(k--){
        cin >> a;
        cout << dp[a] << '\n';
    }

    return 0;
}
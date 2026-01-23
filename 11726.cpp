#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int i;

    cin >> i;

    vector<int> dp(1001);

    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 5;
    dp[5] = 8;

    for(int j = 6;j<=i;j++){
        dp[j] = (dp[j-1] + dp[j-2]) % 10007;
    }
    cout << dp[i];

    return 0;
}
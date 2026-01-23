#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> dp(5001);

    dp[1] = -1;
    dp[2] = -1;
    dp[3] = 1;
    dp[4] = -1;
    dp[5] = 1;

    int k;
    cin >> k;

    for(int i=6;i<=k;i++){
        int temp = -1;
        if(dp[i-3] != -1 && dp[i-5] != -1){
            temp = min(dp[i-3],dp[i-5])+1;
        }
        else if(dp[i-3] != -1){
            temp = dp[i-3] + 1;
        }

        else if(dp[i-5] != -1){
            temp = dp[i-5] + 1;
        }

        dp[i] = temp;
    }
    cout << dp[k];
    return 0;
}


#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a,b;

    cin >> a >> b;

    vector<int> dp(a.size()+1,0);

    for(char s:b){
        int prev = 0; // 대각선 왼쪽 위(dp[i-1][j-1])를 보관할 변수
        for(int j = 1;j <= a.size();j++){
            int temp = dp[j];
            if (s == a[j-1]){
                dp[j] = prev+1;
            }
            else{
                dp[j] = max(dp[j],dp[j-1]);
            }
            prev = temp;
        }
    }
    cout << dp[a.size()];

    return 0;
}

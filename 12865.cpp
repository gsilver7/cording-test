#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, Tweight;
    int weight,value;

    cin >> k >> Tweight;
    vector<int> dp(Tweight+1,0);
    
    for(int i=0 ; i<k ; i++){
        cin >> weight >> value;
        
        for (int j=Tweight ; j >= weight ; j--) {
            dp[j] = max(dp[j],value+dp[j-weight]);
        }
    }
    
    cout << dp[Tweight];

    return 0;
}

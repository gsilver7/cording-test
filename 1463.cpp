#include <bits/stdc++.h>
using namespace std;

vector<int> memo(1000001,0);

int dp(int a){
    long long answer = 1000000;
    long long m = 1000000;

    if(a==1){
        return 0;
    }

    if (memo[a] != 0) {
        return memo[a];
    }

    if(a%3 == 0){
        m = dp(a/3)+1;
    }
    answer = min(answer,m);

    if(a%2 == 0){
        m = dp(a/2)+1;
    }
    answer = min(answer,m);
    
    m = dp(a-1)+1;
    answer = min(answer,m);

    return memo[a] = answer;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a;
    cin >> a;

    cout << dp(a);

    return 0;
}
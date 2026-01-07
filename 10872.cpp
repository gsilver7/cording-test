#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int s;
    cin >> s;
    int ans = 1;
    
    while(s>1){
        ans *= s;
        s--;
    }
    cout << ans;

    return 0;
}
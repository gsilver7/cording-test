#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int ans = 0;
    for(int i=0;i<5;i++){
        int a;
        cin >> a;
        ans += a*a;
    }
    

    cout << ans%10;
    return 0;
}
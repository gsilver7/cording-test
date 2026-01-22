#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long u,o,s;
    long long ans= 0;
    cin >> u >> o >> s;

    long long mi = min({u,o,s});

    ans+=mi;
    
    u-=mi;
    o-=mi;
    s-=mi;

    if(u==0 || o==0){
        cout << ans;

        return 0;
    }

    ans +=min(u/3 , o);

    cout << ans;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    string b;
    cin >> a >> b;
    int ans = 0;

    for(int k=0;k<a;k++){

        ans += (b[k]-'0');
    }

    cout << ans;

    return 0;
}

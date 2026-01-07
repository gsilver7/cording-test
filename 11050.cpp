#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int a,b;

    cin >> a >> b;
    int k = b;

    int ans = 1;
    for(int i=0;i<b;i++){
        ans *= a;
        a--;
    }

    for(int i=0;i<b;i++){
        ans /= k;
        k--;
    }
    cout << ans;


    return 0;
}


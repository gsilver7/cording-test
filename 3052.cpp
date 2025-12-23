#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(42);
    int b;
    int ans = 0;

    for(int i=0;i<10;i++){
        cin >> b;
        a[b%42] = 1;
    }

    for(int i=0;i<=41;i++){
        if(a[i]==1){
            ans+=1;
        }
    }
    cout << ans;

    return 0;
}
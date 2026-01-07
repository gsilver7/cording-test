#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vector<int> v(k);

    for(int i=0;i<k;i++){
        cin >> v[i];
    }

    sort(v.begin(),v.end());

    int ans = 0;

    for(int i=k;i>0;i--){
        ans = ans + i*v[k-i];
    }
    cout << ans;
    
    return 0;
}
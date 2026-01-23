#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vector<int> v(k);
    

    for(int i = 0; i < k; i++) {
        cin >> v[i];
    }

    vector<int> v2 = v;
    
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end()); // O(N)

    for(int i = 0; i < k; i++) {
        auto it = lower_bound(v2.begin(), v2.end(), v[i]);
        
        cout << (it - v2.begin()) << " ";
    }




    return 0;
}
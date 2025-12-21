#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    int target;
    cin >> k;
    vector<int> v(k);
    for(int i=0;i<k;i++){
        cin >> v[i];
    }
    
    cin >> target;
    cout << count(v.begin(), v.end(), target);

    return 0;
}
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
    sort(v.begin(), v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i] << '\n';
    }
    return 0;
}


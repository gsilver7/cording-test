#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n,m;
    cin >> n;
    vector<int> q1(n);
    
    for(int i=0;i<n;i++){
        cin>>q1[i];
    }
    
    cin >> m;

    sort(q1.begin(),q1.end());

    int k;

    for(int i=0;i<m;i++){
        cin >> k;
        cout << binary_search(q1.begin(), q1.end(), k) << '\n';
    }


    return 0;
}
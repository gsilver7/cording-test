#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    
    cin >> m >> n;
    vector<int> v(m+1);

    for(int i=1;i<=m;i++){
        cin >> v[i];
    }

    vector<int> s(m+1);

    s[0] = 0;
    for(int i=1;i<=m;i++){
        s[i] = s[i-1]+v[i];
    }

    int a,b;
    while(n--){
        cin >> a >> b;
        cout << s[b] - s[a-1] << '\n';
    }
    
    return 0;
}
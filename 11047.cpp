#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;
    cin >> m >> n;

    int count = 0;
    vector<int> v(m); //미로 배열

    for(int i=m-1;i>=0;i--){
        cin >> v[i];
    }

    for(int i=0;i<m;i++){
        int pp = n/v[i];
        count+=pp;
        n-=pp*v[i];
    }

    cout << count;

    return 0;
}
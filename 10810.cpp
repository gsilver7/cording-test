#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    int m,n,o;
    cin >> a >> b;

    vector<int> k(a);

    for(int i=0;i<b;i++){
        cin >> m >> n >> o;
        for (int j=m;j<=n;j++){
            k[j-1] = o;
        }
    }

    for(int i=0;i<a;i++){
        cout << k[i] << ' ';
    }


    return 0;
}

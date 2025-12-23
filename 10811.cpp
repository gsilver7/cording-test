#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    int m,n;
    cin >> a >> b;

    vector<int> k(a);

    for(int i=1;i<=a;i++){
        k[i-1] = i;
    }

    for(int i=0;i<b;i++){
        cin >> m >> n;
        reverse(k.begin()+m-1, k.begin()+n);
    }

    for(int i=0;i<a;i++){
        cout << k[i] << ' ';
    }


    return 0;
}

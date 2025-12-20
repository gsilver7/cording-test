#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    int a,b;
    cin >> k;
    for(int i=1;i<=k;i++){
        cin >> a >> b;
        cout << a+b  << '\n';
    }
    return 0;
}
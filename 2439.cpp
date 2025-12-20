#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for(int i=1;i<=a;i++){
        cout << string(a-i, ' ')  << string(i, '*')  << '\n';
    }
    return 0;
}
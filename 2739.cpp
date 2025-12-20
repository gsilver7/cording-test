#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int f;
    cin >> f;

    for(int i=1;i<10;i++){
        cout << f << " * " << i << " = " << f*i << '\n';
    }

    return 0;
}
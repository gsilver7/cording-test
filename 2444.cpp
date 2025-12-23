#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    cin >> a;
    for(int i=1;i<=a;i++){
        cout << string((a-i), ' ');
        cout << string((2*i-1), '*') << '\n';
    }
    for(int i=a-1 ; i>0 ; i--){
        cout << string((a-i), ' ');
        cout << string((2*i-1), '*') << '\n';
    }

    return 0;
}
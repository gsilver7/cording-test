#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(31);
    int b;

    for(int i=0;i<28;i++){
        cin >> b;
        a[b] = 1;
    }

    for(int i=1;i<=30;i++){
        if(a[i]==0){
            cout << i << '\n';
        }
    }

    return 0;
}
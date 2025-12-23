#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    for(int a=0;a<k;a++){

        int q;
        string p;

        cin >> q >> p;
        for(int i=0;i<p.length();i++){
            cout << string(q,p[i]);
        }
        cout << '\n';
    }
    

    return 0;
}

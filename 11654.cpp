#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string b;
    cin >> b;
    vector<int> g(26,-1);

    for(int k=0;k<b.length();k++){
        int temp = b[k]-(int)'a';

        if (g[temp]==(-1)){
            g[temp] = k;
        }
    }
    for(int k=0;k<26;k++){
        cout << g[k] << " ";
    }
    

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<string> k;
    string q;
    int maxl = 0;

    while(cin >> q){
        k.push_back(q);
        if(maxl<q.length()){
            maxl = q.length();
        }
    }
    
    for(int i=0;i<maxl;i++){
        for(int j=0;j<k.size();j++){
        if (k[j].length()>i){
                cout << k[j][i];
            }

        }
    }
    
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(10001,0);

    int k;
    int g;
    cin >> k;

    while(k--){
        cin >> g;
        v[g]+=1;
    }
    
    for(int i=0;i<=10000;i++){
        if(v[i]>0){
            for(int j=0;j < v[i];j++)
            cout<<i<<'\n';
        }
    }
    return 0;
}
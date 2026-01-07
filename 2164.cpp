#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    int start = 1;
    cin >> k;

    vector<int> v(k);
    
    iota(v.begin(), v.end(), 1);
    
    if (k == 1){
        cout << 1;
    }
    else if (k == 2){
        cout << 2;
    }
    else{
        for(int i=0;i<k-2;i++){
            
            v.push_back(v[start]);
            start++;    
            start++;
            
        }
        cout << v[start];
    }
    

    return 0;
}
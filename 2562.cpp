#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >>k;
    int max = k;
    int ind = 1;

    for(int i=2;i<10;i++){
        cin >> k;
        if (max<k){
            ind = i;
            max = k;
        }
    }
    cout << max << '\n' << ind;
    
    return 0;
}
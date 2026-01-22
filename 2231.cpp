#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;
    int out = 0;

    for(int i=k/10;i<k;i++){
        int ans = i;
        int asdf = i;

        while(1){
            if(asdf == 0){
                break;
            }
            ans += (asdf%10);
            asdf/=10;
        }
        
        if (ans == k){
            out = i;
            break;
        }
    }
    cout << out;

    return 0;
}


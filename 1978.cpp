#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vector<int> prim(1001,1);
    prim[1]=0;
    prim[0]=0;

    for(int i=2;i<40;i++){
        int j = i;
        while(1){
            if(j*i>1000){
                break;
            }
            prim[i*j] = 0;
            j++;
        }
    }

    int q;
    int cnt = 0;

    for(int i=0;i<k;i++){
        cin >> q;
        if(prim[q] == 1){
            cnt++;
        }
    }
    cout<< cnt;

    return 0;
}
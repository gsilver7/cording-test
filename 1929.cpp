#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(1000001,1);

    v[0] = 0;
    v[1] = 0;

    for(int i=2;i<=1000;i++){
        if(v[i]==0){
            continue;
        }
        for(int j=i;j<=1000000;j++){
            if(i*j<=1000000){
                v[i*j] = 0;
            }
            else{
                break;
            }
            
        }
    }
    int start,stop;
    cin >> start >> stop;

    for(int i=start;i<=stop;i++){
        if(v[i]==1){
            cout << i << '\n';
        }
    } 

    return 0;
}


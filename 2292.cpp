#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    cin >> a;

    int ans = 1;

    for(int i=1;i>0;i++){
        if(ans>=a){
            
            cout << i;
            break;
        }
        else{
            ans = ans+6*i;
        }
    }
    
    

    return 0;
}
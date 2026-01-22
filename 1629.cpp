#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,c; 
    long long ans = 1;

    cin >> a >> b >> c;

    while(b>0){
        if(b%2 == 1){
            ans = (ans * a)%c;
            b--;
        }
        else if(b%2==0){
            a= (a*a)%c;
            b /= 2;
        }

    }
    cout << ans;

    return 0;
}
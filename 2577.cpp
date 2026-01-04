#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;
    cin >> a >> b >> c;

    int ans = a*b*c;
    vector<int> q(10);

    while (1){
        
        q[ans%10] += 1;

        ans /= 10;
        if (ans == 0){
            break;
        }
    }
    for(int i=0;i<10;i++){
        cout << q[i] << '\n';
    }
    

    return 0;
}
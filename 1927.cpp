#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    long long com;
    cin >> k;

    priority_queue<long long, vector<long long>,greater<long long>> v;

    for(int i=0;i<k;i++){
        cin >> com;
        if (com == 0){
            if(v.size() == 0){
                cout << 0 << '\n';
            }
            else{
                cout << v.top() << '\n';
                v.pop();
            }
        }
        else{
            v.push(com);
        }
    }

    
    return 0;
}
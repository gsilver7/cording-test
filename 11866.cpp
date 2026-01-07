#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;

    cin >> n >> k;
    int cnt = 0;

    vector<int> v(n);
    iota(v.begin(), v.end(), 1);

    cout << "<";
    while(1){
        if(cnt == v.size()-1){
            cout << v[cnt];
            break;
        }
        for(int i=0;i<k-1;i++){
            v.push_back(v[cnt]);
            cnt++;
        }
        cout << v[cnt] << ", ";
        cnt++;
    }

    cout << ">";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int b;
    int k;
    cin >> b;

    vector<int> a(b);

    for(int i=0;i<b;i++){
        cin >> k;
        a[i] = k;
    }

    float mx = *max_element(a.begin(), a.end());

    float answer = 0;
    
    for(int i=0;i<b;i++){
        answer += a[i]/mx*100;
    }

    cout << fixed << setprecision(9) << answer/b;

    return 0;
}
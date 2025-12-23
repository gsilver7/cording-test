#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    string s;
    int k;
    cin >> k;
    for(int i=0;i<k;i++){

        cin >> s;
        cout << s[0] << s.back() << '\n';
    }
    return 0;
}
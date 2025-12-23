#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    string s,q;
    cin >> s >> q;

    reverse(s.begin(), s.end());
    reverse(q.begin(), q.end());

    cout << max(s,q);

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int A,B,C;
    cin >> A >> B >> C;
    cout << (A+B)%C << '\n';
    cout << ((A%C) + (B%C))%C << '\n';
    cout << (A*B)%C << '\n';
    cout << ((A%C) * (B%C))%C << '\n';
    return 0;
}
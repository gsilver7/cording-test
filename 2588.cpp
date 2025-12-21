#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int A,B;
    cin >> A >> B;

    int t1 = (B%10);
    int t10 = (B/10)%10;
    int t100 = B/100;

    cout << A*t1 << '\n';
    cout << A*t10 << '\n';
    cout << A*t100 << '\n';
    cout << A*B << '\n';
    return 0;
}
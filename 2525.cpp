#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b,c;
    cin >> a >> b >> c;
    b += c;

    if (b>59){
        int f = b/60;
        b %= 60;
        a+=f;
    }
    if (a>23){
        a %= 24;
    }

    cout << a << ' ' << b;

    return 0;
}
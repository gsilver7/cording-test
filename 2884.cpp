#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b,c;
    cin >> a >> b;
    b -= 45;

    if (b<0){
        b+=60;
        a-=1;
    }
    if (a<0){
        a += 24;
    }

    cout << a << ' ' << b;

    return 0;
}
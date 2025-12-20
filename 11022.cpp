#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int k;
    cin >> k;
    int a,b;
    for(int i=1;i<=k;i++){
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a+b << '\n';
    }
    return 0;
}
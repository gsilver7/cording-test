#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b;
    cin >> a >> b;

    if (a>b){cout << '>';}
    else if (a<b){cout << '<';}
    else {cout << "==";}
    
    return 0;
}
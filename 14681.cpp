#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b;
    cin >> a >> b;

    if (a>0 && b>0){cout << 1;}    
    else if (a>0 && b<0){cout << 4;}
    else if (a<0 && b>0){cout << 2;}
    else {cout << 3;}

    return 0;
}
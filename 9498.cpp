#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b;
    cin >> a;

    if (a>=90 && a<=100){cout << 'A';}
    else if (a>=80 && a<90){cout << 'B';}
    else if (a>=70 && a<80){cout << 'C';}
    else if (a>=60 && a<70){cout << 'D';}
    else{cout << 'F';}
    
    return 0;
}
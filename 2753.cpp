#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b;
    cin >> a;

    if (a%400 == 0){cout << 1;}    
    else if (a%4 == 0){
        if (a%100 == 0){cout << 0;}
        else{cout << 1;} 
    }
    else {cout << 0;}

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b,c;
    while(1){
        cin >> a >>b >>c;
        if (a == 0){break;}
        if (a>b && a>c && a*a == b*b + c*c){
            cout << "right" << '\n';
        }
        else if (c>b && a<c && a*a+b*b == c*c){
            cout << "right" << '\n';
        }
        else if (a<b && b>c && b*b == c*c + a*a){
            cout << "right" << '\n';
        }
        
        else{
            cout << "wrong" << '\n';
        }
    }
    
    
    return 0;
}
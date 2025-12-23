#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    string s;
    int ans = 0;
    cin >> s;

    for (char k:s){
        if (k>=65 && k<=67){
            ans += 3;
        }
        else if (k>=68 && k<=70){
            ans += 4;
        }
        else if (k>=71 && k<=73){
            ans += 5;
        }
        else if (k>=74 && k<=76){
            ans += 6;
        }
        else if (k>=77 && k<=79){
            ans += 7;
        }
        else if (k>=80 && k<=83){
            ans += 8;
        }
        else if (k>=84 && k<=86){
            ans += 9;
        }
        else if (k>=87 && k<=90){
            ans += 10;
        }

    }
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int buf,k;
    cin >> buf;

    string answer;

    if (buf == 8){
        answer = "descending";
        for(int i=0;i<7;i++){
            cin >> k;
            if (k != buf - 1){
                answer = "mixed";
                break;
            }
            buf = k;
        }
    }
    else if (buf == 1){
        answer = "ascending";
        for(int i=0;i<7;i++){
            cin >> k;
            if (k != buf + 1){
                answer = "mixed";
                break;
            }
            buf = k;
        }
    }
    else{
        answer = "mixed";
    }
    
    cout << answer;

    return 0;
}
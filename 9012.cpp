#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string s;
    cin >> k;

    for(int i = 0;i<k;i++){
        int cnt = 0;
        
        cin >> s;
        
        for(char c : s){
            if (c == '('){
                cnt++;
            }
            else if(c == ')'){
                cnt--;
            }

            if(cnt < 0){
                break;
            }
        }
        if(cnt == 0){
            cout << "YES" << '\n';
        }
        else{
            cout << "NO" << '\n';
        }    
    }
    return 0;
}


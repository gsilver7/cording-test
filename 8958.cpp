#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    string s;

    cin >> k;

    for(int i=0;i<k;i++){
        int answer = 0;
        int buf = 0;
        cin >> s;
        for(int j=0;j<s.size();j++){
            if(s[j] == 'O'){
                buf += 1;
            }
            else{
                buf = 0;
            }
            answer += buf;
        }
        cout << answer << '\n';
    }


    

    return 0;
}
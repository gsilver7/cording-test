#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    int k;
    int temp;
    int ans = 0;
    int q;

    cin >> s >> k;

    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            q = s[i] - '0';
        }
        else if(s[i]>='A' && s[i]<='Z'){
            q = s[i] - 'A' + 10;
        }
        else{
            continue;
        }
        
        ans = (ans*k + q);
        
    }
    cout << ans;
    return 0;
}

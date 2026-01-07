#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    string s;
    
    while(1){
        cin >> s;

        if(s == "0"){ 
            break;
        }

        int size = s.size();
        int index = (size+1)/2;
        string ans = "yes";

        for(int i=0;i<index;i++){
            if(s[size-i-1] != s[i]){
                ans = "no";
                break;
            }
        }
        cout << ans << '\n';
    } 

    return 0;
}


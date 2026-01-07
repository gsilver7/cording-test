#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k,g;
    string s;

    int bit = 0;

    cin >> k;

    for(int i=0;i<k;i++){
        cin >> s;
        if(s == "add"){
            cin >> g;
            bit = bit | (1 << g);
        }
        else if(s == "remove"){
            cin >> g;
            bit = bit & ~(1 << g);
        }
        else if(s == "check"){
            cin >> g;
            if(bit & (1 << g)){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if(s == "toggle"){
            cin >> g;
            bit = bit ^ (1 << g);
        }
        else if(s == "all"){
            bit = (1<<21)-1;
        }
        else if(s == "empty"){
            bit = 0;
        }
    }

    return 0;
}
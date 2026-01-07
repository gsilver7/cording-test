#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    while(1){
        string s;
        int back = 0;

        getline(cin, s);
        
        if(s=="."){
            break;
        }

        for(char c:s){

            if(c==')' || c==']'){
                if(back == 0){
                    back++;
                    break;
                }
                else if(c==')' && s[back-1]=='('){
                    back--;
                }
                else if(c==']' && s[back-1]=='['){
                    back--;
                }
                else{
                    break;
                }
            }
            
            else if(c=='(' || c=='['){
                s[back] = c;
                back++;
            }
            
        }
        
        if(back == 0){
            cout << "yes" << '\n';
        }
        else{
            cout << "no" << '\n';
        }
    }

    return 0;
}
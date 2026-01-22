#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;

    cin >> s;

    int sum=0;

    int check;

    for(int i=0;i<=12;i+=2){
        if(s[i] == '*'){
            check = 1;
        }
        else{
            sum+=(s[i] - '0');
        }
    }
    for(int i=1;i<12;i+=2){
        if(s[i] == '*'){
            check = 3;
        }
        else{
            sum+=(s[i] - '0')*3;
        }
    }


    if(check == 3){
        int target = 9-((sum-1)%10);;
        cout << (7 * target) % 10;
    }
    else if(check == 1){
        cout << 9-((sum-1)%10);
    }
    
    return 0;
}
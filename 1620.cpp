#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b;
    cin >> a >> b;

    vector<string> v(a+1);
    unordered_map<string, int> map;

    string s;


    for(int i=1;i<=a;i++){
        cin >> s;
        v[i] = s;
        map[s] = i;
    }

    for(int i=0;i<b;i++){
        string input;
        cin >> input;
        if(isdigit(input[0])) {
            int num = stoi(input);
            cout << v[num] << '\n';
        } else{
            cout << map[input] << '\n';
        }

    }
    
    return 0;
}
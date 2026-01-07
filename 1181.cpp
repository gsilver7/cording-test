#include <bits/stdc++.h>
using namespace std;

bool compare(const string& a, const string& b){
    if (a.size() == b.size()){
        return a<b;
    }
    else{
        return a.size()<b.size();
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    string name;

    vector<string> v(k);

    for(int i=0;i<k;i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end(),compare);
    v.erase(unique(v.begin(), v.end()), v.end());

    for(int i=0;i<v.size();i++){
        cout << v[i] << '\n';
    }
    return 0;
}


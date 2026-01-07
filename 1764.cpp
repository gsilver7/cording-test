#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int a,b;
    cin >>a >>b;

    vector<string> v(a);
    vector<string> w;

    for(int i=0;i<a;i++){
        cin >> v[i];
    }
    sort(v.begin(),v.end());

    string target;
    for(int i=0;i<b;i++){
        cin >> target;
        if (binary_search(v.begin(), v.end(), target)){
            w.push_back(target);
        }
    }



    sort(w.begin(),w.end());

    int si = w.size();
    cout << si << '\n';
    for(int i=0;i<si;i++){
        cout << w[i] << '\n';
    }

    


    return 0;
}


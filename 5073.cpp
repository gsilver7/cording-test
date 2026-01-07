#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v(3);


    

    while(1){
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(), v.end());

        if (v[0]==0 && v[1]==0 && v[2]==0){
            break;
        }
        else if (v[2] >= v[1] + v[0]){
            cout << "Invalid" << '\n';
        }
        else if (v[0] == v[1] && v[2] == v[1]){
            cout << "Equilateral" << '\n';
        }
        else if (v[0] == v[1] || v[2] == v[1]){
            cout << "Isosceles" << '\n';
        }
        else{
            cout << "Scalene" << '\n';
        }
    }

    return 0;
}


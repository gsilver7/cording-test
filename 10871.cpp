#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    int target;
    int temp;
    cin >> k >> target;
    
    for(int i=0;i<k;i++){
        cin >> temp;
        if (temp < target){cout << temp << " ";}
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[6] = {1, 1, 2, 2, 2, 8};
    int k;
    for(int i=0;i<6;i++){
        cin >> k;
        cout << arr[i]-k << '\n';
    }

    return 0;
}







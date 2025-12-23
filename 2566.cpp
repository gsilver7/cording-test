#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    int maxk = -1;
    int row = 0;
    int col = 0;

    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> k;
            if (k>maxk){
                maxk=k;
                row = i;
                col = j;
            }
        }
    }
    cout << maxk << '\n';
    cout << row+1 << ' ' << col+1;
    
    return 0;
}

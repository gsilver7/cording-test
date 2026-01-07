#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int num;
    cin >> num;

    vector<int> buf(6);

    for (int i=0;i<6;i++){
        cin >> buf[i];
    }

    int T,P;
    
    cin >> T >> P;


    int ans = 0;
    for (int i=0;i<6;i++){
        if(buf[i] == 0){
            continue;
        }
        else{
            ans += (((buf[i] - 1) / T)+1);
        }
    }
    cout << ans << '\n';


    cout << num/P << " " << num%P;

    return 0;
}
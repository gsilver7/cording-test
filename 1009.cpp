#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> q2({6,2,4,8});
    vector<int> q3({1,3,9,7});
    vector<int> q4({6,4});
    vector<int> q7({1,7,9,3});
    vector<int> q8({6,8,4,2});
    vector<int> q9({1,9});

    int k;
    cin >>k;
    for (int i=0;i<k;i++){
        int a,b;
        cin >> a >> b;

        int md = a%10;
        
        if (md==2){
            cout << q2[b%4] << '\n';
        }
        else if (md==3){
            cout << q3[b%4] << '\n';
        }
        else if (md==4){
            cout << q4[b%2] << '\n';
        }
        else if (md==7){
            cout << q7[b%4] << '\n';
        }
        else if (md==8){
            cout << q8[b%4] << '\n';
        }
        else if (md==9){
            cout << q9[b%2] << '\n';
        }
        else if (md==0){
            cout << 10 << '\n';
        }
        else{
            cout << md << '\n';
        }
    }


    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int k;
    int x1,y1,r1,x2,y2,r2;
    cin >> k;
    
    for(int i=0;i<k;i++){
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        double dist = sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));

        if (r1 == r2){
            if (dist == 0){
                cout << -1 << '\n';
            }
            else if (dist<2*r1 && dist>0){
                cout << 2 << '\n';
            }
            else if (dist == 2*r1){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else{
            int mx = max(r1,r2);
            int mn = min(r1,r2);

            if (dist >= 0 && mx>dist+mn){
                cout << 0 << '\n';
            }
            else if (mx==dist+mn){
                cout << 1 << '\n';
            }
            else if (mx<dist+mn && dist<mx+mn){
                cout << 2 << '\n';
            }
            else if (dist==mx+mn){
                cout << 1 << '\n';
            }
            else if (dist>mx+mn){
                cout << 0 << '\n';
            }
        }
    }
    
    return 0;
}
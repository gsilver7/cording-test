#include <bits/stdc++.h>
using namespace std;

struct pos{
    int x;
    int y;
};

bool compare(const pos& a, const pos& b){
    if(a.x == b.x){
        return a.y < b.y;
    }
    return a.x < b.x;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    vector<pos> qwer(k);

    for(int i=0;i<k;i++){
        cin >> qwer[i].x >> qwer[i].y;
    }

    sort(qwer.begin(),qwer.end(),compare);

    for(int i=0;i<k;i++){
        cout << qwer[i].x << " " << qwer[i].y << '\n';
    }
    
    return 0;
}
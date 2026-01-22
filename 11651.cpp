#include <bits/stdc++.h>
using namespace std;

struct dd{
    int x;
    int y;
};

bool compare(dd& a,dd& b){
    if (a.y == b.y){
        return a.x<b.x;
    }
    return a.y< b.y;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int k;
    int a,b;
    cin >> k;

    vector<dd> v(k);

    for(int i=0;i<k;i++){
        cin >> a >> b;
        v[i] = {a,b};
    }
    
    sort(v.begin(),v.end(),compare);
    
    for(int i=0;i<k;i++){
        cout << v[i].x << " " << v[i].y << '\n';
    }   

    return 0;
}
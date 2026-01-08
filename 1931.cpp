#include <bits/stdc++.h>
using namespace std;

struct tim {
    int start;
    int end;
};

bool compare(const tim &a, const tim &b) {
    
    if(a.end == b.end){
        return a.start < b.start;
    }
    return a.end < b.end;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;

    cin >> k;
    
    
    vector<tim> v(k);

    for(int i=0;i<k;i++){
        cin >> v[i].start >> v[i].end;
    }

    sort(v.begin(),v.end(),compare);

    int count = 0;
    int endT = -1;
    
    for(int i=0;i<k;i++){
        if(endT <= v[i].start){
            endT = v[i].end;
            count+=1;
        }
    }

    cout << count;
    

    return 0;
}

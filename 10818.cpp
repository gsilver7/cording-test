#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    int min,max,temp;
    cin >> k;

    cin >> temp;
    max = temp;
    min = temp;
    for(int i=1;i<k;i++){
        cin >> temp;
        if (max < temp){max=temp;}
        if (min > temp){min=temp;}
    }
    
    cout << min << " " << max;

    return 0;
}
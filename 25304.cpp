#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int total;
    int f;
    int answer = 0;
    int a,b;
    cin >> total >> f;

    for(int i=0;i<f;i++){
        cin >> a >> b;
        answer += (a*b);
    }
    if (answer == total ){cout << "Yes";}
    else {cout << "No";}    

    return 0;
}
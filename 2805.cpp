#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;
    cin >> a >> b;

    vector<int> v(a);

    for(int i=0;i<a;i++){
        cin >> v[i];
    }

    int low,mid,top;
    long long answer,sum;
    low = 0;
    top = *max_element(v.begin(), v.end()); 

    while(low<= top){
        sum = 0;
        mid = (low+top)/2;
        for(int i=0;i<a;i++){
            if (v[i] > mid) {
                sum += (v[i] - mid);
            }
        }

        if(sum == b){
            answer = mid;
            break;
        }
        else if(sum < b){
            top = mid-1;
        }
        else if(sum > b){
            low = mid+1;
            answer = mid;
        }
    }

    cout << answer;
    return 0;
}
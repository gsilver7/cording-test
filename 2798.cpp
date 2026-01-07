#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M;
    cin >> N >> M;

    int ans = 0;
    vector<int> lin(N);
    
    for(int i=0;i<N;i++){
        cin >> lin[i];
    }

    for (int i=0;i<(N-2);i++){
        for (int j=i+1;j<(N-1);j++){
            for (int k=j+1 ; k<N ; k++){
                int sum = lin[i] + lin[j] + lin[k];
                if (sum > ans && sum <= M){
                    ans = sum;
                }
            }
        }
    }
    cout << ans;
    return 0;
}
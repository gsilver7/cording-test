#include <bits/stdc++.h>
using namespace std;

long gcd(int m,int n) {
    if (m%n == 0){
        return n;
    }
    return gcd(n,m%n);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N,M;
    
    cin >> N >> M;

    if(M == N){
        cout << M << '\n' << N;
    }
    else{
        int k = gcd(N,M);
        cout << k << '\n' << N*M/k;
    }
    return 0;
}


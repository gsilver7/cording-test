#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long N,M;
    cin >> N >> M;

    cout << (N+M)*(N-M);
    return 0;
}
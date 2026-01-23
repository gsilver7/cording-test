#include <bits/stdc++.h>
using namespace std;

vector<int> dist(100001,-1);

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int current, target;
    cin >> current >> target;

    if (current == target) {
        cout << 0;
        return 0;
    }

    queue<int> q;
    q.push(current);
    dist[current] = 0;

    while(1){
        int temp = q.front();
        q.pop();
        for (int next : {temp - 1, temp + 1, temp * 2}) {
            if (next >= 0 && next <= 100000 && dist[next] == -1) {
                dist[next] = dist[temp] + 1;
                
                if (next == target) {
                    cout << dist[next];
                    return 0;
                }
                
                q.push(next);
            }
        }
    }

    return 0;
}


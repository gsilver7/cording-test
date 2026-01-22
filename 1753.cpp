#include <bits/stdc++.h>
using namespace std;

struct etge{
    int end;
    int weight;
};

struct node{
    int num;
    int dist;

    bool operator<(const node& other) const {
        return dist > other.dist; 
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int v,e;
    cin >> v >> e;
    
    int stdV;

    cin >> stdV;

    vector<vector<etge>> vec(v+1);  //간선 집합

    vector<int> dist(v+1,2e9);     //계산된 거리 집합

    for(int i=0;i<e;i++) {
        int k;
        int x,w;
        cin >> k; 
        
        cin >> x >> w;
        vec[k].push_back({x,w});
    }

    priority_queue<node> pq;
    dist[stdV] = 0;

    pq.push({stdV, 0});

    while(pq.size() != 0){
        int current = pq.top().num;
        int dis = pq.top().dist;

        pq.pop();

        if (dis > dist[current]){
            continue;
        }

        for (int i=0;i<vec[current].size();i++){
            int cost = dis + vec[current][i].weight;

            if (cost < dist[vec[current][i].end]){
                dist[vec[current][i].end] = cost;
                pq.push({vec[current][i].end, cost});
            }
        }
    }

    for(int i=1;i<dist.size();i++){
        if (dist[i] == 2e9){
            cout << "INF" << '\n';
        }
        else{
            cout << dist[i] << '\n';
        }
    }

    return 0;
}
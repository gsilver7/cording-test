#include <bits/stdc++.h>
using namespace std;

struct print{
    int prio;
    int index;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    

    int k;
    cin >> k;
    int m,n;
    int pri;

    while(k--){
        priority_queue<int> pq;// 중요도 개수 배열
        queue<print> q;
        cin >> m >> n;
        int count = 1;

        for(int i=0;i<m;i++){
            cin >> pri;
            pq.push(pri);
            q.push({pri,i});
        }

        while(1){
            if (pq.top() == q.front().prio){
                if(q.front().index == n){
                    break;
                }
                else{
                    q.pop();
                    pq.pop();
                    count++;
                }
            }
            else{
                q.push(q.front());
                q.pop();
            }
        }
        cout << count << '\n';
    }
    
    return 0;
}
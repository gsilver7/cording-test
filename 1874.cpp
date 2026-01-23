#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    int a;
    int count = 1;

    stack<int> q;

    vector<char> ans;

    for(int i=0;i<k;i++){
        cin >> a;

        while (count <= a) {
            q.push(count);
            count++;
            ans.push_back('+');
        }

        if (!q.empty() && q.top() == a) {
            q.pop();
            ans.push_back('-');
        } 
        else {
            cout << "NO";
            return 0;
        }

    }
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << '\n';
    }

    return 0;
}


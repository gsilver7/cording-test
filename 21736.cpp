#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,n;

    cin >> m >> n;

    vector<string> v(m);

    queue<tuple<int, int>> q;

    int answer = 0;

    for(int i=0;i<m;i++){
        cin >> v[i];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (v[i][j] == 'I'){
                v[i][j] = 'X';
                q.push({i,j});
            }
        }
    }

    

    while(q.size() != 0){
        auto [first, second] = q.front();
        q.pop();

        if(first+1<m && v[first+1][second] != 'X'){
            if (v[first+1][second] == 'P'){
                answer++;
            }
            v[first+1][second] = 'X';
            q.push({first+1,second});
        }
        if(second+1<n && v[first][second+1] != 'X'){
            if (v[first][second+1] == 'P'){
                answer++;
            }
            v[first][second+1] = 'X';
            q.push({first,second+1});
        }
        if(first>0 && v[first-1][second] != 'X'){
            if (v[first-1][second] == 'P'){
                answer++;
            }
            v[first-1][second] = 'X';
            q.push({first-1,second});
        }
        if(second>0 && v[first][second-1] != 'X'){
            if (v[first][second-1] == 'P'){
                answer++;
            }
            v[first][second-1] = 'X';
            q.push({first,second-1});
        }


        
    }

    if(answer == 0){
        cout << "TT";
    }
    else{
        cout << answer;
    }
    


    return 0;
}
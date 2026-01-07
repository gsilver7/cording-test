#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // 코드 작성
    int a,b;
    
    cin >> a >> b;

    vector<string> matrix(a);

    int buf = 64;

    for(int i=0;i<a;i++){
        cin >> matrix[i];
    }
    
    for(int q=0;q<=a-8;q++){
        for(int w=0;w<=b-8;w++){
            int cnt = 0;
            for(int i=q;i<q+8;i++){
                for(int j=w;j<w+8;j++){
                    if((i+j)%2 == 0 && matrix[i][j] == 'W'){
                        cnt++;
                    }
                    else if((i+j)%2 == 1 && matrix[i][j] == 'B'){
                        cnt++;
                    }
                }
            }
            buf = min({buf,cnt,64-cnt});
        }
    }

    cout << buf;

    return 0;
}
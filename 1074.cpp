#include <bits/stdc++.h>
using namespace std;

int z(int siz,int a,int b){
    if(siz == 0){
        return 0;
    }


    int stda = 1<<(siz-1);

    if(stda <= a && stda <= b){ //오른쪽 아래
        return z(siz-1,a-stda,b-stda) + (1<<(2*siz-2))*3;
    }
    else if(stda <= a && stda > b){ //왼쪽 아래
        return z(siz-1,a-stda,b) + (1<<(2*siz-2))*2;
    }
    else if(stda > a && stda <= b){ //오른쪽 위
        return z(siz-1,a,b-stda) + (1<<(2*siz-2))*1;
    }
    else if(stda > a && stda > b){ //왼쪽 위
        return z(siz-1,a,b) + (1<<(2*siz-2))*0;
    }

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b,c;    
    cin >> a >> b >> c;

    cout << z(a,b,c);


    return 0;
}
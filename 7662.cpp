#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    int num;

    char command;
    long long n;

    cin >> k;

    while(k--){
        multiset<int> ms;
        cin >> num;
        while(num--){
            cin >> command;
            cin >> n;
            if (command == 'I'){
                ms.insert(n);
            }
            else if (command == 'D'){
                if(ms.size() == 0){
                    continue;
                }
                if(n == -1){
                    ms.erase(ms.begin());
                }
                else if(n == 1){
                    ms.erase(prev(ms.end()));
                }
            }
        }
        if(ms.size() != 0){
            cout << *prev(ms.end()) << " " << *ms.begin() << "\n";
        }
        else if(ms.size() == 0){
            cout << "EMPTY" << '\n';
        }
    }

    return 0;
}
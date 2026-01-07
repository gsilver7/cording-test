#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> stack;

    int num,k;
    int size = 0;
    string Command;
    
    cin >> num;

    for(int i=0;i<num;i++){
        cin >> Command;

        if (Command == "push"){
            cin >> k;
            size++;
            if(stack.size() < size){
                stack.push_back(k);
            }
            else{
                stack[size-1] = k;
            }
        }
        else if (Command == "top"){
            if(size > 0){
                cout << stack[size-1] << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if (Command == "empty"){
            if(size == 0){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if (Command == "size"){
            cout << size << '\n';
        }
        else if (Command == "pop"){
            if(0 < size){
                cout << stack[size-1] << '\n';
                size--;
            }
            else{
                cout << -1 << '\n';
            }
        }
    }


    return 0;
}


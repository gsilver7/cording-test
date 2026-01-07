#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> queue;

    int num,k;
    int index = 0;
    int size = 0;
    string Command;
    
    cin >> num;

    for(int i=0;i<num;i++){
        cin >> Command;

        if (Command == "push"){
            cin >> k;
            size++;
            queue.push_back(k);
        }
        else if (Command == "front"){
            if(index < size){
                cout << queue[index] << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if (Command == "back"){
            if(index < size){
                cout << queue[size-1] << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
        else if (Command == "empty"){
            if(index == size){
                cout << 1 << '\n';
            }
            else{
                cout << 0 << '\n';
            }
        }
        else if (Command == "size"){
            cout << size-index << '\n';
        }
        else if (Command == "pop"){
            if(index < size){
                cout << queue[index] << '\n';
                index++;
            }
            else{
                cout << -1 << '\n';
            }
        }
    }


    return 0;
}


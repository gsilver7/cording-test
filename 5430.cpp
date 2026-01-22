#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    string command;
    int ele;
    string el;

    
    
    while(k--){
        bool re = false;
        cin >> command;
        cin >> ele;
        cin >> el;
        
        for(int i=0;i<el.size();i++){
            if(el[i] == '[' || el[i] == ']' || el[i] == ','){
                el[i] = ' ';
            }
        }

        stringstream ss(el);
        int num;
        vector<int> v;
        while (ss >> num) {
            v.push_back(num);
        }

        int front = 0;
        int back = v.size();


        

        for(int i=0;i<command.size();i++){
            if(command[i]=='R'){
                re = !re;
            }
            else if(command[i]=='D'){
                if(re == false){
                    front++;
                }
                else if(re == true){
                    back--;
                }
            }
        }
        if(front>back){
            cout << "error"<<'\n';
        }
        else if(front==back){
            cout << "[]"<<'\n';
        }
        else if(re == false){
            cout << '[';
            for(int i=front;i<back-1;i++){
                cout << v[i] << ',';
            }
            cout << v[back-1] << ']' << '\n';
        }
        else if(re == true){
            cout << '[';
            for(int i=back-1;i>=front+1;i--){
                cout << v[i] << ',';
            }
            cout << v[front] << ']' << '\n';
        }
    }

    return 0;
}
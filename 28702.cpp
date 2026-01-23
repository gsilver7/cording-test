#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n =3;
    string a;

    while(n--){
        cin >> a;
        if (isdigit(a[0])) {
            break;
        }
    }

    int b = stoi(a) + n+1;

    if(b%15 == 0){
        cout << "FizzBuzz";
    }
    else if(b%5 == 0){
        cout << "Buzz";
    }
    else if(b%3 == 0){
        cout << "Fizz";
    }
    else{
        cout << b;
    }
    return 0;
}


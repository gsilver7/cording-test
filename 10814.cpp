#include <bits/stdc++.h>
using namespace std;

struct Member {
    int age;
    string name;
};

bool compare(const Member& a, const Member& b) {
    // a가 b보다 앞에 오고 싶을 때 true를 반환하면 됩니다.
    return a.age < b.age; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    int age;
    string name;

    vector<Member> v(k);

    for(int i=0;i<k;i++){
        cin >> v[i].age >> v[i].name;

    }
    stable_sort(v.begin(), v.end(), compare);

    for(int i=0;i<k;i++){
        cout << v[i].age << " " << v[i].name << '\n';
    }
    return 0;
}


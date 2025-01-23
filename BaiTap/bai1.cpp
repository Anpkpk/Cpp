// Đếm số lượng phần tử xuất hiện trong mảng

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    // Làm bằng set:
    set<int> s;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;

    // Làm bằng map:
    map<int, bool> mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x] = true;
    }
    cout << mp.size() << endl;

    return 0;
}
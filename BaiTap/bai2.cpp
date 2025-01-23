// Cho 1 mảng nguyên gồm n phần tử,
// với mỗi truy vấn hãy kiểm tra xem số nào đó có nằm trong mảng hay không.

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    // Dùng set:
    set<int> se;
    for (int i = 0; i < n ; i++){
        int x; cin >> x;
        se.insert(x);
    }
    int q; cin >> q;
    while (q--){
        int x; cin >> x;
        if (se.count(x) == 1){
            cout << "YES\n";
        }
        else 
            cout << "NO\n";
    }

    // Dùng map:
    map<int, bool> mp;
    for (int i = 0; i < n ; i++){
        int x; cin >> x;
        mp.insert(x);
    }
}
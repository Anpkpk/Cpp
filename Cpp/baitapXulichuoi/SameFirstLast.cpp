#include <bits/stdc++.h>

using namespace std;

// Đếm số lượng xâu con có kí tự đầu và cuối giống nhau

int main() {
    string s;
    cin >> s;

    map<char, int> mp;
    for (char x : s) {
        mp[x]++;
    }

    // Các xâu con có 1 kí tự
    int ans = s.size();

    for (auto it : mp) {
        ans += it.second * (it.second - 1) / 2;     // Số dãy con ứng với số kí tự giống nó: C(2)(n) = n*(n - 1)/2
    }
    cout << ans;
}
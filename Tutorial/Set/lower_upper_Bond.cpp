// Cho một dãy số nguyên arr và số nguyên k.

// Hãy tìm ra hai số:

//     Số m là số nhỏ nhất trong dãy lớn hơn k. Nếu không có thì m = -1.
//     Số n là số nhỏ nhất trong dãy lớn hơn hoặc bằng k. Nếu không có thì n = -1.

// Kết quả trả về là dãy gồm 2 số [m,n].

#include <bits/stdc++.h>

using namespace std;

vector<int> setFunction(vector<int> arr, int k) {
    set<int> s(arr.begin(), arr.end());
    set<int>::iterator it;

    int a, b;
    it = s.lower_bound(k);
    if (it != s.end()) {
        a = *it;
    }
    else a = -1;

    it = s.upper_bound(k);
    if (it != s.end()) {
        b = *it;
    }
    else b = -1;

    return {a, b};
}

int main(){
    int n; cin >> n;
    vector<int> arr;
    int k; cin >> k;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        arr.push_back(tmp);
    }
    vector<int> ans = setFunction(arr, k);

    cout << ans[0] << " " << ans[1];
}
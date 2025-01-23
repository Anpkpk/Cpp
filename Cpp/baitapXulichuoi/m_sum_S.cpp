#include <bits/stdc++.h>

using namespace std;

// Số lớn nhất và nhỏ nhất có m chữ số và tổng các chữ số = S

int main() {
    int m, s;
    cin >> m >> s;

    if (s > 9*m || (s == 0 && m > 1)) {
        cout << "-1, -1";
    }

    int max[m] = {0}, min[m] = {0};
    int tmp = s;

    for (int i = 0; i < m; i++) {
        if (tmp >= 9) {
            max[i] = 9;
            tmp -= 9;
        }
        else if (tmp != 0) {
            max[i] = tmp;
            tmp = 0;
        }
        else break;
    }

    s--;
    for (int i = m - 1; i > 0; i--) {
        if (s >= 9) {
            min[i] = 9;
            s -= 9;
        }
        else if (s != 0) {
            min[i] = s;
            s = 0;
        }
        else break;
    }
    min[0] = s + 1;
    for (auto x : max) cout << x;
    cout << " ";
    for (auto x : min) cout << x;
}
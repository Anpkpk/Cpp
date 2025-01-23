#include <bits/stdc++.h>

using namespace std;

// Đổi chỗ 1 chữ số để có số lớn nhất nhỏ hơn số cho trước

int main() {
    string s;
    cin >> s;

    int i = s.size() - 2;
    while (i > 0 && s[i] <= s[i + 1]){
        i--;
    }
    if (i == -1) {
        cout << -1;
        return 0;
    }
    int j = s.size() - 1;
    while (s[j] >= s[i] || (s[j - 1] == s[j] && s[j] < s[i])) {
        j--;
    }

    swap(s[i], s[j]);

    if (s[0] == '0') {
        cout << -1;
    }
    else 
        cout << s;
}
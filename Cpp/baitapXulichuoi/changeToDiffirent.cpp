#include <bits/stdc++.h>

using namespace std;

// Cho 1 xâu kiểm tra xem xâu có thay đổi được để các kí tự đứng cạnh nhau là khác nhau không

int main() {
    string s;
    cin >> s;
    int a[26];
    for (char x : s)
        a[x - '0']++;
    
    int max = *max_element(a, a + 25);
    if (s.size() - max >= max - 1)
        cout << "YES";
    else
        cout << "NO";
}
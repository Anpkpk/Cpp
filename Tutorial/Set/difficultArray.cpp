/* Cho hai dãy arr1 và arr2 thuộc kiểu vetor<string>. Bạn tạo một dãy từ hai dãy trên theo điều kiện sau:

    Kết quả chỉ chứa các chuôi riêng biệt (Không có hai chuỗi nào giống nhau).
    Kết quả chứa các phần tử trong arr1 mà không xuất hiện trong arr2.
    Các phần tử các dãy kết quả được sắp xếp theo thứ tự từ điểm từ nhỏ đến lớn.

*/

#include <bits/stdc++.h>

using namespace std;

vector<string> mergeStringArray(vector<string> arr1, vector <string> arr2) {
    set<string> s(arr1.begin(), arr1.end());

    for (vector<string>::iterator it = arr2.begin(); it != arr2.end(); it++) {
        if (s.find(*it) != s.end()) {
            s.erase(*it);
        }
    }
    vector<string> ans(s.begin(), s.end());
    return ans;
}

int main() {
    vector<string> arr1;
    vector<string> arr2;
    vector<string> ans;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string tmp;
        cin >> tmp;
        arr1.push_back(tmp);
    }

    for (int i = 0; i < m; i++) {
        string tmp;
        cin >> tmp;
        arr2.push_back(tmp);
    }
    ans = mergeStringArray(arr1, arr2);
    for (auto s : ans) {
        cout << s << endl;
    }
}
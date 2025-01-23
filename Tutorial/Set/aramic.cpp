// Trong ngôn ngữ Aramic từ có thể đại diện cho các đối tượng.

// Các từ trong Aramic có tính chất đặc biệt:

// Một từ là một gốc nếu nó không chứa cùng một chữ cái nhiều lần.
// Một gốc và tất cả các hoán vị của nó cũng chỉ đại diện cho cùng một đối tượng.
// Từ gốc x của một từ y là từ chứa tất cả các chữ cái xuất hiện trong y
// theo cách mà mỗi chữ cái xuất hiện một lần. Ví dụ: gốc của "aaaa", "aa", "aaa" là "a", gốc của "aabb", "bab", "baabb", "ab" là "ab".
// Bất kỳ từ nào trong Aramic đại diện cho cùng một đối tượng với gốc của nó.
// Bạn có một dãy từ Aramic. Hãy đưa ra số lượng đối tượng khác nhau trong dãy đó.

// Ví dụ:

// Với words = ["a","aa","aaa","ab","abb"] thì kết quả là: aramic(words) = 2.

#include <bits/stdc++.h>

using namespace std;

int aramic(vector<string> word) {
    set<string> s;
    for (int i = 0; i < word.size(); i++) {
        set<char> ch;
        for (int j = 0; j < word[i].size(); j++) {
            ch.insert(word[i][j]);
        }
        string e = "";
        for (auto x : ch) {
            e += x;
        }
        s.insert(e);
    } 
    return s.size();
}

int main() {
    vector<string> s;
    int n; cin >> n;
    for (int i = 0; i < n; i++) {
        string tmp; cin >> tmp;
        s.push_back(tmp);
    }

    cout << aramic(s);
}
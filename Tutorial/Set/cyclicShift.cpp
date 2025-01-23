// Việt đang muốn tạo ra những từ khác nhau từ chuỗi word. 
// Với một chu kỳ, Anh bắt đầu bằng cách lấy ký tự cuối cùng của chuỗi word 
// và di chuyển nó lên đầu. Anh có thể thực hiện chu kỳ này rất nhiều lần.

// Ví dụ lên tục thực hiện chu kỳ biến đổi đó trên word = "abcda" thì 
// anh Việt sẽ nhận được các từ "aabcd", "daabc",...

// Anh Việt muốn biết rằng mình có thể tạo được bao nhiều từ riêng biệt bằng cách biến đổi trên.

#include <bits/stdc++.h>

using namespace std;

int cyclicShift(string word) {
    set<string> s;
    for (int i = 0; i < word.size(); i++) {
        char tmp = word.back();
        word.pop_back();
        word.insert(word.begin() + 0, tmp);
        s.insert(word);
    }
    return s.size();
}

int main(){ 
    string word;
    cin >> word;
    cout << cyclicShift(word);
}
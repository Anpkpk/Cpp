#include <bits/stdc++.h>

using namespace std;

int main(){
    // Khai báo:
    string s;
    string a;
    // Thực chất string là một chuỗi kí tự 
    // Truy cập kí tự xâu thông qua chỉ số như 1 mảng

    // Nhập xâu có chứa dấu cách đến khi gặp Enter:
    getline(cin, s);

    // Tránh trôi lệnh sau khi nhập số
    cin.ignore();

    // In ra màn hình:
    cout << s;

    // Lấy chiều dài của xâu s:
    s.length();
    s.size();

    // Nối 2 chuỗi với nhau: using + (Không dung được -)
    s = s + a;

    // So sánh theo thứ tự từ điển: (toán tử so sánh <, >, ==) 
    // Hoặc hàm a.compare(s); so sánh a với s
    if (a > s) cout << a;
    if (a.compare(s) )

    //  Tách xâu con trong 1 xâu:
    //      s = a.substr(index, num);
    //      + index: từ kí tự thứ index;
    //      + num: số ký tự cắt từ vị trí index;  không có num <=> cắt từ vị trí index đến cuối xâu;

    // Chuyển từ xâu sang số nguyên: 
    int x = stoi(s);
    // Chuyển từ xâu sang long long:
    long long y = stoll(s);

    // Chuyển từ số int/float sang chuỗi:
    a = to_string(x);

    // Tách từ trong string:
    stringstream ss(s);
    string tmp;
    while (ss >> tmp){   // Tách theo dấu '.' : while (getline(ss, tmp, '.'))
        // Sau mỗi lần lặp tách từ phải sang trái rồi gán vào tmp
        cout << tmp << endl;
    }

}
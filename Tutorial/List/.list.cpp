#include <bits/stdc++.h>
#include <list>

using namespace std;

int main(){

// List: 1 kiểu lưu trữ. Các phần tử nối tiếp nhau. Thuận lợi cho chèn, xóa theo cả hai hướng
// Bất lợi: truy cập phần tử bất kỳ.

// Khai báo
    list<int> l;
    list<string> l; 
    // Tương tự các kiểu dữ liệu khác

    // Các method trả về iterator:
    l.begin();  // iterator phàn tử đầu
    l.end();    // iterator sau phần tử cuối
    l.rbegin(); // iterator phần tử cuối
    l.rend();   // iterator phần tử trước phần tử đầu

    // Trả về sức chứa:
    l.empty();      // Kiểm tra xem có rỗng không
    l.size();       // Trả về kích thước
    l.max_size();   // Trả về kích thước lớn nhất

    // Sửa đổi:
    l.push_front();           // Chèn phần tử đầu
    l.push_back();            // Chèn vào cuối
    l.pop_back();             // Xóa phần tử cuối
    l.pop_front();            // Xóa phần tử đầu
    l.insert(it, n,element);  // Chèn n phần tử element vào vị trí iterator it => Trả về iterator
    l.erase(it);              // Xóa phần tử ở vị trí iterator it
    l.erase(it1, it2);        // Xóa phần tử từ it1 -> it2

    // Dịch chuyển iterator:
    advance(it, k);     // Dịch chuyển iterator tới vị trí k + 1;
}

// Queue(hàng đợi) là một loại container, 
// được thiết kế để hoạt động theo kiểu FIFO (First- in first - out) (vào trước ra trước),
// tức là một kiểu danh sách mà việc bổ sung được thực hiển ở cuối danh sách và loại bỏ ở đầu danh sách.

// Trong queue, có hai vị trí quan trọng là 
//     vị trí đầu danh sách (front), nơi phần tử được lấy ra, 
//     vị trí cuối danh sách (back), nơi phần tử cuối cùng được thêm vào.

#include <iostream>
#include <queue>

using namespace std;

int main(){
    // Khai báo:
    queue<int> q;

    // Capacity:
    q.size();   // Trả về kích thước.
    q.empty();  // Trả về true nếu queue rỗng.

    // Element access:
    q.front();  // Truy xuất phần tử đầu
    q.back();   // Truy xuât phần tử cuối

    // Modifier:
    q.push(const x);    // Chèn phần tử x vào cuối queue
    q.pop();            // Xóa qhaanf tử đầu ra khỏi queue
}
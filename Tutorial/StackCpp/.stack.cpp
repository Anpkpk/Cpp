#include <bits/stdc++.h>
#include <stack>

using namespace std;

int main(){
    // Stack: 1 kiểu giữ liệu lưu theo thứ tự: LIFO (last in firts out - vào cuối ra đầu)
    // Phù hợp chèn và xuất từ một đầu

    // Khai báo:
    stack<int> st;
    stack<string> st;

    // iterator:
    stack<int>::iterator it;

    // Hàm thành viên
    st.empty();     // Kiểm tra xem có rỗng không
    st.pop();       // Xóa phần tử cuối cùng
    st.push();      // Chèn phần tử vào cuối 
    st.top();       // Truy cập phần tử cuối
}
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){

    // Số lượng phần tử trong vector không cố định    
    // Khai báo:
    vector<int> v;
    // Khai báo trước có n phần tử:
    vector<int> a(n);

    // Đẩy 1 phần tử vào vector: kích thước của vector tự tăng lên 
    v.push_back(10);

    // Xóa phần tử cuối
    v.pop_back();

    // Lấy kích thước của vector:
    v.size();

    // Truy cập các phần tử theo chỉ số:
    v[0] = 12;
    v[v.size() - 1];
    v[v.back()];    // Phần tử cuối;

    // Duyệt các phàn tử:
    for (int i = 0; i < v.size(); i++){     // for (int x : v)
        cout << v[i] << endl;
    }

    // Với vector chưa có sẵn số lượng phần tử
    // Để nhập phần tử: khai báo 1 biến tạm
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int tmp; 
        cin >> tmp;
        v.push_back(tmp);
    }

    // Duyệt bằng Interator: con trỏ thông minh trỏ vào
    // v.begin() = phần tử đầu
    // v.end() = vị trí sau phần tử cuối
    for (vector<int>::interator it = v.begin(); it != v.end(); ++it){
    //  (auto it = v.begin(); it != v.end(); ++i)
        cout << *it << endl; // Vì it là một con trỏ nên truy cập giá trị phải dùng *;
    }

    // Khởi tạo các giá trị ban đầu cho vector:
    vector<int> vec(n, 100); // vector n phần tử có các giá trị là 100;

    // Có thể mở rộng vector = push_back();

    // Xóa một đoạn trong vector
    v.erase(it1, it2);  
    // vd: 
    // Xóa từ phần tử thứ l đến r:
    v.erase(v.begin() + l, v.begin() + r + 1);
}
#include <bits/stdc++.h>

using namespace std;

int main(){
// Set:
    //Khai báo:
    set<int> s;

    // Thêm phần tử: Olog(n);
    s.insert(100);
    s.insert(200);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        s.insert(tmp);
    }

    // Trả về số lượng phần tử:
    s.size();

    // Các phần tử trong set không trùng nhau, theo thứ tự từ nhỏ đến lớn

    // Tìm kiếm tong set
    if (s.count(5) != 0) {
        cout << "Found";
    }
    else cout << "Not Found";

    // find() trả về interator (con trỏ)
    if (s.find(5) != s.end()) cout << "Found";
    // Nếu không có trong set -> trả về s.end() (phần tử sau phần tử cuối cung trong set)

    // Xóa phần tử trong set
    s.erase(100); 
    // Xóa bằng Interator
    s.erase(s.find(5));

    // Duyệt các phần tử
    for (int x : s){
        cout << s << endl;
    }
    // Duyệt bắng interator
    for (set<int>::interator it = s.begin(); it != s.end(); ++it){
        cout << *it << endl;
    }

    *s.begin(); // Phần tử đầu tiên (phần tử nhỏ nhất)
    *s.rbegin(); // Phần tử cuối (phần tử lớn nhất)

    // Hàm tìm kiếm
    it = s.upper_bound(key); // Trả về iterator phần tử nhỏ nhất lớn hơn key. Nếu không tìm thấy trả về vị trí "end"
    it = s.lower_bound(key); // Trả về it phần tử nhỏ nhất mà không nhỏ hơn (lớn hơn hoặc bằng) key.
// Multiset 
    // Các phần tử có thể giống nhau theo thứ tự tăng dần
    // Khai bao:
    multiset<int> ms;
    ms.insert(100);
    ms.insert(200);
    ms.insert(100);

    // Xóa phần tử dùng erase() sẽ xóa tất cả:
    // Muốn xóa thì dùng interator

// Cửa sổ trượt có k phần tử cho ra giá trị lớn nhất

    int n, k;
    cin >> n >> k;
    int a[n];
    // Nhập các phần tử 
    for (int &x : a) cin >> x;

    multiset<int> ms;
    for (int i = 0; i < k; i++){ // Nhập k phần tử đầu tiên ứng với của sổ đầu tiên
        ms.insert(a[i]);
    }
    // với các của sổ tiếp theo
    for (int i = k; i < n; i++){
        cout << *ms.rbegin() << " ";    // in ra phần tử lớn nhất mỗi của sổ
        ms.erase(ms.find(a[i - k]));    // xóa đi phần tử đầu tiên của của sổ
        ms.insert(a[i]);                // Thêm phần tử tiếp theo vào của sổ
    }
    cout << *ms.rbegin() << endl;

// Unodered_set
    // Khai báo:
    unordered_set<int> s;
    // Không sắp xếp còn lại tương tự set
    atan(12);
}
 

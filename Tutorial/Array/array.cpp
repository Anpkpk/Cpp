#include <iostream>

using namespace std;

int main(){
    // Mảng 1 Dimention
    int a[5];

    // Mảng 2 Dimentions
    int b[5][5];

    // Duyệt từng phần tử (for each)
    for (int x : a) cout << x << " ";

    // Nhập từng phần tử (for each) cần dùng tham chiếu
    for (int &x : a) cin >> x; 

    // Mảng cộng dồn 1 Dimention
    /*
        * Các giá trị của mảng prefix[i] nhận tổng giá trị từ đầu đến phần tử a[i] 
                prefix[i] = prefix[i - 1] + a[i];
        * Mảng prefix[] bắt đầu từ 1
        * Truy vấn tổng trên đoạn [l, r] được tính bằng: 
                prefix[i] =  prefix[r] - prefix[l - 1];
    */

    // Mảng cộng dồn với mảng 2 Dimentions
    /*
        * prefix[i][j] = Tổng tất cả phần tử Matrix bắt đầu từ hàng 1 đến hàng i, cột 1 đến cột j 
            prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + b[i][j];
        * Truy vấn miền D = {[h1, h2], [c1, c2]}:
            prefix in D = prefix[h2][c2] - prefix[h1 - 1][c2] - prefix[h2][c1 - 1] + prefix[h1 - 1][c1 - 1];
    */

}
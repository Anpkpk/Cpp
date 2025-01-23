#include <iostream>

using namespace std;

// Viết chương trình tính tiền cước TAXI. Biết rằng:
// – Km đầu tiên là 5000đ
// – 30Km tiếp theo là 4000đ
// – Nếu lớn hơn 30Km thì mỗi Km thêm ra sẽ phải trả là 3000đ
// – Hãy nhập số Km sau đó in ra số tiền phải trả.

int main(){
    int km;
    double tien = 0;
    cin >> km;
    if (km <= 1){
        tien = km*5000;
    }
    else{
        if (km > 1 && km <= 31){
            tien = 5000 + 4000*(km - 1);
        }
        else{
            tien = 5000 + 4000*30 + (km - 31)*3000;
        }
    }
    cout << tien;
}
#include <iostream>
#include <cmath>

using namespace std;

int kiemtra(int a, int b, int c){
    int kq;
    if (a + b > c && a + c > b && b + c > a)
        kq = 1;
    else kq = 0;
    return kq;
}
int main(){
    cout << "nhap hinh can tinh: \n";
    cout << "tam giac: 1\ntron: 2\nhinh chu nhat: 3\n";
    int n;
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "nhap 3 canh: \n";
        int a, b, c;
        cin >> a >> b >> c;
        if (kiemtra(a, b, c) == 0)
            cout << "khong phai ba canh tam giac.";
        else {
            cout << "chu vi: " << a + b + c << endl;
            double p = (a + b + c) / 2;
            cout << "dien tich: " << sqrt(p*(p - a)*(p - b)*(p - c));
        }
        break;
    case 2:
        cout << "nhap ban kinh hinh tron: \n";
        int r;
        cin >> r;
        cout << "chu vi hih tron: " << 2*3.14*r << endl;
        cout << "dien tich hinh tron: "<< 3.14*r*r;
        break;
    case 3:
        cout << "nhap chieu dai, chieu rong: \n";
        int width, footage;
        cin >> footage >> width;
        cout << "chu vi hinh chu nhat: " << (width + footage)*2 << endl;
        cout << "dien tich hinh chu nhat: " << (width * footage);
    default:
        break;
    }
}

#include <iostream>
#include <cmath>

using namespace std;

int giaithua(int n){
    int kq = 1;
    for (int i = 2; i <= n; i++){
        kq = kq * i;
    }
    return kq;
}
int main(){
    double x, cosx, saiso;
    int n = 0;
    cin >> x;
    x = x*3.14/180;
    cosx = 0;
    saiso = x;
    while (abs(saiso) >= 0.00001)
    {
        if (n % 2 != 0)
            saiso = (-1)*pow(x, 2*n) / giaithua(2*n);
        else 
            saiso = pow(x, 2*n) / giaithua(2*n);
        cosx += saiso;
        n++;
    }
    cout << cosx;
}
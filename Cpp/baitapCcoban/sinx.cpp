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
// sin(x) = x – x^3/3! + x^5/5! – …+(-1)^n.x^(2n+1)/(2n+1)!
int main(){
    double x, sinx, saiso;
    int n = 0;
    cin >> x;
    x = x*3.14/180;
    sinx = 0;
    saiso = x;
    while (abs(saiso) >= 0.00001)
    {
        if (n % 2 != 0)
            saiso = (-1)*pow(x, 2*n + 1) / giaithua(2*n +1);
        else 
            saiso = pow(x, 2*n + 1) / giaithua(2*n +1);
        sinx += saiso;
        n++;
    }
    cout << sinx;
}

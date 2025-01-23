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
//  e^x = 1 + x/1! + x^2/2! + …+x^n/n!
// sai so |x^n/n!| < c
int main(){
    double x, saiso, c, kq = 0;
    int n = 0;
    cin >> x >> saiso;
    while (abs(pow(x, n)/giaithua(n)) >= saiso)
    {
        kq += pow(x, n) / giaithua(n);
        n++;
    }
    cout << kq;
}
#include <iostream>

using namespace std;
/*
ax + by = c
dx + ey = f

D = ae - bd
Dx = ce - bf
Dy = af - cd

x = Dx/D
y = Dy/D
*/
int main(){
    int a, b, c, d, e, f;
    double Dx, Dy, D;
    cin >> a >> b >> c >> d >> e >> f;
    if (a*e == b*d){
        cout << "vo nghiem";
    }
    else{
        D = a*e - b*d;
        Dx = c*e - b*f;
        Dy = a*f - c*d;
        cout << "x = " << Dx/D << endl;
        cout << "y = " << Dy/D << endl;
    }
}
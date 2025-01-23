#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double saiso = 1, pi = 0;
    int n = 0;
    while (saiso >= 0.00001)
    {
        saiso = abs(1.0*1/(2*n + 1));
        if (n % 2 == 0)
            pi = pi +1.0*1/(2*n + 1);
        else 
            pi -= 1.0*1/(2*n + 1);
        n++;
    }
    cout << 4*pi;
    
}
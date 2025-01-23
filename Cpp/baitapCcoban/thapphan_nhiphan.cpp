#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int phandu, kq = 0, temp = 1;
    while (n != 0)
    {
        phandu = n % 2;
        n /= 2;
        kq = kq + temp*phandu;
        temp *= 10;
    }
    cout << kq;
    
}
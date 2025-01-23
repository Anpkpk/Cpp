#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n, count = 0, temp, du;
    cin >> n;
    if (n <= 9 && n >= -9){
        cout << n << endl;
    }
    else if (n < 0){
        temp = abs(n);
        while (temp != 0){
            du = temp % 10;
            count = count*10 + du;
            temp /= 10;
        }
        cout << -count << endl;
    }
    else{
        while (n != 0){
            du = n % 10;
            count = count*10 + du;
            n /= 10;
        }
        cout << count << endl;
    }
}
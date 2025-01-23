#include <iostream>

using namespace std;

int doixung(int n){
    int temp, du, count = 0;
    if (n <= 9 && n >= -9){
        return n;
    }
    else if (n < 0){
        temp = abs(n);
        while (temp != 0){
            du = temp % 10;
            count = count*10 + du;
            temp /= 10;
        }
        return -count;
    }
    else{
        while (n != 0){
            du = n % 10;
            count = count*10 + du;
            n /= 10;
        }
        return count;
    }
}
int main(){
    int n;
    cin >> n;
    if (n == doixung(n)){
        cout << "Doi xung";
    }
     else cout << "Khong doi xung";

}
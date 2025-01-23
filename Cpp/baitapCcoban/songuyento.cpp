#include <iostream>

using namespace std;

void sont(int n){
    int kq = 0;
    if (n <= 0) cout << "khong phai so nguyen to";
    else{
        if (n < 4 ) cout << "la so nguyen to";
        else
            for (int i = 2; i < n / 2; i++){
                if (n % i == 0){
                cout << "khong phai so nguyen to";
                break;
                }
                else 

            }
            }
}

int main(){
    int n;
    cin >> n;
    sont(n);
}
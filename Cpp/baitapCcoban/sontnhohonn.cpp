#include <iostream>

using namespace std;

int nt(int n){
    int kq = 1;
    if (n <= 0) kq = 0;
    else{
        if (n < 4 ) kq = 1;
        else
            for (int i = 2; i < n/2; i++){
                if (n % i == 0){
                kq = 0;
                break;
                }
            }
    }
    return kq;
}
int main(){
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++){
        if (nt(i) == 1)
            cout << i <<" ";
    }

}
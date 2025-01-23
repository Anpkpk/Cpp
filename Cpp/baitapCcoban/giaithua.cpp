#include <iostream>

using namespace std;

int giaithua(int n){
    int kq = 1;
    for (int i = 1; i <= n ; i++)
    {
        kq *= i;
    }
    return kq;
}
int main(){
    int n;
    cin >> n;
    cout << giaithua(n);
}
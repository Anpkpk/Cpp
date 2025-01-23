#include <iostream>

using namespace std;

int main(){
    int f1 = 1, f0 = 1, f2 = f1 + f0;
    int n;
    cin >> n;
    cout << f0 << " " << f1;
    do
    {
        cout << " " << f2;
        f0 = f1;
        f1 = f2;
        f2 = f1 + f0;
    } while (f2 <= n);
}
#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    cout << "chu so hang tram: " << (a / 100) << endl;
    cout << "chu so hang chuc: " << (a % 100) / 10 << endl;
    cout << "chu so hang don vi: " << a % 10;
    return 0;
}
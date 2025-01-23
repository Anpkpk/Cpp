#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 1;
    for (int i = 2; i <= n; i++){
        double temp = i*1.0;
        sum += 1.0 / temp;
    }
    cout << sum;
    return 0;
}
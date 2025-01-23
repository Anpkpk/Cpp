#include <iostream>

using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (i % 2 != 0){
            sum += a[i];
        }
    }
    cout << sum;
}
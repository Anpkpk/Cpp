#include <iostream>

using namespace std;

int sohh(int n){
    int sum = 0;
    for (int i = 1; i <= n/2; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    if (n == sum) return 1;
    else return 0;
}
int main(){
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        if (sohh(i) == 1)
            cout << i << " ";
    }
    
}
#include <iostream>

using namespace std;

int main(){
    int n, min, index;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    index = 0; 
    min = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] <= min){
            index = i;
            min = a[i];
        }
    }
    cout << index;
}
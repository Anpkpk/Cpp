#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int index = 0, max = a[0];
    for (int i = 0; i < n; i++){
        if (a[i] >= max){
            index = i;
            max = a[i];
        }
    }
    cout << index;
}
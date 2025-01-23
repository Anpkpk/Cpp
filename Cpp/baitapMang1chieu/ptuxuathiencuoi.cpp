#include <iostream>

using namespace std;
int main(){
    int n, x, index = -1;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] == x){
            index = i;
        }
    }
    if (index != -1){
        cout << index;
    }
    else{
        cout << "So x khong xuat hien trong mang";
    }
}
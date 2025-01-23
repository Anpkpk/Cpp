#include <bits/stdc++.h>

using namespace std;

int main(){

    // Dynamic a array
    int *a = new int[10];

    for (int i = 0; i < 10; i++){
        cin >> a[i];
    }

    for (int i = 0; i < 10; i++){
        cout << a[i] << " ";
    }


    // Free the alloced memory
    delete[] a;  
}
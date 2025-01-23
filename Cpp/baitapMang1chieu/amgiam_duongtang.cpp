#include <iostream>

using namespace std;

void nhap(int n, int a[]){
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
}
void hoanvi(int i1, int i2, int a[]){
    int *pt1 = &a[i1];
    int *pt2 = &a[i2];
    int temp = *pt1;
    *pt1 = * pt2;
    *pt2 = temp;
}
void xuat(int n, int a[]){
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int n;
    cin >> n;
    int a[n];
    nhap(n, a);
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] < a[j] && ((a[i] < 0 && a[j] < 0) || (a[i] >= 0 && a[j] >= 0))){
                hoanvi(i, j, a);
            }
        }
    }
    xuat(n, a);
}

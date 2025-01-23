#include <iostream>

using namespace std;

void hoanvi(int i1, int i2, int a[]){
    int *pt1 = &a[i1];
    int *pt2 = &a[i2];
    int temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;
}
void sapxeptang(int n, int a[]){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                hoanvi(i, j, a);
            }
        }
    }
}
void sapxepgiam(int n, int a[]){
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] < a[j]){
                hoanvi(i, j, a);
            }
        }
    }
}
int main(){
    int n;
    int index = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sapxeptang(n, a);
    for (int i = 0; i < n; i++){
        if (a[i] >= 0){
            index = i;
            break;
        }
    }
    sapxepgiam(index, a);
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
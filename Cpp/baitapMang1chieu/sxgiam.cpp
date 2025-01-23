#include <iostream>

using namespace std;
void sapxep(int i1, int i2, int a[]){
    int *pt1 = &a[i1];
    int *pt2 = &a[i2];
    int temp;
    temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int temp;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[i] > a[j]){
                sapxep(i, j, a);
            }
        }
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    } 
}
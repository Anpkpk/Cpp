#include <iostream>

using namespace std;

int main(){
    int h;
    cin >> h;
    int a[100][100];
    for (int i = 0; i < h; i++){
        for (int j = 0; j <= i; j++){
            if (i == j || j == 0 ){
                a[i][j] = 1;
                cout << a[i][j] <<"\t" ;
            }
            else {
                a[i][j] = a[i-1][j - 1] + a[i-1][j];
                cout << a[i][j] << "\t";
            }
        }
        cout << "\n";
    }
    
}
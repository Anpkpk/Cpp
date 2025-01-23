#include <iostream>

using namespace std;

int USCLN(int a, int b) {
    if (b == 0) 
        return a;
    return USCLN(b, a % b);
}
int BCNN(int a, int b){
    return (a*b)/USCLN(a, b);
}
int main(){
    for (int i = 1; i < 200; i++){
        for (int j = 1; j < 200; j++){
            if (i - j == 90 && USCLN(i, j) == 15){
                cout << i << " " << j << endl;
            }
        }
    }
}
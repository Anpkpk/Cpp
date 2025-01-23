#include <iostream>

using namespace std;

void swapp(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a, b;
    cin >> a >> b;
    swapp(&a, &b);
    cout << a << " " << b;
}
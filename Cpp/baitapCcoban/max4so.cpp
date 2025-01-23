#include <iostream>

using namespace std;

int main(){
    int a, b, c, d;
    int temp1, temp2;
    cin >> a >> b >> c >> d;
    temp1 = max(a, b);
    temp2 = max(c, d);
    cout << max(temp1, temp2);
    return 0;
}
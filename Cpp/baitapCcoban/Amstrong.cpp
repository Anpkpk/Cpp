#include <iostream>

using namespace std;

void amstrong(int n){
    int number = n, temp, count = 0;
    while (n != 0)
    {
        temp = n % 10;
        count += temp*temp*temp;
        n /= 10;
    }
    if (count == number) cout << number << endl;
}
int main(){
    for (int i = 100; i <= 999; i++)
    {
        amstrong(i);
    }
}
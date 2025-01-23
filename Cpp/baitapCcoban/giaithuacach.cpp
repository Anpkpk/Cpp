#include <iostream>

using namespace std;

long long giaithuacach(int n){
    if (n == 1 || n == 0) 
        return 1;
    else return n*giaithuacach(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << giaithuacach(n);
}
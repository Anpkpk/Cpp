#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    if (a == 0){
        if (b == 0) 
            cout << "vo so nghiem";
        else 
            cout << "vo nghiem";
    }
    else 
        cout << "ptr co nghiem x = " << -b/(float)a;
}
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 0){
        if (b == 0){
            if (c == 0){
                cout << "ptr vo so nghiem.";
            }
            else 
                cout << "ptr vo ngiem.";
        }
        else
            cout << "ptr co 1 nghiem x = " << -c/(double)b;
    }
    else{
        const double delta = ((double)b*b - 4 * a * (double)c);
        if (delta == 0){
            cout << "ptr co 1 nghiem x = " << -b/((double)a*2);
        }
        else 
            if (delta < 0){
                cout << "ptr vo nghiem.";
            }
            else{
                double x1;
                double x2;
                x1 = (-b - sqrt(delta)) / (2*a);
                x2 = (-b + sqrt(delta)) / (2*a);
                cout << "ptr co hai nghiem :\n" << x1 << endl << x2;
            }
    }
}
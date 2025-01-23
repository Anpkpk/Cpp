#include <iostream>

using namespace std;

void check(int angle){
    if (angle <= 90){
        cout << "Goc phan tu thu 1";
    }
    else    
        if (angle <= 180){
            cout << "Goc phan tu thu 2";
        }
        else 
            if (angle <= 270){
                cout << "Goc phan tu thu 3";
            }
            else{
                if (angle <= 360)
                    cout << "Goc phan tu thu 4";
            }
}
int main(){
    int angle;
    cin >> angle;
    if (angle <= 360){
        check(angle);
    }
    else{
    int goc;
    goc = angle % 360;
    check(goc);
    }
    return 0;
}

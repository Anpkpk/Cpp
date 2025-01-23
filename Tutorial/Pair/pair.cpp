#include <bits/stdc++.h>

using namespace std;

int main(){
    // Dùn để lưu các cặp
    // Khai báo:
    pair<int, int> p;
    pair<int, string> s;
    
    // Phần 1, phần 2: 
    p.fist(); 
    p.second();

    // Tạo pair:
    pair<int, int> v = make_pair(100, 100);     // v = {100, 100};

    // Để lưu 3 cặp số :
    pair<pair<int, int>, int> v3;

    // tuple

    // Khai báo:
    tuple<int, int, int> t{1, 2, 3};    // t = make_tuple(1, 2, 3);

    // Truy cập vào phần tử tuple:
    get<1>(t);
}
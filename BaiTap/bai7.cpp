// Đếm số lượng từ khác nhau trong xâu
#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);

    set<string> se;
    stringstream ss(s);
    string tmp;
    while (ss >> tmp){
        se.insert(tmp);
    }
    cout << se.size() << endl;
}
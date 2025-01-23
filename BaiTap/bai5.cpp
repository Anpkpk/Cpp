// Kí tự xuất hiện nhiều nhất

#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    map<char, int> mp;

    for (char x : s){
        mp[x]++;
    }

    char res; int fre = 0;
    for (auto it : mp){
        if (it.second > res) {
            res = it.second;
            fre = it.first;
        }
    }
    cout << fre << " " << res << endl;
}
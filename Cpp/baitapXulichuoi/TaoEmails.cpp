#include <bits/stdc++.h>

using namespace std;

// NguEn HuY    HoAng AN
// -> annhh@gmail.com 
// Neu xuat hien nhieu lan => them so truoc @.

int main() {
    int n;  cin >> n;
    cin.ignore();
    map<string, int> mp;

    while (n--){
        string s;
        getline(cin, s);

        for (int i = 0; i < s.length(); i++) {
            s[i] = tolower(s[i]);
        }

        vector<string> v;
        stringstream ss(s);

        string temp;
        string res = "";

        while (ss >> temp) {
            v.push_back(temp);
        }

        res += v[v.size() - 1];

        for (int i = 0; i < v.size() - 1; i++) {
            res += v[i][0];
        }
        
        if (mp[res] == 0) {
            cout << res << "@gmail.com" << endl;
        }
        else {
            cout << res << mp[res] << "@gmail.com" << endl;
        }
        mp[res]++;
    }
}
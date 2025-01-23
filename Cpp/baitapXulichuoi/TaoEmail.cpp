#include <bits/stdc++.h>

using namespace std;

// NguEn HuY    HoAng AN
// -> annhh@gmail.com 

int main() {
    string s;
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }

    vector<string> v;
    stringstream ss(s);

    string temp;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    cout << v.back();   // In ra ten

    // in ra chu cai dau cua ho, dem
    for (int i = 0; i < v.size() - 1; i++) {
        cout << v[i][0];
    }
    
    cout << "@gmail.com" << endl;
}
#include <bits/stdc++.h>

using namespace std;

// NguEn HuY    HoAng AN
// -> Nguyen Huy Hoang, AN

void upperFirst(string &s) {
    s[0] = toupper(s[0]);
}

void upperLastString(string &s) {
    for (int i = 0; i < s.size(); i++) {
        s[i] = toupper(s[i]);
    }
}

int main() {
    int n;  cin >> n;
    cin.ignore();
    map<string, int> mp;

    while (n--){
        string s;
        getline(cin, s);
        vector<string> v;
        stringstream ss(s);

        string temp;
        string res = "";

        while (ss >> temp) {
            v.push_back(temp);
        }

        for (int i = 0; i < v.size() - 1; i++) {
            upperFirst(v[i]);
            cout << v[i];
            if (i == v.size() - 2)
                cout << ", ";
            else  
                cout << " ";
        }
        upperLastString(v[v.size() - 1]);
        cout << v[v.size() - 1] << endl;
    }
}
#include <bits/stdc++.h>

using namespace std;

// input: python    java    C++   php
// output: 4

int main() {
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;
    int cnt = 0;
    vector<string> v;
    
    while (ss >> word) {
        cnt++;
        v.push_back(word);
    }

    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl << cnt;
}
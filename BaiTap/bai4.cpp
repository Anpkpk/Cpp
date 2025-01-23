// Tìm số xuất hiện nhiều nhất trong mảng

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<long long, int> mp;
    for (int i = 0; i < n; i++){
        long long x; cin >> x;
        mp[x]++;
    } 
    long long res, fre = INT_MIN;
    for (auto it : mp){
        if (it.second > fre){
            fre = it.second;
            res = it.first;
        }
    }
    cout << res << " " << fre << endl;
}
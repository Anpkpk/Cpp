// Cho 2 mảng số nguyên hãy đếm các phần tử thuộc mảng thứ nhất mà không thuộc mảng thứu hai

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int arr1[n];
    set<int> arr2;
    for (int i = 0; i < n; i++) cin >> arr1[i];

    for (int i = 0; i < m; i++){
        int x; cin >> x;
        arr2.insert(x);
    }

    int cnt = 0;
    bool ok = false;
    for (int i = 0; i < n; i++){
        if (arr2.count(arr1[i]) == 0){
            cout << arr1[i] << " ";
            ok = true;
        }
    }
    if (!ok) cout << "Not Found\n";
    else cout << endl;
}
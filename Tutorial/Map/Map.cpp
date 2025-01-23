#include <bits/stdc++.h>
#include <map>

using namespace std;

int main(){
    // Lưu các cặp key - value. Các key là các giá trị riêng biệt, thứ tự tăng dần.
    // Khai báo:
    // (key, value)
    map<int, int> mp;

    // Thêm phần tử vào trong map:
    mp[100] = 200;  // (100, 200)
    mp[200] = 300;  // (200, 300)

    mp.insert({300, 100});

    // Độ dài của map:
    mp.size();

    // Duyệt các phần tử trong map
    // Mỗi phần tử trong map là một cặp pair => dùng pair trong for each
    for (pair<int, int> x : mp){
        cout << x.first << " " << x.second << endl;
    }
    for (auto x : mp){
        cout << x.first << " " << x.second << endl;
    }
    // Dùng interator:
    for (map<int, int>::interator it = mp.begin(); it != mp.end(); ++it){
        cout << (*it).fist << " " << (*it).second << endl;
    }

    //Tìm kiếm key trong map: (không tìm kiếm được value)
    // count, find
    if (mp.count(100) != 0){        // if (mp.find(100) != mp.end());
        cout << "Found" << endl;
    }
    else 
        cout << "Not Found" << endl;

    // Xóa phần tử theo key
    mp.erase(100);

    // Đếm số lượng phần tử xuất hiện tỏng mảng, sau đó in ra kèm theo tần suât.
    map<int, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){    // in theo thứ tự được xắp xếp be -> lớn
        int x;
        cin >> x;
        mp[x]++;
    }
    for (auto x : mp){
        cout << x.first << " " << x.second << endl;
    }

    // in theo thứ tự xuất hiện:
    int a[100];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < n; i++){
        if (mp[a[i]] != 0){
            cout << a[i] << mp[a[i]] << endl;
            mp[a[i]] = 0;
        }
    }

    // Xâu xuất hiện nhiều nhất:
    map<string, int> mstr;
    int n; 
    cin >> n;
    for (int i = 0; i < n; i++){
       string s; cin >> s;
       mstr[s]++;
    } 
    int max = 0;
    string res;
    for (auto it : mstr){
        if (it.second > max){
            max = it.second;
            res = it.first;
        }
    }
    cout << res << " " << max << endl;

// Multimap: Cho phép 1 key có nhiều giá trị
    // Khai báo:
    multimap<int, int> mp;
    // Không dùng toán tử gán =
    // Dùng insert để thêm phần tử vào multimap
    mp.insert({100, 200});
    mp.insert({200, 300});
    mp.insert({100, 300});

// Unoder Map: Không sắp xếp sẵn:
}
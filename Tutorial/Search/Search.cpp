#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


// Linear Search O(n)
// Duyệt tất cả các phần tử trong mảng O(n)
bool ls(int a[], int n, int x){
    for (int i = 0; i < n; i++){
        if (a[i] == x) return true;
    }
    return false;
}

// Binary Search Olog(n)
/*
    + Sorted;
    + Example:
        - x = 3;
        - a[6] = {1, 2, 3, 4, 5, 6};
        step 1: 
            l = 0, r = 5, middle = (l + r)/2;
            if (a[middle] < x) {
                l = middle + 1; r = r; middle = (l + r)/2;
            } 
            else if (a[middle] > x) {
                l = l; r = middle - 1; middle = (l + r)/2;
            }
            else if (a[middle] == x) {
                return;
            }
*/ 
bool bs(int a[], int n, int x){
    int l = 0, r = n - 1;
    while (l < r){
        int m = (l + r)/2;
        if (a[m] == x) return true;
        else if (a[m] < x) {
            l = m + 1;
        }
        else if (a[m] > x) {
            r = m - 1;
        }
    }
    return false;
}

// Find first position in array by Binary Search
int first_pos(int a[], int n, int x){
    int res = -1;
    int l = 0, r = n - 1;
    while (l <= r){
        int m = (l + r)/2;
        if (a[m] == x){
            res = m;
            r = m - 1; // Tiếp tục tìm bên trái.
        }
        else if (a[m] < x) {
            l = m + 1;
        }
        else {
            r = m - 1;
        }
    }
    return res;
}

// Function lower_bound(interator1, interator2, key) : search in [interator1, interator2)
//          => index of first element >= key;
// Neu tat ca deu nho hon key => tra ve interator2;
/*
    + sorted;
    + a[6] = {1, 2, 3, 4, 5, 6}
    auto it = lower_bound(a, a + 6, x);
    cout << *it;        gia tri
    cout << it - a;     chi so
*/

int main(){
    
    int a[6] = {1, 2, 3, 4, 5, 6};
    int x = 6;

    cout << ls(a, 6, x) << endl;
    cout << bs(a, 6, x) << endl;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

// sort() : khong dam bao vi tri tuong doi 
// stable_sort: bubble sort, insertion sort,... : dam bao vi tri tuong doi

bool cmp(int a, int b){
    // sap xep de a dung truoc b => return true;
    // b dung truoc a => return false;
}

int main(){
    a[6] = {8, 6, 9, 3, 5, 6};
    sort(a, a + 6);


    // Sap xep tang giam:
    sort(a, a + n, greater<int>()); 

    // Sap xep theo tieu chi:
    sort(a, a + n, cmp);

}
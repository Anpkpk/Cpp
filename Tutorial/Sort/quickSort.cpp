#include <bits/stdc++.h>

using namespace std;


// Phân hoạch theo Lomuto 
int partition(int a[], int l, int r) {
    int i = l - 1;      // First index of i
    int p = a[r];     // Pivot is the last element.
    for (int j = l; j < r; j++) {
        if (a[j] <= p) {
            ++i;
            swap(a[j], a[i]);
        }
    }
    ++i;    
    swap(a[i], a[r]);      // Move the pivot to center: left <= pivot && right >= pivot
    return i;           // Return index of pivot
}

// Phân hoạch Hoare
int partition2(int a[], int l, int r) {
    int p = a[l];
    int i = l - 1, j = r + 1;
    while (1) {
        do{
            i++;
        }
        while (a[i] < p);
        do {
            j--;
        }
        while (a[j] > p);
        if (i < j) swap(a[i], a[j]);
        else return j;
    }
}

void quickSort(int a[], int l, int r){  
    if (l >= r) return;
    int p = partition(a, l, r);
    quickSort(a, l, p - 1);     // với Hoare: quickSort(a, l, p);
    quickSort(a, p + 1, r);
}

int main(){
    int a[] = {5, 6, 2, 4, 2, 1};
    quickSort(a, 0, 5);
    for (auto x : a) {
        cout << x << " ";
    }
}
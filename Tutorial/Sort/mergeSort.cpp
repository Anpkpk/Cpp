#include <bits/stdc++.h>

using namespace std;

void merge(int a[], int l ,int m, int r) {
    vector<int> leftArray = (a + l, a + m + 1);
    vector<int> rightArray = (a + m + 1, a + r + 1);

    int i = 0, j = 0;
    while (i <= leftArray.size() && j <= rightArray.size()) 
    {
        if (leftArray[i] < rightArray[j]) {
            a[l] = leftArray[i];
            i++;
            l++;
        }
        else {
            a[l] = rightArray[j];
            j++;
            l++;
        }
    }

    while (i <= leftArray.size()) {
        a[l] = leftArray[i];
        i++; l++;
    }

    while (j < rightArray.size()) {
        a[l] = rightArray[i];
        j++; l++;
    }
}

void mergeSort(int a[], int l, int r) {
    if (l >= r) return;
    int m = (l + r) / 2;

    mergeSort(a, l, m);
    mergeSort(a, m + 1, r);
    merge(a, l, m, r);
}

int main() {}
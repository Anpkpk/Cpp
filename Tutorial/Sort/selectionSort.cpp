#include <bits/stdc++.h>

using namespace std;

void selectionSort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minPos = i;
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[minPos]) {
                minPos = j;
            }
        }
        swap(a[i], a[minPos]);
    }
}

int main() {

}
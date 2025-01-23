#pragma once
#include <iostream>

using namespace std;

void show() {
    cout << "----------------------------------\n";
    cout << "1. Nhap thong tin\n";
    cout << "2. Hien thi thong tin\n";
    cout << "3. Sap xep\n";
    cout << "4. Thoat!\n";
    cout << "----------------------------------\n";
}

void printLine() {
    cout << setfill('-');
        cout << setw(40) << "-" << endl;
        cout << setfill(' ');
}

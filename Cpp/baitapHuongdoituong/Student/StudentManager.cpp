#include <bits/stdc++.h>
#include "Student.cpp"
#include "Functions.cpp"

using namespace std;

void sortName(vector<Student> &st, int n);
void sortAge(vector<Student> &st, int n);
void sortGpa(vector<Student> &st, int n);
void method(vector<Student> &st, int choice, int &n);

int main(){
    int choice, n;
    vector<Student> st;
    do {
        show();
        cin >> choice;
        method(st, choice, n);
    }
    while (1 == 1);
    
}

void sortName(vector<Student> &st, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (st[i].getName() > st[j].getName()) {
                swap(st[i], st[j]);
            }
        }
    }
}

void sortGpa(vector<Student> &st, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (st[i].getScore() < st[j].getScore()) {
                swap(st[i], st[j]);
            }
        }
    }
}

void sortAge(vector<Student> &st, int n) {
   for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (st[i].getYear() > st[j].getYear()) {
                swap(st[i], st[j]);
            }
        }
    }
}

void method(vector<Student> &st, int choice, int &n) {
    string Name;
    int Age;
    double Gpa;
 
    switch (choice)
    {
    case 1:
        system("cls");
        cout << "Nhap so sinh vien: "; 
        cin >> n;
       
        for (int i = 0; i < n; i++) {
            printLine();

            cout << "Nhap ten sinh vien " << i + 1 << ": ";
            cin.ignore(1);
            getline(cin, Name); 

            cout << "Nhap tuoi sinh vien " << i + 1 << ": ";
            cin >> Age;

            cout << "Nhap GPA sinh vien " << i + 1 << ": ";
            cin >> Gpa;
            Student s(Age, Name, Gpa);
            st.push_back(s);
        }
        break;
    
    case 2:
        system("cls");
        printLine();

        cout << setw(25) << left << "Name";
        cout << setw(5) << left << "Age";
        cout << setw(5) << right << "Gpa" << endl;
        for (int i = 0; i < st.size(); i++) {
            cout << setw(25) << left << st[i].getName();
            cout << setw(5) << left << st[i].getYear();
            cout << setw(5) << right << st[i].getScore() << endl;
        }
        break;
    case 3:
        system("cls");
        printLine();

        cout << "1. Sap xep theo ten\n";
        cout << "2. Sap xep theo tuoi\n";
        cout << "3. Sap xep theo Gpa\n";
        cout << "4. Thoat!\n";

        int subChoice; cin >> subChoice;

        switch (subChoice)
        {
        case 1:
            sortName(st, n);
            break;
        
        case 2:
            sortAge(st, n);
            break;
        
        case 3:
            sortGpa(st, n);
            break;
        
        case 4:
            exit(0);
            break;
        
        default:
            break;
        }
        break;

    case 4:
        exit(0);
        break;

    default:
        break;
    }
}
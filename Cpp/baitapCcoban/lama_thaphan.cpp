#include <iostream>
#include <string>

using namespace std;

// I   V   X   L   C   D   M
// 1   5   10  50  100 500 1000
//Neu so dau nho hon so sau thi lay so sau tru di, lon hon thi cong
//so bang tong cua cac so
int length(string s){
    int i = 0, count = 0;
    while (s[i] != '\0'){
        count++;
        i++;
    }
    return count;
}
int solama(char str){
    switch (str)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        break;
    }
}
int main(){
    int n = 0;
    string lama;
    cin >> lama;
    int len = length(lama);
    int sothapphan[100];
    for (int i = 0; i <= len; i++){
        sothapphan[i] = solama(lama[i]);
    }
     n = sothapphan[len - 1];
    for (int i = len - 1; i > 0; i--){
        if (sothapphan[i] > sothapphan[i - 1]){
            n -= sothapphan[i - 1];
        }
        else if (sothapphan[i] == sothapphan[i - 1] || sothapphan[i] < sothapphan[i - 1]){
            n += sothapphan[i - 1];
        }
    }
    cout << n;
}
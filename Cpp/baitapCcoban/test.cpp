#include <iostream>
using namespace std;

int main(){
	int a = 10;
	int *pt1 = &a;
	int **pt2 = &pt1;
	int ***pt3 = &pt2;
	cout << **pt2 << endl;
	cout << pt1;
}
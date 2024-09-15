#include <bits/stdc++.h>
using namespace std;

int main() {
	int a = 9;
	int &b = a;   // second name of a and it stores the same address and same value of a so b is same as like a
	cout << a << " " << b << endl;
	cout << &a << " " << &b << endl;
	return 0;
}

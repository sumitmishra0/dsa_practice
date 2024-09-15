#include <bits/stdc++.h>
using namespace std;

// Pass by value and Pass by Reference

int main() {
	
	int a;
	cin >> a;
	int *ptr = &a;  // ptr is a pointer of type int
	cout << ptr << endl; /// printing the address of a
	cout << *ptr << endl; // printing the value of a that is preasent at that address
	cout << sizeof(a) << endl;
	cout << sizeof(ptr) << endl;
	int **ptrPtr = &ptr;
	cout << ptrPtr << endl; ///  /// printing the address of ptr
	cout << *ptrPtr << endl; // printing the value of ptr that is preasent at that address
	cout << sizeof(ptrPtr) << endl;
	cout << **ptrPtr << endl; // printing the value of a using ** 


	
	return 0;
}

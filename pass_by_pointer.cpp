#include <bits/stdc++.h>
using namespace std;

int func(int *a,int *b){
	(*a)++;
	return (*a)+ (*b);
}

int main() {
	int x = 9, y = 18;
	cout << func(&x,&y) << endl;
	cout << "x : " << x << endl;  // value of x will be update to 10 because we have passed a reference of x in func
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int sum (int a, int b = 10){
	int c = a + b;
	return c;
}
int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;
	int ans = sum(a);
	cout << ans << endl;
	return 0;
}

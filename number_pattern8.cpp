#include <bits/stdc++.h>
using namespace std;

// STDIN
// 5
// STDOUT
// 1
// 12
// 123
// 1234
// 12345
// 1234
// 123
// 12
// 1

int main() {
	// your code goes here
	int n = 5;
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cout << j;
		}
		cout << endl;
	}
	for(int i = 1; i < n; i++){
		for(int j = 1; j <= n-i; j++){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}

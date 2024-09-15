#include <bits/stdc++.h>
using namespace std;

// 12345
// 2345
// 345
// 45
// 5

int main() {
	// your code goes here
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = i; j <= n; j++){
			cout << j;
		}
		cout << "\n";
	}
	return 0;
}

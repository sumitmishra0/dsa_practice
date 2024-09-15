#include <bits/stdc++.h>
using namespace std;

// 5
// 44
// 333
// 2222
// 11111

int main() {
	// your code goes here
	int n;
	cin >> n;
	for(int i = n; i >= 1; i--){
		for(int j = n-i+1; j >= 1; j--){
			cout << i;
		}
		cout << endl;
	}
	return 0;
}

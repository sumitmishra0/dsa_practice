#include <bits/stdc++.h>
using namespace std;

// 1
// 21
// 321
// 4321
// 54321

int main() {
	// your code goes here
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = i; j >= 1; j--){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}

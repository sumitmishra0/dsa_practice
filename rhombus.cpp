#include <bits/stdc++.h>
using namespace std;

//     *****
//    *   *
//   *   *
//  *   *
// *****

int main() {
	// your code goes here
	int n;
	cin >> n;
	for(int i = 1; i <=n; i++){
		for(int j = 1; j <= n-i; j++){
			cout << " ";
		}
		cout << "*";
		for(int j = 1; j <= n -2; j++){
			if(i == 1 || i == n){
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << "*";
		cout << endl;
	}
	return 0;
}

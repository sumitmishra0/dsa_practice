#include <bits/stdc++.h>
using namespace std;

// 1       1
//  2     2 
//   3   3  
//    4 4   
//     5    
//    4 4   
//   3   3  
//  2     2 
// 1       1

int main() {
	// your code goes here

	int n;
	cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= (2*n) - 1; j++){
			if(i == j || i == 2*n -j){
				cout << i;
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	for(int i = 1; i <= n-1; i++){
		for(int j = 1; j <= 2*n -1; j++){
			if(n-i == j || n+i == j){
				cout << n -i;
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

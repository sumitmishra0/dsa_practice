#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;

	int stars = 1; 
	int spaces = n-1;

	for(int i = 1; i <= 2*n-1; i++){
		for(int j= 1; j<= spaces; j++){
			cout << " ";
		}
		for(int j = 1; j <= stars; j++){
			cout << "*";
		}
		cout << endl;
		if(i < n){
			spaces--;
			stars+=2;
		} else {
			spaces++;
			stars-=2;
		}
	}
	return 0;
}

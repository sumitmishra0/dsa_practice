#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
 for(int i = 2; i < n; i++){
	if(n % i == 0){
		return false;
	}
 }
 return true;
}

int main() {
	// your code goes here
	int startRange, endRange;
	cin >> startRange >> endRange;
	
	for(int i = startRange; i <= endRange; i++){
		if(isPrime(i)) {
			cout << i << " ";
		}
	}
	return 0;
}

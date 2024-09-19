#include <bits/stdc++.h>
using namespace std;

bool isSorted(int *ar, int n){
	for(int i = 0; i < n -1; i++){
		if(ar[i+1] < ar[i]) return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int ar[n];
	
	for(int i = 0; i < n; i++){
		cin >> ar[i];
	}
	cout << isSorted(ar,n) << endl;
	return 0;
}

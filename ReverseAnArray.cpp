#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ar[n];
	for(int i = 0; i < n; i++) {
		cin>>ar[i];
	}
	// for(int i = 0; i < n/2; i++) {
	// 	int temp = ar[i];
	// 	ar[i] = ar[n-i-1];
	// 	ar[n-i-1] = temp;
	// }
	int s = 0, e = n - 1;
	while(s < e) {
		// int temp = ar[s];
		// ar[s] = ar[e];
		// ar[e] = temp;
		swap(ar[s], ar[e]);
		s++;
		e--;
	}
	for(int i = 0; i < n; i++) {
		cout<<ar[i]<<" ";
	}
	return 0;
}

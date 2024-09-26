#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ar[n];

	for(int i = 0; i < n; i++) {
		cin>>ar[i];
	}

	int min_ele = INT_MAX;

	for(int i = 0; i < n; i++) {
		if(ar[i] < min_ele) {
			min_ele = ar[i];
		}
	}
	int sec_min_ele = INT_MAX;

	for(int i = 0; i < n; i++) {
		if(ar[i] < sec_min_ele && ar[i] != min_ele) {
			sec_min_ele = ar[i];
		}
	}

	cout<<min_ele<<" "<<sec_min_ele;
	return 0;
}

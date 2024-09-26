#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int ar[n];

	for(int i = 0; i < n; i++) {
		cin>>ar[i];
	}
	double ans;
	if(n % 2 == 0) {
		ans = float(ar[n/2] + ar[n/2 - 1]) / 2.0;
	} else {
		ans = ar[n/2];
	}
	cout<<ans;
	return 0;
}

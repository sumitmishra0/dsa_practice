#include <bits/stdc++.h>
using namespace std;

int main() {
	unordered_map<int,int> mp;
	// mp[6] = 10000;
	// mp[5] = 234234;
	// mp[4] = 4343;
	// mp[1000232] = 43;
	// mp[32] = 64;
	// mp[5] = 75;
	// //cout<<mp[5];
	
	// mp[9]++;
	// mp[9]++;
	// cout<<mp[9];
	// unordered_map<char,int> mp1;

	// mp1['A'] = 4324;
	// mp1['&'] = 32;
	// //cout<<mp1['&'];
	int n;
	cin>>n;
	int ar[n];

	for(int i = 0; i < n; i++) {
		cin>>ar[i];
	}

	for(int i = 0; i < n; i++) {
		mp[ar[i]]++;
	}
	for(int i = 0; i < n; i++) {
		cout<<ar[i]<<" "<<mp[ar[i]]<<endl;
	}

	return 0;
}

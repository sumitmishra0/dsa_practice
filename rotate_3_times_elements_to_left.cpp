#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int times;
	cin >> times;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
// Brute force approach 
	for(int i = 0; i <times; i++){
		int temp = arr[0];
		for(int j = 1; j < n; j++){
			arr[j-1] = arr[j];
		}
		arr[n-1] = temp;
		// cout << arr[i] << " " << endl;
	}

	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	}
	return 0;
}

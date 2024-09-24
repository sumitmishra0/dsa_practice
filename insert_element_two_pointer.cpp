#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	int value;
	cin >> value;
	int position;
	cin >> position;
    
	cout << "n :" << n << "value : " << value << "posit : " << position << endl;
	int answer[n+1];

	int i = 0; 
	int j = 0;
	while(i < n +1){
		if(i == position - 1){
			answer[i] = value;
		} else {
			answer[i] = arr[j];
			j++;
		}
		i++;
	}

	i = 0;
	while(i < n +1){
		cout << answer[i] << " ";
		i++;
	}
	return 0;
}

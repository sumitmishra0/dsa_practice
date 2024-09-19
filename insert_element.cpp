#include <bits/stdc++.h>
using namespace std;

void insertElement(int n, int ele, int pos, int arr[]){
  for(int i = n; i >= 0; i--){
	if(i > pos){
		arr[i] = arr[i-1];
	} else if(i == pos){
		arr[i] = ele;
		break;
	}
  }

  for(int i = 0; i < n+1; i++){
	cout << arr[i] << " ";
  }
//   cout << arr[n] << endl;
}

int main() {
	int n, ele, pos;
	cin >> n >> ele >> pos; 
	int arr[n+1];
	for(int i =0; i < n; i++){
		cin >> arr[i];
	}
	insertElement(n, ele, pos, arr);
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[10]) {
 for(int i = 0; i < 10 ; i++){
	cout << arr[i] << " ";
 }
}

int sumArr(int arr[10]){
	// here arr[10] is pass by value but the address of pointer which is storing the information of arr[10] is copied
	// so. if we chnage the value of arr in this function it will also reflect in the main arr.
	int sum = 0;
	for(int i = 0; i < 10; i++){
		sum += arr[i];
	}
	return sum;
}

bool findEle(int ele, int *arr){
	// *arr means we are passing value using pointer
	for(int i = 0; i < 10; i++){
		if(arr[i] == ele){
			return true;
		}
	}
	return false;
}

bool isArraySorted(int *brr){
	for(int i = 1; i < 10; i++){
		if(brr[i+1] < brr[i]) {
			return false;
		}
	}
	return true;
}

int findMinElement(int *arr){
	int min_ele = arr[0];

	for(int i = 1; i < 10 ; i++){
		if(arr[i] < min_ele){
			min_ele = arr[i];
		}
	}
	return min_ele;
}

int findMaxElement(int *arr){
	int max_ele = arr[0];

	for(int i = 1; i < 10 ; i++){
		if(arr[i] > max_ele){
			max_ele = arr[i];
		}
	}
	return max_ele;
}

int main() {
	int arr[10];
	for(int i = 0; i < 10; i++){
		cin >> arr[i];
	}
	printArr(arr);
	cout << endl;
	cout << "Sum of array values : " <<  sumArr(arr) << endl;
	cout << "Is it true? " << findEle(80 , arr) << endl;
	cout << "Is array sorted : " << isArraySorted(arr) << endl;
	cout << "Min Element : " << findMinElement(arr) << endl;
	return 0;
}

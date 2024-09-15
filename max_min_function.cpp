#include <bits/stdc++.h>
using namespace std;

int findMax(int firstNumber, int secondNumber){
  int max = 0;
  if(firstNumber >= secondNumber){
    max = firstNumber;
  } else {
    max = secondNumber;
  }
  return max;
}

int findMin(int firstNumber, int secondNumber){
  int min = 0;
  if(firstNumber <= secondNumber){
    min = firstNumber;
  } else {
    min = secondNumber;
  }
  return min;
}

int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;
	cout << "minimum : " << findMin(a,b) << endl;
	cout << "maximum : " << findMax(a,b) << endl;
	return 0;
}

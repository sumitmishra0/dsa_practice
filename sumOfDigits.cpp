#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
		int sum = 0;
        while(n > 0){
			int lastDigit = n % 10;
			sum += lastDigit;
			n /= 10;
		}
		return sum;
	}
int main() {
	// your code goes here
    int n;
	cin >> n;
	int sum = sumOfDigits(n);
	cout << sum;
	return 0;
}

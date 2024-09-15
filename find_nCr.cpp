#include <bits/stdc++.h>
using namespace std;

// nCr = n!/ r!(n-r)!

long findFactorial(int n){
	long fact = 1;
	while(n > 1){
      fact *= n;
	  n -= 1;
	}
	return fact;
}

int findNCR(int n, int r){
  long nFact = findFactorial(n);
  long rFact = findFactorial(r);
  long n_rFact = findFactorial(n-r);

//   long nCr = nFact / (rFact * n_rFact);  //. Why we don't use it?
// Because if we multiply (rFact * n_rFact) this then it will become a very big number which can't be stored in long or long long type variable
long nCr = nFact / rFact;
  nCr /= n_rFact;
  cout << nCr;
  return 0;
}

int main() {
	// your code goes here
    int n, r;
	cin >> n >> r;
	findNCR(n, r);
	return 0;
}

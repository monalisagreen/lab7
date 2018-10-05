#include <iostream>
using namespace std;

int getFactorial(int n);

	int main() {
	int n;
	cout<< " Enter a number";
	cin>>n;

	cout<<" Factorial of "<< n << " = " << getFactorial(n);
	return 0;
}

	// recursive function to find the factorial of a number
	int getFactorial(int n){
	// Recursion Termination condition
	if (n<=1){
	return 1;
	}
	return n * getFactorial(n - 1);
	}

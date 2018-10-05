#include <iostream>
using namespace std;
int getsum(int n);
int main(){
	int n;
	cout<<" Enter the integer ";
	cin>>n;
	
	cout<< " sum of numbers from 1 to " << n <<" = "<<getsum(n);
	return 0;
	}

	int getsum(int n) {
	if (n >= 1)
	return n + getsum(n-1);
	else
	     return 0;
}

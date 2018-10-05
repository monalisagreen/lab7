#include <iostream>
#include <math.h>
using namespace std;

	int reversenumber(int num);
	int main ()
	{
	int num,reverse;
	cout<<"Enter any number";
	cin>>num;
	reverse = reversenumber(num);
	cout<<"reverse of number"<<num<<"is"<<reverse;
	return 0;
	}

	int reversenumber(int num){
	int digit = (int) log10(num);
	if (num == 0)
	return 0;
	return((num%10 * pow(10,digit)) + reversenumber(num/10));
}

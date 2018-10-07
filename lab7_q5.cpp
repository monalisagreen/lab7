// find whether a number is a palidrome or not using recursion.
#include <iostream>
using namespace std;
	void rev(int);
	int main(){
	int n;
	cout<<"Enter a number";
	cin>>n;
	rev(n);
}
	void rev(int n)
{
	int n1, d, rn=0;
	n1=n;
	while(n>0)
{
	d=n%10;
	rn=(rn*10)+d;
	n/= 10;
}
	if(n1==rn)
	cout<<n1<<"is a palidrome no,";
	else
	cout<<n1<<"is not a palidrome no,";
}

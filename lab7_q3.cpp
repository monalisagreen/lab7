#include <iostream>
using namespace std;
//function declaration
	void printevenodd(int cur, int limit);
	
	int main(){
	int lowerLimit, upperLimit;
	cout<<"Enter lower limit";
	cin>>lowerLimit;
	cout<<"Enter upper limit";
	cin>>upperLimit;

	cout<<"even/odd numbers from"<<lowerLimit<<"to"<<upperLimit<<endl;
	
	printevenodd(lowerLimit, upperLimit);
	return 0;
}
	//recursive function to print even or odd numbers in a given range.
	void printevenodd(int cur, int limit)
	{
	   if (cur > limit)
	    return;
	  cout<<cur<<endl;
	
	printevenodd(cur + 2, limit);
}
	

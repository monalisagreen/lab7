#include <iostream>
using namespace std;

int getGCD(int a,int b);

	int main(){
	int num1 , num2 , GCD;
	
	cout<<"Enter two numbers";
	cin>>num1>>num2;
    
	GCD = getGCD(num1 ,num2);
cout<< "GCD OF"<<num1<<" and "<<num2<<"is"<< GCD;
return 0;
}

	//function to calculate greatest common divisor of
	
	int getGCD(int a,int b){
        if (b == 0){
	return a;
	}
	else {
	return getGCD(b,a % b);
	}
}



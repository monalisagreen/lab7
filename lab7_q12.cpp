#include <iostream>
using namespace std;
int getLCM(int a,int b);

	int main(){
	int num1 , num2 , LCM;
	
	cout<<"Enter two numbers";
	cin>>num1>>num2;
    
	LCM = getLCM(num1 ,num2);
cout<< "LCM OF"<<num1<<" and "<<num2<<"is"<< LCM;
return 0;
}

	//function to calculate lowest common divisor of
	
	int getLCM(int a,int b){
        if (b == 0){
	return a;
	}
	else {
	return getLCM(b,a % b);
	}
}



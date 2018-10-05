#include <iostream>
using namespace std;

int getPower(int base,int exponent);

int main(){
int base, exponent, counter , result = 1 ;
cout<< "Enter base and exponent";
cin>>base>>exponent;

result = getPower(base,exponent);
cout<<base<<" ^ "<<exponent<<" = "<< result;
return 0;
}

//function to calculate base^exponent using recursion
int getPower(int base , int exponent){
if (exponent == 0){
return 1;
}
return base * getPower(base, exponent - 1);
}

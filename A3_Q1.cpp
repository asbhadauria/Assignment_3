#include <iostream>
using namespace std;
int main(){
	int num1,num2;
	cout<<"Enter 2 Integers: ";
	cin>>num1>>num2;
	if(num1>num2)
		cout<<num1<<" is greater than "<<num2;
	else if(num2>num1)
		cout<<num2<<" is greater than "<<num1; 
	else
		cout<<"The entered numbers are equal";
}

#include <iostream>
using namespace std;

int main() {
	int num1,num2,num3,max;
	cout<<"Enter 3 numbers:";
	cin>>num1>>num2>>num3;
	if(num1>num2)
		max=num1;	
	else
		max=num2;
	if(num3>max)
		max=num3;		
	cout<<"Laregst of the 3 entered numbers:"<<max;
	return 0;
}

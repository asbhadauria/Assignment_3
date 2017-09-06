#include <iostream>
using namespace std;

int main() {
	int num,sum;
	cout<<"Enter your number";
	cin>>num;
	while(num>0)
		{
			sum+=(num%10);
			num/=10;
		}
	cout<<"Sum of Digits:"<<sum;	
	return 0;
}
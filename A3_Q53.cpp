#include <iostream>
using namespace std;

int main() {
	int num,sum_fact;
	cout<<"Enter your Number:";
	cin>>num;
	for(int i=1;i<num;i++)
		if(num%i==0)
			sum_fact+=i;
	if(sum_fact==num)
		cout<<"Perfect Number";
	else
		cout<<"Not a Perfect Number";	
	return 0;
}
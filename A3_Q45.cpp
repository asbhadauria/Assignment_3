#include <iostream>
using namespace std;

int main() {
	int num,factors;
	cout<<"Enter your Number:"<<endl;
	cin>>num;
	for(int i=1;i<=num;i++)
		if(num%i==0)
			factors++;
	if(factors==2)
		cout<<"Prime Number";
	else
		cout<<"Not a Prime Number";
	return 0;
}
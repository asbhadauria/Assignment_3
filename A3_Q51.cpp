#include <iostream>
using namespace std;

int main() {
	int num,dummy,rem,c_num;
	cout<<"Enter your Number:";
	cin>>num;dummy=num;
	while(num>0){
		rem=num%10;
		c_num=c_num+(rem*rem*rem);
		num/=10;
	}
	if(c_num==dummy)
		cout<<"Armstrong Number";
	else
		cout<<"Not an Armstrong Number";
	return 0;
}
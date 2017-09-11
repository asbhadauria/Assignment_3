#include <iostream>
using namespace std;

int main() {
	int c_num,num,rem;
	cout<<"Enter your Binary Number:";
	cin>>num;
	while(num>0){
		rem=num%10;
		c_num=c_num*10+rem;
		num/=10;
	}
	while(c_num>0){
		rem=c_num%10;
		if(rem==0)
			cout<<"1";
		else if(rem==1)
			cout<<"0";
		c_num/=10;
	}
	return 0;
	
	
}
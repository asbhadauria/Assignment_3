#include <iostream>
using namespace std;

int from_decimal(int d_o){
	int rem,r_num1,c=1;
	while(d_o>0){
		rem=d_o%8;
		r_num1=(rem*c)+r_num1;
		d_o/=8;
		c*=10;
	}
	return r_num1;
}
int main() {
	int rep_1,rep_2,rep_3;
	cout<<"Enter your Decimal representation:";
	cin>>rep_1;
	rep_3=from_decimal(rep_1);
	cout<<"Equivalent Octal Representation:"<<(rep_3);
	return 0;
}



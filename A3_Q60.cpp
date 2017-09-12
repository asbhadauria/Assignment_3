#include <iostream>
#include <cmath>
using namespace std;

int to_decimal(int b_d){
	int rem,r_num,c=0;
	while(b_d>0){
		rem=b_d%10;
		r_num=r_num+(rem*pow(2,c));
		c++;
		b_d/=10;
	}
	return r_num;
}
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
	cout<<"Enter your Binary representation:";
	cin>>rep_1;
	rep_2=to_decimal(rep_1);
	rep_3=from_decimal(rep_2);
	cout<<"Equivalent Octal Representation:"<<(rep_3-rep_2);
	return 0;
}

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
    int main() {
	int rep_1,rep_2,rep_3;
	cout<<"Enter your Binary representation:";
	cin>>rep_1;
	rep_2=to_decimal(rep_1);
	cout<<"Equivalent Decimal Representation:"<<(rep_2);
	return 0;
}
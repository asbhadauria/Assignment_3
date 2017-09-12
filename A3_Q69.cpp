#include <iostream>
using namespace std;
int from_decimal(int d_b){
	int rem,r_num1,c=1;
	while(d_b>0){
		rem=d_b%2;
		r_num1=(rem*c)+r_num1;
		d_b/=2;
		c*=10;
	}cout<<r_num1;
	return r_num1;
}
int main() {
	int rep=from_decimal(330);
	return 0;
}
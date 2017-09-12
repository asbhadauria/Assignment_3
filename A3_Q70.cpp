#include <iostream>
#include <cmath>
#include <string>
using namespace std;
 
long hex_dec (string str){
	char ch;long r_num,c=1,rem;
	for(int i=(str.length()-1);i>=0;i--){
		rem=str[i];
		if(rem>47 && rem<58)
			rem=rem-48;
		else if(rem>64 && rem<91)
			rem=rem-55;
		else if(rem>96 && rem<123)	
			rem=rem-97;
		r_num=rem*c+r_num;	
		c*=16;
	}
	return r_num;
}
long from_decimal(long d_b){
	long rem,r_num1=0,c=1;
	while(d_b>0){
		rem=d_b%8;
		r_num1=(rem*c)+r_num1;
		d_b/=8;
		c*=10;
	}
	return r_num1;
}
int main() {
	string str;
	long rep_1,rep_2;
	cout<<"Enter your Hexadecimal representation:";
	cin>>str;
	cout<<str<<endl;
	rep_1=hex_dec(str);
	rep_2=from_decimal(rep_1);
	cout<<"Equivalent Octal representation:"<<rep_2;
	return 0;
}
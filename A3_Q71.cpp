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

int main() {
	string str;
	long rep_1,rep_2;
	cout<<"Enter your Hexadecimal representation:";
	cin>>str;
	cout<<str<<endl;
	rep_1=hex_dec(str);
	cout<<"Equivalent Decimal representation:"<<rep_1;
	return 0;
}
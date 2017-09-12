#include <iostream>
using namespace std;

string from_decimal(int d_hd){
	int rem;string str="";
	while(d_hd>0){
		rem=d_hd%16;
		if(rem<=9)
			str=to_string(rem)+str;
		else
			if(rem==10)
				str="A"+str;
			else if(rem==11)
				str="B"+str;
			else if(rem==12)
				str="C"+str;	
			else if(rem==13)
				str="D"+str;
			else if(rem==14)
				str="E"+str;
			else if(rem==15)
				str="F"+str;
		d_hd/=16;		
	}
	return str;
}
        int main() {
    	int rep_1;string rep_3;
    	cout<<"Enter your Decimal representation:";
    	cin>>rep_1;
    	rep_3=from_decimal(rep_1);
    	cout<<"Equivalent HexaDecimal Representation:"<<(rep_3);
    	return 0;
    }
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
    	int rep_1,rep_2;string rep_3;
    	cout<<"Enter your Binary representation:";
    	cin>>rep_1;
    	rep_2=to_decimal(rep_1);
    	rep_3=from_decimal(rep_2);
    	cout<<"Equivalent HexaDecimal Representation:"<<(rep_3);
    	return 0;
    }
    
    
    
    
    
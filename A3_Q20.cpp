    #include <iostream>
    using namespace std;
     
    int main() {
    	double bs,hra,da,gs,m5,total;float avg;
    	cout<<"Enter your Basic Salary:";
    	cin>>bs;
    	
    	if(bs<=10000){
    		hra=0.2*bs;
    		da=0.8*bs;
    		gs=bs+hra+da;
    		cout<<"Gross Salary:"<<gs;
    	}
    	else if(bs<=20000){
    		hra=0.25*bs;
    		da=0.9*bs;
    		gs=bs+hra+da;
    		cout<<"Gross Salary:"<<gs;
    	}
    	else if(bs>20000){
    		hra=0.2*bs;
    		da=0.95*bs;
    		gs=bs+hra+da;
    		cout<<"Gross Salary:"<<gs;
    }
    	return 0;
    }
    
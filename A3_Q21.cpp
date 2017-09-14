    #include <iostream>
    using namespace std;
     
    int main() {
    	double e_units,m2,m3,m4,m5,total;float avg;
    	cout<<"Enter number of units consumed:";
    	cin>>e_units;
    	if(e_units>=50)
    		total=0.5*e_units;
    	else if(e_units>=50 && e_units<=150)
    		total=(0.5*50)+(150-e_units)*0.75;
    	else if(e_units>=150 && e_units<=250)
    		total=(0.5*50)+(100*0.75)+(e_units-150)*1.20;
    	else if(e_units>=50 && e_units<=150)
    		total=(0.5*50)+(100*0.75)+(100)*1.20+(e_units-250)*1.50;
    	total+=0.2*total;
    	cout<<"Total amt. Payable:"<<total;
    	return 0;
    }


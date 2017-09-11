    #include <iostream>
    using namespace std;
     
    int main() {
    	int num,sum_fact;
    	cout<<"Enter your Number:";
    	cin>>num;
    	for(int j=1;j<=num;j++){
    	for(int i=1;i<j;i++)
    		if(j%i==0)
    			sum_fact+=i;
    	if(sum_fact==j)
    		cout<<j<<"\n";
    	sum_fact=0;	
    }
    	return 0;
    }


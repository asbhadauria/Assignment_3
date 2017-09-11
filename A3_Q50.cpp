    #include <iostream>
    using namespace std;
     
    int main() {
    	int num,factors,rem;
    	cout<<"Enter your number:"<<endl;
    	cin>>num;
    	cout<<"Prime Factors:"<<"\n";
    	for(int i=1;i<=num;i++){
    		if(num%i==0)
    		for(int j=1;j<=i;j++)
    			if(i%j==0)
    				factors++;
    		if(factors==2)
    			cout<<i<<endl;
    		factors=0;		
    	}	
    return 0;
    }


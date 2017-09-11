    #include <iostream>
    using namespace std;
     
    int main() {
    	int n,factors,sum;
    	cout<<"Enter the value of n:"<<endl;
    	cin>>n;
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=i;j++)
    			if(i%j==0)
    				factors++;
    		if(factors==2)
    			sum+=i;
    		factors=0;		
    	}
    cout<<"Sum:"<<sum;	
    	return 0;
    }


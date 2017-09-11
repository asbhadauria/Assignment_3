    #include <iostream>
    using namespace std;
     
    int main() {
    	int n,num,c_num,rem,fact=1,sum_fact;
    	cout<<"Enter your Number";
    	cin>>n;
    	for(int i=1;i<=n;i++){
    		num=i;
    		c_num=num;
    	while(num>0){
    		rem=num%10;
    			for(int j=1;j<=rem;j++){
    				fact*=j;
    			}
    		sum_fact+=fact;
    		fact=1;	
    		num/=10;
    	}
    	if(sum_fact==c_num)
    		cout<<i<<"\n";
    	sum_fact=0;	
    	}
    	return 0;
    }


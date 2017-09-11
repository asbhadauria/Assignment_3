    #include <iostream>
    using namespace std;
     
    int main() {
    	int n,num,dummy,rem,c_num;
    	cout<<"Enter your Number:";
    	cin>>n;
    	for(int i=1;i<=n;i++){
    	num=i;	
    	dummy=num;
    	while(num>0){
    		rem=num%10;
    		c_num=c_num+(rem*rem*rem);
    		num/=10;
    	}
    	if(c_num==dummy)
    		cout<<c_num<<"\n";
    	c_num=0;	
    	}	
    	return 0;
    

}
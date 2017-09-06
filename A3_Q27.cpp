    #include <iostream>
    using namespace std;
 
    int main() {
    	int n,c=0,sum=0;
		cout<<"Enter the number of terms:";
		cin>>n;
    	while(c<=n)
   		{
   				sum+=c;
    			c++;
   		}
    			cout<<"Sum:"<<sum;
    	return 0;
    }
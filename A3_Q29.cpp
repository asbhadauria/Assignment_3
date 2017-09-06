        #include <iostream>
        using namespace std;
     
        int main() {
        	int n,c=1,sum=0;
    		cout<<"Enter the terminating number:";
    		cin>>n;
        	while(c<=n)
       		{
       			sum+=c;
        			c+=2;
       		}
        			cout<<"Sum:"<<sum;
        	return 0;
        }


        #include <iostream>
        using namespace std;
 
        int main() {
        	int n,c=0;
    		cout<<"Enter the number:";
    		cin>>n;
        	while(n>0)
       		{
       			    n/=10;
        			c++;
       		}
        			cout<<"Number of Digits:"<<c;
        	return 0;
        }
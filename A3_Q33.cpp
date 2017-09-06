        #include <iostream>
        using namespace std;
 
        int main() {
        	int n,ld,fd;
    		cout<<"Enter the number:";
    		cin>>n;
    		ld=n%10;n/=10;
        	while(n>0)
		{
       				fd=n%10;
       				n/=10;
       		}
        	cout<<"Sum of first and last Digit:"<<(ld+fd)<<"\n";
        	return 0;
        }
        #include <iostream>
        using namespace std;
 
        int main() {
        	int n,pro=1,rem;
    		cout<<"Enter the number:";
    		cin>>n;
        	while(n>0)
			{
       				rem=n%10;
       				pro*=rem;
       				n/=10;
       		}
        	cout<<"Product of Digits:"<<(pro)<<"\n";
        	return 0;
        }
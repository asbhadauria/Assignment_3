        #include <iostream>
        #include <cmath>
        using namespace std;
 
        int main() {
        	int n,dummy,dummy1,dummy2,ld,fd,c=0;
    		cout<<"Enter the number:";
    		cin>>n;
    		dummy=n;
    		dummy2=n;
    		ld=n%10;n/=10;
        	while(n>0)
			{
       				fd=n%10;
       				n/=10;
       				c++;
       		}
       	dummy=((dummy/10)*10)+fd;
    	dummy1=(pow(10,(c)));
       	dummy=dummy%dummy1;
       	dummy+=(ld*pow(10,c));
	cout<<"Entered Number:"<<dummy2<<"\n";		
        	cout<<"Modified Number"<<dummy<<"\n";
        	return 0;
        }
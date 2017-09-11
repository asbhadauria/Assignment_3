#include <iostream>
using namespace std;

int main() {
	int n,a=1,b=1,c;
	cout<<"Enter number of terms:";
	cin>>n;
	cout<<"1"<<"\n"<<"1"<<"\n";
	for(int i=3;i<=n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			cout<<c<<"\n";
		}
	return 0;
}
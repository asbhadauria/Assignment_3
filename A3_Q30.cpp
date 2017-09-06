#include <iostream>
using namespace std;

int main() {
	int n,c=1;
	cout<<"Enter the number:";
	cin>>n;
	while(c<=10)
	{
		cout<<n<<"X"<<c<<"="<<(n*c)<<"\n";
		c++;
	}
	return 0;
}
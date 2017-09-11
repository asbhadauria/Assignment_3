#include <iostream>
using namespace std;

int main() {
	int num;
	cout<<"Enter your Number:"<<endl;
	cin>>num;
	cout<<"Factors:";
	for(int i=1;i<=num;i++)
		if(num%i==0 && num!=i)
			cout<<i<<",";
		else if(num%i==0 && num==i)
			cout<<i;
	return 0;
}
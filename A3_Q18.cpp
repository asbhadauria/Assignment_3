#include <iostream>
using namespace std;

int main() {
	float sp,cp,pro,los,pp,lp;
	cout<<"Enter Cost Price:";
	cin>>cp;
	cout<<"Enter Selling Price:";
	cin>>sp;
	if(cp>sp)
		{
			los=cp-sp;
			cout<<"Loss:"<<los<<"\n";
			cout<<"Loss Percentage:"<<(los/cp)*100;
		}
	else
		{
			pro=sp-cp;
			cout<<"Profit:"<<pro<<"\n";
			cout<<"Profit Percentage:"<<(pro/cp)*100;
		}
	return 0;
}